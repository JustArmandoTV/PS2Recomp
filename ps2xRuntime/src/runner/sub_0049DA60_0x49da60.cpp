#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049DA60
// Address: 0x49da60 - 0x49df80
void sub_0049DA60_0x49da60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049DA60_0x49da60");
#endif

    switch (ctx->pc) {
        case 0x49da60u: goto label_49da60;
        case 0x49da64u: goto label_49da64;
        case 0x49da68u: goto label_49da68;
        case 0x49da6cu: goto label_49da6c;
        case 0x49da70u: goto label_49da70;
        case 0x49da74u: goto label_49da74;
        case 0x49da78u: goto label_49da78;
        case 0x49da7cu: goto label_49da7c;
        case 0x49da80u: goto label_49da80;
        case 0x49da84u: goto label_49da84;
        case 0x49da88u: goto label_49da88;
        case 0x49da8cu: goto label_49da8c;
        case 0x49da90u: goto label_49da90;
        case 0x49da94u: goto label_49da94;
        case 0x49da98u: goto label_49da98;
        case 0x49da9cu: goto label_49da9c;
        case 0x49daa0u: goto label_49daa0;
        case 0x49daa4u: goto label_49daa4;
        case 0x49daa8u: goto label_49daa8;
        case 0x49daacu: goto label_49daac;
        case 0x49dab0u: goto label_49dab0;
        case 0x49dab4u: goto label_49dab4;
        case 0x49dab8u: goto label_49dab8;
        case 0x49dabcu: goto label_49dabc;
        case 0x49dac0u: goto label_49dac0;
        case 0x49dac4u: goto label_49dac4;
        case 0x49dac8u: goto label_49dac8;
        case 0x49daccu: goto label_49dacc;
        case 0x49dad0u: goto label_49dad0;
        case 0x49dad4u: goto label_49dad4;
        case 0x49dad8u: goto label_49dad8;
        case 0x49dadcu: goto label_49dadc;
        case 0x49dae0u: goto label_49dae0;
        case 0x49dae4u: goto label_49dae4;
        case 0x49dae8u: goto label_49dae8;
        case 0x49daecu: goto label_49daec;
        case 0x49daf0u: goto label_49daf0;
        case 0x49daf4u: goto label_49daf4;
        case 0x49daf8u: goto label_49daf8;
        case 0x49dafcu: goto label_49dafc;
        case 0x49db00u: goto label_49db00;
        case 0x49db04u: goto label_49db04;
        case 0x49db08u: goto label_49db08;
        case 0x49db0cu: goto label_49db0c;
        case 0x49db10u: goto label_49db10;
        case 0x49db14u: goto label_49db14;
        case 0x49db18u: goto label_49db18;
        case 0x49db1cu: goto label_49db1c;
        case 0x49db20u: goto label_49db20;
        case 0x49db24u: goto label_49db24;
        case 0x49db28u: goto label_49db28;
        case 0x49db2cu: goto label_49db2c;
        case 0x49db30u: goto label_49db30;
        case 0x49db34u: goto label_49db34;
        case 0x49db38u: goto label_49db38;
        case 0x49db3cu: goto label_49db3c;
        case 0x49db40u: goto label_49db40;
        case 0x49db44u: goto label_49db44;
        case 0x49db48u: goto label_49db48;
        case 0x49db4cu: goto label_49db4c;
        case 0x49db50u: goto label_49db50;
        case 0x49db54u: goto label_49db54;
        case 0x49db58u: goto label_49db58;
        case 0x49db5cu: goto label_49db5c;
        case 0x49db60u: goto label_49db60;
        case 0x49db64u: goto label_49db64;
        case 0x49db68u: goto label_49db68;
        case 0x49db6cu: goto label_49db6c;
        case 0x49db70u: goto label_49db70;
        case 0x49db74u: goto label_49db74;
        case 0x49db78u: goto label_49db78;
        case 0x49db7cu: goto label_49db7c;
        case 0x49db80u: goto label_49db80;
        case 0x49db84u: goto label_49db84;
        case 0x49db88u: goto label_49db88;
        case 0x49db8cu: goto label_49db8c;
        case 0x49db90u: goto label_49db90;
        case 0x49db94u: goto label_49db94;
        case 0x49db98u: goto label_49db98;
        case 0x49db9cu: goto label_49db9c;
        case 0x49dba0u: goto label_49dba0;
        case 0x49dba4u: goto label_49dba4;
        case 0x49dba8u: goto label_49dba8;
        case 0x49dbacu: goto label_49dbac;
        case 0x49dbb0u: goto label_49dbb0;
        case 0x49dbb4u: goto label_49dbb4;
        case 0x49dbb8u: goto label_49dbb8;
        case 0x49dbbcu: goto label_49dbbc;
        case 0x49dbc0u: goto label_49dbc0;
        case 0x49dbc4u: goto label_49dbc4;
        case 0x49dbc8u: goto label_49dbc8;
        case 0x49dbccu: goto label_49dbcc;
        case 0x49dbd0u: goto label_49dbd0;
        case 0x49dbd4u: goto label_49dbd4;
        case 0x49dbd8u: goto label_49dbd8;
        case 0x49dbdcu: goto label_49dbdc;
        case 0x49dbe0u: goto label_49dbe0;
        case 0x49dbe4u: goto label_49dbe4;
        case 0x49dbe8u: goto label_49dbe8;
        case 0x49dbecu: goto label_49dbec;
        case 0x49dbf0u: goto label_49dbf0;
        case 0x49dbf4u: goto label_49dbf4;
        case 0x49dbf8u: goto label_49dbf8;
        case 0x49dbfcu: goto label_49dbfc;
        case 0x49dc00u: goto label_49dc00;
        case 0x49dc04u: goto label_49dc04;
        case 0x49dc08u: goto label_49dc08;
        case 0x49dc0cu: goto label_49dc0c;
        case 0x49dc10u: goto label_49dc10;
        case 0x49dc14u: goto label_49dc14;
        case 0x49dc18u: goto label_49dc18;
        case 0x49dc1cu: goto label_49dc1c;
        case 0x49dc20u: goto label_49dc20;
        case 0x49dc24u: goto label_49dc24;
        case 0x49dc28u: goto label_49dc28;
        case 0x49dc2cu: goto label_49dc2c;
        case 0x49dc30u: goto label_49dc30;
        case 0x49dc34u: goto label_49dc34;
        case 0x49dc38u: goto label_49dc38;
        case 0x49dc3cu: goto label_49dc3c;
        case 0x49dc40u: goto label_49dc40;
        case 0x49dc44u: goto label_49dc44;
        case 0x49dc48u: goto label_49dc48;
        case 0x49dc4cu: goto label_49dc4c;
        case 0x49dc50u: goto label_49dc50;
        case 0x49dc54u: goto label_49dc54;
        case 0x49dc58u: goto label_49dc58;
        case 0x49dc5cu: goto label_49dc5c;
        case 0x49dc60u: goto label_49dc60;
        case 0x49dc64u: goto label_49dc64;
        case 0x49dc68u: goto label_49dc68;
        case 0x49dc6cu: goto label_49dc6c;
        case 0x49dc70u: goto label_49dc70;
        case 0x49dc74u: goto label_49dc74;
        case 0x49dc78u: goto label_49dc78;
        case 0x49dc7cu: goto label_49dc7c;
        case 0x49dc80u: goto label_49dc80;
        case 0x49dc84u: goto label_49dc84;
        case 0x49dc88u: goto label_49dc88;
        case 0x49dc8cu: goto label_49dc8c;
        case 0x49dc90u: goto label_49dc90;
        case 0x49dc94u: goto label_49dc94;
        case 0x49dc98u: goto label_49dc98;
        case 0x49dc9cu: goto label_49dc9c;
        case 0x49dca0u: goto label_49dca0;
        case 0x49dca4u: goto label_49dca4;
        case 0x49dca8u: goto label_49dca8;
        case 0x49dcacu: goto label_49dcac;
        case 0x49dcb0u: goto label_49dcb0;
        case 0x49dcb4u: goto label_49dcb4;
        case 0x49dcb8u: goto label_49dcb8;
        case 0x49dcbcu: goto label_49dcbc;
        case 0x49dcc0u: goto label_49dcc0;
        case 0x49dcc4u: goto label_49dcc4;
        case 0x49dcc8u: goto label_49dcc8;
        case 0x49dcccu: goto label_49dccc;
        case 0x49dcd0u: goto label_49dcd0;
        case 0x49dcd4u: goto label_49dcd4;
        case 0x49dcd8u: goto label_49dcd8;
        case 0x49dcdcu: goto label_49dcdc;
        case 0x49dce0u: goto label_49dce0;
        case 0x49dce4u: goto label_49dce4;
        case 0x49dce8u: goto label_49dce8;
        case 0x49dcecu: goto label_49dcec;
        case 0x49dcf0u: goto label_49dcf0;
        case 0x49dcf4u: goto label_49dcf4;
        case 0x49dcf8u: goto label_49dcf8;
        case 0x49dcfcu: goto label_49dcfc;
        case 0x49dd00u: goto label_49dd00;
        case 0x49dd04u: goto label_49dd04;
        case 0x49dd08u: goto label_49dd08;
        case 0x49dd0cu: goto label_49dd0c;
        case 0x49dd10u: goto label_49dd10;
        case 0x49dd14u: goto label_49dd14;
        case 0x49dd18u: goto label_49dd18;
        case 0x49dd1cu: goto label_49dd1c;
        case 0x49dd20u: goto label_49dd20;
        case 0x49dd24u: goto label_49dd24;
        case 0x49dd28u: goto label_49dd28;
        case 0x49dd2cu: goto label_49dd2c;
        case 0x49dd30u: goto label_49dd30;
        case 0x49dd34u: goto label_49dd34;
        case 0x49dd38u: goto label_49dd38;
        case 0x49dd3cu: goto label_49dd3c;
        case 0x49dd40u: goto label_49dd40;
        case 0x49dd44u: goto label_49dd44;
        case 0x49dd48u: goto label_49dd48;
        case 0x49dd4cu: goto label_49dd4c;
        case 0x49dd50u: goto label_49dd50;
        case 0x49dd54u: goto label_49dd54;
        case 0x49dd58u: goto label_49dd58;
        case 0x49dd5cu: goto label_49dd5c;
        case 0x49dd60u: goto label_49dd60;
        case 0x49dd64u: goto label_49dd64;
        case 0x49dd68u: goto label_49dd68;
        case 0x49dd6cu: goto label_49dd6c;
        case 0x49dd70u: goto label_49dd70;
        case 0x49dd74u: goto label_49dd74;
        case 0x49dd78u: goto label_49dd78;
        case 0x49dd7cu: goto label_49dd7c;
        case 0x49dd80u: goto label_49dd80;
        case 0x49dd84u: goto label_49dd84;
        case 0x49dd88u: goto label_49dd88;
        case 0x49dd8cu: goto label_49dd8c;
        case 0x49dd90u: goto label_49dd90;
        case 0x49dd94u: goto label_49dd94;
        case 0x49dd98u: goto label_49dd98;
        case 0x49dd9cu: goto label_49dd9c;
        case 0x49dda0u: goto label_49dda0;
        case 0x49dda4u: goto label_49dda4;
        case 0x49dda8u: goto label_49dda8;
        case 0x49ddacu: goto label_49ddac;
        case 0x49ddb0u: goto label_49ddb0;
        case 0x49ddb4u: goto label_49ddb4;
        case 0x49ddb8u: goto label_49ddb8;
        case 0x49ddbcu: goto label_49ddbc;
        case 0x49ddc0u: goto label_49ddc0;
        case 0x49ddc4u: goto label_49ddc4;
        case 0x49ddc8u: goto label_49ddc8;
        case 0x49ddccu: goto label_49ddcc;
        case 0x49ddd0u: goto label_49ddd0;
        case 0x49ddd4u: goto label_49ddd4;
        case 0x49ddd8u: goto label_49ddd8;
        case 0x49dddcu: goto label_49dddc;
        case 0x49dde0u: goto label_49dde0;
        case 0x49dde4u: goto label_49dde4;
        case 0x49dde8u: goto label_49dde8;
        case 0x49ddecu: goto label_49ddec;
        case 0x49ddf0u: goto label_49ddf0;
        case 0x49ddf4u: goto label_49ddf4;
        case 0x49ddf8u: goto label_49ddf8;
        case 0x49ddfcu: goto label_49ddfc;
        case 0x49de00u: goto label_49de00;
        case 0x49de04u: goto label_49de04;
        case 0x49de08u: goto label_49de08;
        case 0x49de0cu: goto label_49de0c;
        case 0x49de10u: goto label_49de10;
        case 0x49de14u: goto label_49de14;
        case 0x49de18u: goto label_49de18;
        case 0x49de1cu: goto label_49de1c;
        case 0x49de20u: goto label_49de20;
        case 0x49de24u: goto label_49de24;
        case 0x49de28u: goto label_49de28;
        case 0x49de2cu: goto label_49de2c;
        case 0x49de30u: goto label_49de30;
        case 0x49de34u: goto label_49de34;
        case 0x49de38u: goto label_49de38;
        case 0x49de3cu: goto label_49de3c;
        case 0x49de40u: goto label_49de40;
        case 0x49de44u: goto label_49de44;
        case 0x49de48u: goto label_49de48;
        case 0x49de4cu: goto label_49de4c;
        case 0x49de50u: goto label_49de50;
        case 0x49de54u: goto label_49de54;
        case 0x49de58u: goto label_49de58;
        case 0x49de5cu: goto label_49de5c;
        case 0x49de60u: goto label_49de60;
        case 0x49de64u: goto label_49de64;
        case 0x49de68u: goto label_49de68;
        case 0x49de6cu: goto label_49de6c;
        case 0x49de70u: goto label_49de70;
        case 0x49de74u: goto label_49de74;
        case 0x49de78u: goto label_49de78;
        case 0x49de7cu: goto label_49de7c;
        case 0x49de80u: goto label_49de80;
        case 0x49de84u: goto label_49de84;
        case 0x49de88u: goto label_49de88;
        case 0x49de8cu: goto label_49de8c;
        case 0x49de90u: goto label_49de90;
        case 0x49de94u: goto label_49de94;
        case 0x49de98u: goto label_49de98;
        case 0x49de9cu: goto label_49de9c;
        case 0x49dea0u: goto label_49dea0;
        case 0x49dea4u: goto label_49dea4;
        case 0x49dea8u: goto label_49dea8;
        case 0x49deacu: goto label_49deac;
        case 0x49deb0u: goto label_49deb0;
        case 0x49deb4u: goto label_49deb4;
        case 0x49deb8u: goto label_49deb8;
        case 0x49debcu: goto label_49debc;
        case 0x49dec0u: goto label_49dec0;
        case 0x49dec4u: goto label_49dec4;
        case 0x49dec8u: goto label_49dec8;
        case 0x49deccu: goto label_49decc;
        case 0x49ded0u: goto label_49ded0;
        case 0x49ded4u: goto label_49ded4;
        case 0x49ded8u: goto label_49ded8;
        case 0x49dedcu: goto label_49dedc;
        case 0x49dee0u: goto label_49dee0;
        case 0x49dee4u: goto label_49dee4;
        case 0x49dee8u: goto label_49dee8;
        case 0x49deecu: goto label_49deec;
        case 0x49def0u: goto label_49def0;
        case 0x49def4u: goto label_49def4;
        case 0x49def8u: goto label_49def8;
        case 0x49defcu: goto label_49defc;
        case 0x49df00u: goto label_49df00;
        case 0x49df04u: goto label_49df04;
        case 0x49df08u: goto label_49df08;
        case 0x49df0cu: goto label_49df0c;
        case 0x49df10u: goto label_49df10;
        case 0x49df14u: goto label_49df14;
        case 0x49df18u: goto label_49df18;
        case 0x49df1cu: goto label_49df1c;
        case 0x49df20u: goto label_49df20;
        case 0x49df24u: goto label_49df24;
        case 0x49df28u: goto label_49df28;
        case 0x49df2cu: goto label_49df2c;
        case 0x49df30u: goto label_49df30;
        case 0x49df34u: goto label_49df34;
        case 0x49df38u: goto label_49df38;
        case 0x49df3cu: goto label_49df3c;
        case 0x49df40u: goto label_49df40;
        case 0x49df44u: goto label_49df44;
        case 0x49df48u: goto label_49df48;
        case 0x49df4cu: goto label_49df4c;
        case 0x49df50u: goto label_49df50;
        case 0x49df54u: goto label_49df54;
        case 0x49df58u: goto label_49df58;
        case 0x49df5cu: goto label_49df5c;
        case 0x49df60u: goto label_49df60;
        case 0x49df64u: goto label_49df64;
        case 0x49df68u: goto label_49df68;
        case 0x49df6cu: goto label_49df6c;
        case 0x49df70u: goto label_49df70;
        case 0x49df74u: goto label_49df74;
        case 0x49df78u: goto label_49df78;
        case 0x49df7cu: goto label_49df7c;
        default: break;
    }

    ctx->pc = 0x49da60u;

label_49da60:
    // 0x49da60: 0x3e00008  jr          $ra
label_49da64:
    if (ctx->pc == 0x49DA64u) {
        ctx->pc = 0x49DA64u;
            // 0x49da64: 0x8c8200f8  lw          $v0, 0xF8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
        ctx->pc = 0x49DA68u;
        goto label_49da68;
    }
    ctx->pc = 0x49DA60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49DA64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49DA60u;
            // 0x49da64: 0x8c8200f8  lw          $v0, 0xF8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 248)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49DA68u;
label_49da68:
    // 0x49da68: 0x0  nop
    ctx->pc = 0x49da68u;
    // NOP
label_49da6c:
    // 0x49da6c: 0x0  nop
    ctx->pc = 0x49da6cu;
    // NOP
label_49da70:
    // 0x49da70: 0xc4800030  lwc1        $f0, 0x30($a0)
    ctx->pc = 0x49da70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49da74:
    // 0x49da74: 0xe48000f4  swc1        $f0, 0xF4($a0)
    ctx->pc = 0x49da74u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 244), bits); }
label_49da78:
    // 0x49da78: 0xc4800034  lwc1        $f0, 0x34($a0)
    ctx->pc = 0x49da78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49da7c:
    // 0x49da7c: 0xe4800154  swc1        $f0, 0x154($a0)
    ctx->pc = 0x49da7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 340), bits); }
label_49da80:
    // 0x49da80: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x49da80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
label_49da84:
    // 0x49da84: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
label_49da88:
    if (ctx->pc == 0x49DA88u) {
        ctx->pc = 0x49DA88u;
            // 0x49da88: 0xc4800170  lwc1        $f0, 0x170($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->pc = 0x49DA8Cu;
        goto label_49da8c;
    }
    ctx->pc = 0x49DA84u;
    {
        const bool branch_taken_0x49da84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x49da84) {
            ctx->pc = 0x49DA88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49DA84u;
            // 0x49da88: 0xc4800170  lwc1        $f0, 0x170($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x49DAA0u;
            goto label_49daa0;
        }
    }
    ctx->pc = 0x49DA8Cu;
label_49da8c:
    // 0x49da8c: 0xc4800170  lwc1        $f0, 0x170($a0)
    ctx->pc = 0x49da8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49da90:
    // 0x49da90: 0x3c034190  lui         $v1, 0x4190
    ctx->pc = 0x49da90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16784 << 16));
label_49da94:
    // 0x49da94: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x49da94u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_49da98:
    // 0x49da98: 0x10000005  b           . + 4 + (0x5 << 2)
label_49da9c:
    if (ctx->pc == 0x49DA9Cu) {
        ctx->pc = 0x49DA9Cu;
            // 0x49da9c: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->pc = 0x49DAA0u;
        goto label_49daa0;
    }
    ctx->pc = 0x49DA98u;
    {
        const bool branch_taken_0x49da98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DA9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49DA98u;
            // 0x49da9c: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x49da98) {
            ctx->pc = 0x49DAB0u;
            goto label_49dab0;
        }
    }
    ctx->pc = 0x49DAA0u;
label_49daa0:
    // 0x49daa0: 0x3c03c1e4  lui         $v1, 0xC1E4
    ctx->pc = 0x49daa0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49636 << 16));
label_49daa4:
    // 0x49daa4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x49daa4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_49daa8:
    // 0x49daa8: 0x0  nop
    ctx->pc = 0x49daa8u;
    // NOP
label_49daac:
    // 0x49daac: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x49daacu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_49dab0:
    // 0x49dab0: 0xc48000f4  lwc1        $f0, 0xF4($a0)
    ctx->pc = 0x49dab0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49dab4:
    // 0x49dab4: 0x0  nop
    ctx->pc = 0x49dab4u;
    // NOP
label_49dab8:
    // 0x49dab8: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x49dab8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_49dabc:
    // 0x49dabc: 0xe48000f0  swc1        $f0, 0xF0($a0)
    ctx->pc = 0x49dabcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 240), bits); }
label_49dac0:
    // 0x49dac0: 0xac800110  sw          $zero, 0x110($a0)
    ctx->pc = 0x49dac0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 272), GPR_U32(ctx, 0));
label_49dac4:
    // 0x49dac4: 0xe4800114  swc1        $f0, 0x114($a0)
    ctx->pc = 0x49dac4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 276), bits); }
label_49dac8:
    // 0x49dac8: 0xac800118  sw          $zero, 0x118($a0)
    ctx->pc = 0x49dac8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 280), GPR_U32(ctx, 0));
label_49dacc:
    // 0x49dacc: 0xac80011c  sw          $zero, 0x11C($a0)
    ctx->pc = 0x49daccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 284), GPR_U32(ctx, 0));
label_49dad0:
    // 0x49dad0: 0xac800120  sw          $zero, 0x120($a0)
    ctx->pc = 0x49dad0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 288), GPR_U32(ctx, 0));
label_49dad4:
    // 0x49dad4: 0xe4800124  swc1        $f0, 0x124($a0)
    ctx->pc = 0x49dad4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 292), bits); }
label_49dad8:
    // 0x49dad8: 0xac800128  sw          $zero, 0x128($a0)
    ctx->pc = 0x49dad8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 296), GPR_U32(ctx, 0));
label_49dadc:
    // 0x49dadc: 0x3e00008  jr          $ra
label_49dae0:
    if (ctx->pc == 0x49DAE0u) {
        ctx->pc = 0x49DAE0u;
            // 0x49dae0: 0xac80012c  sw          $zero, 0x12C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 300), GPR_U32(ctx, 0));
        ctx->pc = 0x49DAE4u;
        goto label_49dae4;
    }
    ctx->pc = 0x49DADCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49DAE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49DADCu;
            // 0x49dae0: 0xac80012c  sw          $zero, 0x12C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 300), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49DAE4u;
label_49dae4:
    // 0x49dae4: 0x0  nop
    ctx->pc = 0x49dae4u;
    // NOP
label_49dae8:
    // 0x49dae8: 0x0  nop
    ctx->pc = 0x49dae8u;
    // NOP
label_49daec:
    // 0x49daec: 0x0  nop
    ctx->pc = 0x49daecu;
    // NOP
label_49daf0:
    // 0x49daf0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x49daf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_49daf4:
    // 0x49daf4: 0x3c0200e1  lui         $v0, 0xE1
    ctx->pc = 0x49daf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)225 << 16));
label_49daf8:
    // 0x49daf8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49daf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_49dafc:
    // 0x49dafc: 0x34430140  ori         $v1, $v0, 0x140
    ctx->pc = 0x49dafcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)320);
label_49db00:
    // 0x49db00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49db00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49db04:
    // 0x49db04: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49db04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49db08:
    // 0x49db08: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49db08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49db0c:
    // 0x49db0c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x49db0cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49db10:
    // 0x49db10: 0x8c850050  lw          $a1, 0x50($a0)
    ctx->pc = 0x49db10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
label_49db14:
    // 0x49db14: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49db14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49db18:
    // 0x49db18: 0xaca3002c  sw          $v1, 0x2C($a1)
    ctx->pc = 0x49db18u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 44), GPR_U32(ctx, 3));
label_49db1c:
    // 0x49db1c: 0x8c42e3e0  lw          $v0, -0x1C20($v0)
    ctx->pc = 0x49db1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960096)));
label_49db20:
    // 0x49db20: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x49db20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_49db24:
    // 0x49db24: 0xc08bff0  jal         func_22FFC0
label_49db28:
    if (ctx->pc == 0x49DB28u) {
        ctx->pc = 0x49DB28u;
            // 0x49db28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49DB2Cu;
        goto label_49db2c;
    }
    ctx->pc = 0x49DB24u;
    SET_GPR_U32(ctx, 31, 0x49DB2Cu);
    ctx->pc = 0x49DB28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49DB24u;
            // 0x49db28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22FFC0u;
    if (runtime->hasFunction(0x22FFC0u)) {
        auto targetFn = runtime->lookupFunction(0x22FFC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49DB2Cu; }
        if (ctx->pc != 0x49DB2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022FFC0_0x22ffc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49DB2Cu; }
        if (ctx->pc != 0x49DB2Cu) { return; }
    }
    ctx->pc = 0x49DB2Cu;
label_49db2c:
    // 0x49db2c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x49db2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_49db30:
    // 0x49db30: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x49db30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_49db34:
    // 0x49db34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x49db34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49db38:
    // 0x49db38: 0xc08914c  jal         func_224530
label_49db3c:
    if (ctx->pc == 0x49DB3Cu) {
        ctx->pc = 0x49DB3Cu;
            // 0x49db3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49DB40u;
        goto label_49db40;
    }
    ctx->pc = 0x49DB38u;
    SET_GPR_U32(ctx, 31, 0x49DB40u);
    ctx->pc = 0x49DB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49DB38u;
            // 0x49db3c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x224530u;
    if (runtime->hasFunction(0x224530u)) {
        auto targetFn = runtime->lookupFunction(0x224530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49DB40u; }
        if (ctx->pc != 0x49DB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00224530_0x224530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49DB40u; }
        if (ctx->pc != 0x49DB40u) { return; }
    }
    ctx->pc = 0x49DB40u;
label_49db40:
    // 0x49db40: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x49db40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_49db44:
    // 0x49db44: 0xafa00034  sw          $zero, 0x34($sp)
    ctx->pc = 0x49db44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 0));
label_49db48:
    // 0x49db48: 0xafa00038  sw          $zero, 0x38($sp)
    ctx->pc = 0x49db48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 0));
label_49db4c:
    // 0x49db4c: 0xafa0003c  sw          $zero, 0x3C($sp)
    ctx->pc = 0x49db4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 0));
label_49db50:
    // 0x49db50: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x49db50u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
label_49db54:
    // 0x49db54: 0xc088b74  jal         func_222DD0
label_49db58:
    if (ctx->pc == 0x49DB58u) {
        ctx->pc = 0x49DB58u;
            // 0x49db58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49DB5Cu;
        goto label_49db5c;
    }
    ctx->pc = 0x49DB54u;
    SET_GPR_U32(ctx, 31, 0x49DB5Cu);
    ctx->pc = 0x49DB58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49DB54u;
            // 0x49db58: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x222DD0u;
    if (runtime->hasFunction(0x222DD0u)) {
        auto targetFn = runtime->lookupFunction(0x222DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49DB5Cu; }
        if (ctx->pc != 0x49DB5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00222DD0_0x222dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49DB5Cu; }
        if (ctx->pc != 0x49DB5Cu) { return; }
    }
    ctx->pc = 0x49DB5Cu;
label_49db5c:
    // 0x49db5c: 0x8e3900a0  lw          $t9, 0xA0($s1)
    ctx->pc = 0x49db5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 160)));
label_49db60:
    // 0x49db60: 0x262400a0  addiu       $a0, $s1, 0xA0
    ctx->pc = 0x49db60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 160));
label_49db64:
    // 0x49db64: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x49db64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_49db68:
    // 0x49db68: 0x320f809  jalr        $t9
label_49db6c:
    if (ctx->pc == 0x49DB6Cu) {
        ctx->pc = 0x49DB6Cu;
            // 0x49db6c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x49DB70u;
        goto label_49db70;
    }
    ctx->pc = 0x49DB68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49DB70u);
        ctx->pc = 0x49DB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49DB68u;
            // 0x49db6c: 0x27a50030  addiu       $a1, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49DB70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49DB70u; }
            if (ctx->pc != 0x49DB70u) { return; }
        }
        }
    }
    ctx->pc = 0x49DB70u;
label_49db70:
    // 0x49db70: 0xc0e393c  jal         func_38E4F0
label_49db74:
    if (ctx->pc == 0x49DB74u) {
        ctx->pc = 0x49DB74u;
            // 0x49db74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49DB78u;
        goto label_49db78;
    }
    ctx->pc = 0x49DB70u;
    SET_GPR_U32(ctx, 31, 0x49DB78u);
    ctx->pc = 0x49DB74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49DB70u;
            // 0x49db74: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x38E4F0u;
    if (runtime->hasFunction(0x38E4F0u)) {
        auto targetFn = runtime->lookupFunction(0x38E4F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49DB78u; }
        if (ctx->pc != 0x49DB78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0038E4F0_0x38e4f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49DB78u; }
        if (ctx->pc != 0x49DB78u) { return; }
    }
    ctx->pc = 0x49DB78u;
label_49db78:
    // 0x49db78: 0xae0000f8  sw          $zero, 0xF8($s0)
    ctx->pc = 0x49db78u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 248), GPR_U32(ctx, 0));
label_49db7c:
    // 0x49db7c: 0xae0000fc  sw          $zero, 0xFC($s0)
    ctx->pc = 0x49db7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 252), GPR_U32(ctx, 0));
label_49db80:
    // 0x49db80: 0xc60c0160  lwc1        $f12, 0x160($s0)
    ctx->pc = 0x49db80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 352)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_49db84:
    // 0x49db84: 0xc60d0164  lwc1        $f13, 0x164($s0)
    ctx->pc = 0x49db84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_49db88:
    // 0x49db88: 0xc60e0168  lwc1        $f14, 0x168($s0)
    ctx->pc = 0x49db88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_49db8c:
    // 0x49db8c: 0xc04cbd8  jal         func_132F60
label_49db90:
    if (ctx->pc == 0x49DB90u) {
        ctx->pc = 0x49DB90u;
            // 0x49db90: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->pc = 0x49DB94u;
        goto label_49db94;
    }
    ctx->pc = 0x49DB8Cu;
    SET_GPR_U32(ctx, 31, 0x49DB94u);
    ctx->pc = 0x49DB90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49DB8Cu;
            // 0x49db90: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49DB94u; }
        if (ctx->pc != 0x49DB94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49DB94u; }
        if (ctx->pc != 0x49DB94u) { return; }
    }
    ctx->pc = 0x49DB94u;
label_49db94:
    // 0x49db94: 0xc6000164  lwc1        $f0, 0x164($s0)
    ctx->pc = 0x49db94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 356)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49db98:
    // 0x49db98: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x49db98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_49db9c:
    // 0x49db9c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x49db9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_49dba0:
    // 0x49dba0: 0xe60000dc  swc1        $f0, 0xDC($s0)
    ctx->pc = 0x49dba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 220), bits); }
label_49dba4:
    // 0x49dba4: 0xa6000130  sh          $zero, 0x130($s0)
    ctx->pc = 0x49dba4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 304), (uint16_t)GPR_U32(ctx, 0));
label_49dba8:
    // 0x49dba8: 0xae0000d0  sw          $zero, 0xD0($s0)
    ctx->pc = 0x49dba8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 208), GPR_U32(ctx, 0));
label_49dbac:
    // 0x49dbac: 0xa2030064  sb          $v1, 0x64($s0)
    ctx->pc = 0x49dbacu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 100), (uint8_t)GPR_U32(ctx, 3));
label_49dbb0:
    // 0x49dbb0: 0xa2000065  sb          $zero, 0x65($s0)
    ctx->pc = 0x49dbb0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 101), (uint8_t)GPR_U32(ctx, 0));
label_49dbb4:
    // 0x49dbb4: 0xa2020066  sb          $v0, 0x66($s0)
    ctx->pc = 0x49dbb4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 102), (uint8_t)GPR_U32(ctx, 2));
label_49dbb8:
    // 0x49dbb8: 0xa2000067  sb          $zero, 0x67($s0)
    ctx->pc = 0x49dbb8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 103), (uint8_t)GPR_U32(ctx, 0));
label_49dbbc:
    // 0x49dbbc: 0xae000158  sw          $zero, 0x158($s0)
    ctx->pc = 0x49dbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 344), GPR_U32(ctx, 0));
label_49dbc0:
    // 0x49dbc0: 0xc122c94  jal         func_48B250
label_49dbc4:
    if (ctx->pc == 0x49DBC4u) {
        ctx->pc = 0x49DBC4u;
            // 0x49dbc4: 0x8e040174  lw          $a0, 0x174($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
        ctx->pc = 0x49DBC8u;
        goto label_49dbc8;
    }
    ctx->pc = 0x49DBC0u;
    SET_GPR_U32(ctx, 31, 0x49DBC8u);
    ctx->pc = 0x49DBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49DBC0u;
            // 0x49dbc4: 0x8e040174  lw          $a0, 0x174($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 372)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x48B250u;
    if (runtime->hasFunction(0x48B250u)) {
        auto targetFn = runtime->lookupFunction(0x48B250u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49DBC8u; }
        if (ctx->pc != 0x49DBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0048B250_0x48b250(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49DBC8u; }
        if (ctx->pc != 0x49DBC8u) { return; }
    }
    ctx->pc = 0x49DBC8u;
label_49dbc8:
    // 0x49dbc8: 0xae000178  sw          $zero, 0x178($s0)
    ctx->pc = 0x49dbc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 376), GPR_U32(ctx, 0));
label_49dbcc:
    // 0x49dbcc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49dbccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_49dbd0:
    // 0x49dbd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49dbd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49dbd4:
    // 0x49dbd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49dbd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49dbd8:
    // 0x49dbd8: 0x3e00008  jr          $ra
label_49dbdc:
    if (ctx->pc == 0x49DBDCu) {
        ctx->pc = 0x49DBDCu;
            // 0x49dbdc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x49DBE0u;
        goto label_49dbe0;
    }
    ctx->pc = 0x49DBD8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49DBDCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49DBD8u;
            // 0x49dbdc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49DBE0u;
label_49dbe0:
    // 0x49dbe0: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x49dbe0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_49dbe4:
    // 0x49dbe4: 0x84830130  lh          $v1, 0x130($a0)
    ctx->pc = 0x49dbe4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 304)));
label_49dbe8:
    // 0x49dbe8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x49dbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_49dbec:
    // 0x49dbec: 0x3e00008  jr          $ra
label_49dbf0:
    if (ctx->pc == 0x49DBF0u) {
        ctx->pc = 0x49DBF0u;
            // 0x49dbf0: 0xa4830130  sh          $v1, 0x130($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 304), (uint16_t)GPR_U32(ctx, 3));
        ctx->pc = 0x49DBF4u;
        goto label_49dbf4;
    }
    ctx->pc = 0x49DBECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49DBF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49DBECu;
            // 0x49dbf0: 0xa4830130  sh          $v1, 0x130($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 304), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49DBF4u;
label_49dbf4:
    // 0x49dbf4: 0x0  nop
    ctx->pc = 0x49dbf4u;
    // NOP
label_49dbf8:
    // 0x49dbf8: 0x0  nop
    ctx->pc = 0x49dbf8u;
    // NOP
label_49dbfc:
    // 0x49dbfc: 0x0  nop
    ctx->pc = 0x49dbfcu;
    // NOP
label_49dc00:
    // 0x49dc00: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x49dc00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
label_49dc04:
    // 0x49dc04: 0x8ca300f8  lw          $v1, 0xF8($a1)
    ctx->pc = 0x49dc04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 248)));
label_49dc08:
    // 0x49dc08: 0x5460000a  bnel        $v1, $zero, . + 4 + (0xA << 2)
label_49dc0c:
    if (ctx->pc == 0x49DC0Cu) {
        ctx->pc = 0x49DC0Cu;
            // 0x49dc0c: 0x84a40130  lh          $a0, 0x130($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 304)));
        ctx->pc = 0x49DC10u;
        goto label_49dc10;
    }
    ctx->pc = 0x49DC08u;
    {
        const bool branch_taken_0x49dc08 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x49dc08) {
            ctx->pc = 0x49DC0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49DC08u;
            // 0x49dc0c: 0x84a40130  lh          $a0, 0x130($a1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 304)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49DC34u;
            goto label_49dc34;
        }
    }
    ctx->pc = 0x49DC10u;
label_49dc10:
    // 0x49dc10: 0xc4a100fc  lwc1        $f1, 0xFC($a1)
    ctx->pc = 0x49dc10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 252)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_49dc14:
    // 0x49dc14: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x49dc14u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_49dc18:
    // 0x49dc18: 0x0  nop
    ctx->pc = 0x49dc18u;
    // NOP
label_49dc1c:
    // 0x49dc1c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x49dc1cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_49dc20:
    // 0x49dc20: 0x45000003  bc1f        . + 4 + (0x3 << 2)
label_49dc24:
    if (ctx->pc == 0x49DC24u) {
        ctx->pc = 0x49DC28u;
        goto label_49dc28;
    }
    ctx->pc = 0x49DC20u;
    {
        const bool branch_taken_0x49dc20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x49dc20) {
            ctx->pc = 0x49DC30u;
            goto label_49dc30;
        }
    }
    ctx->pc = 0x49DC28u;
label_49dc28:
    // 0x49dc28: 0xc4a00154  lwc1        $f0, 0x154($a1)
    ctx->pc = 0x49dc28u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 340)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49dc2c:
    // 0x49dc2c: 0xe4a000fc  swc1        $f0, 0xFC($a1)
    ctx->pc = 0x49dc2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 252), bits); }
label_49dc30:
    // 0x49dc30: 0x84a40130  lh          $a0, 0x130($a1)
    ctx->pc = 0x49dc30u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 304)));
label_49dc34:
    // 0x49dc34: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x49dc34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
label_49dc38:
    // 0x49dc38: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x49dc38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_49dc3c:
    // 0x49dc3c: 0xa4a40130  sh          $a0, 0x130($a1)
    ctx->pc = 0x49dc3cu;
    WRITE16(ADD32(GPR_U32(ctx, 5), 304), (uint16_t)GPR_U32(ctx, 4));
label_49dc40:
    // 0x49dc40: 0x3e00008  jr          $ra
label_49dc44:
    if (ctx->pc == 0x49DC44u) {
        ctx->pc = 0x49DC44u;
            // 0x49dc44: 0xaca30178  sw          $v1, 0x178($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 376), GPR_U32(ctx, 3));
        ctx->pc = 0x49DC48u;
        goto label_49dc48;
    }
    ctx->pc = 0x49DC40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49DC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49DC40u;
            // 0x49dc44: 0xaca30178  sw          $v1, 0x178($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 376), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49DC48u;
label_49dc48:
    // 0x49dc48: 0x0  nop
    ctx->pc = 0x49dc48u;
    // NOP
label_49dc4c:
    // 0x49dc4c: 0x0  nop
    ctx->pc = 0x49dc4cu;
    // NOP
label_49dc50:
    // 0x49dc50: 0x3e00008  jr          $ra
label_49dc54:
    if (ctx->pc == 0x49DC54u) {
        ctx->pc = 0x49DC54u;
            // 0x49dc54: 0x24025a14  addiu       $v0, $zero, 0x5A14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23060));
        ctx->pc = 0x49DC58u;
        goto label_49dc58;
    }
    ctx->pc = 0x49DC50u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49DC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49DC50u;
            // 0x49dc54: 0x24025a14  addiu       $v0, $zero, 0x5A14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 23060));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49DC58u;
label_49dc58:
    // 0x49dc58: 0x0  nop
    ctx->pc = 0x49dc58u;
    // NOP
label_49dc5c:
    // 0x49dc5c: 0x0  nop
    ctx->pc = 0x49dc5cu;
    // NOP
label_49dc60:
    // 0x49dc60: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x49dc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_49dc64:
    // 0x49dc64: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x49dc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
label_49dc68:
    // 0x49dc68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x49dc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_49dc6c:
    // 0x49dc6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x49dc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_49dc70:
    // 0x49dc70: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x49dc70u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49dc74:
    // 0x49dc74: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x49dc74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_49dc78:
    // 0x49dc78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49dc78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49dc7c:
    // 0x49dc7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49dc7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49dc80:
    // 0x49dc80: 0x8c900070  lw          $s0, 0x70($a0)
    ctx->pc = 0x49dc80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_49dc84:
    // 0x49dc84: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
label_49dc88:
    if (ctx->pc == 0x49DC88u) {
        ctx->pc = 0x49DC88u;
            // 0x49dc88: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49DC8Cu;
        goto label_49dc8c;
    }
    ctx->pc = 0x49DC84u;
    {
        const bool branch_taken_0x49dc84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49DC84u;
            // 0x49dc88: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dc84) {
            ctx->pc = 0x49DCC8u;
            goto label_49dcc8;
        }
    }
    ctx->pc = 0x49DC8Cu;
label_49dc8c:
    // 0x49dc8c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x49dc8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49dc90:
    // 0x49dc90: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x49dc90u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49dc94:
    // 0x49dc94: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x49dc94u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49dc98:
    // 0x49dc98: 0x8e820074  lw          $v0, 0x74($s4)
    ctx->pc = 0x49dc98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 116)));
label_49dc9c:
    // 0x49dc9c: 0x511021  addu        $v0, $v0, $s1
    ctx->pc = 0x49dc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
label_49dca0:
    // 0x49dca0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x49dca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_49dca4:
    // 0x49dca4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x49dca4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49dca8:
    // 0x49dca8: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x49dca8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_49dcac:
    // 0x49dcac: 0x320f809  jalr        $t9
label_49dcb0:
    if (ctx->pc == 0x49DCB0u) {
        ctx->pc = 0x49DCB4u;
        goto label_49dcb4;
    }
    ctx->pc = 0x49DCACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49DCB4u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x49DCB4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49DCB4u; }
            if (ctx->pc != 0x49DCB4u) { return; }
        }
        }
    }
    ctx->pc = 0x49DCB4u;
label_49dcb4:
    // 0x49dcb4: 0x2629821  addu        $s3, $s3, $v0
    ctx->pc = 0x49dcb4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
label_49dcb8:
    // 0x49dcb8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x49dcb8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
label_49dcbc:
    // 0x49dcbc: 0x250102b  sltu        $v0, $s2, $s0
    ctx->pc = 0x49dcbcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
label_49dcc0:
    // 0x49dcc0: 0x1440fff5  bnez        $v0, . + 4 + (-0xB << 2)
label_49dcc4:
    if (ctx->pc == 0x49DCC4u) {
        ctx->pc = 0x49DCC4u;
            // 0x49dcc4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x49DCC8u;
        goto label_49dcc8;
    }
    ctx->pc = 0x49DCC0u;
    {
        const bool branch_taken_0x49dcc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x49DCC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49DCC0u;
            // 0x49dcc4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dcc0) {
            ctx->pc = 0x49DC98u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_49dc98;
        }
    }
    ctx->pc = 0x49DCC8u;
label_49dcc8:
    // 0x49dcc8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x49dcc8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_49dccc:
    // 0x49dccc: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x49dcccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_49dcd0:
    // 0x49dcd0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x49dcd0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_49dcd4:
    // 0x49dcd4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x49dcd4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_49dcd8:
    // 0x49dcd8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x49dcd8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_49dcdc:
    // 0x49dcdc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49dcdcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49dce0:
    // 0x49dce0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49dce0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49dce4:
    // 0x49dce4: 0x3e00008  jr          $ra
label_49dce8:
    if (ctx->pc == 0x49DCE8u) {
        ctx->pc = 0x49DCE8u;
            // 0x49dce8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x49DCECu;
        goto label_49dcec;
    }
    ctx->pc = 0x49DCE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49DCE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49DCE4u;
            // 0x49dce8: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49DCECu;
label_49dcec:
    // 0x49dcec: 0x0  nop
    ctx->pc = 0x49dcecu;
    // NOP
label_49dcf0:
    // 0x49dcf0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49dcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_49dcf4:
    // 0x49dcf4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x49dcf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_49dcf8:
    // 0x49dcf8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49dcf8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49dcfc:
    // 0x49dcfc: 0x27a7002c  addiu       $a3, $sp, 0x2C
    ctx->pc = 0x49dcfcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
label_49dd00:
    // 0x49dd00: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49dd00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49dd04:
    // 0x49dd04: 0x8c83007c  lw          $v1, 0x7C($a0)
    ctx->pc = 0x49dd04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_49dd08:
    // 0x49dd08: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x49dd08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_49dd0c:
    // 0x49dd0c: 0x8c820080  lw          $v0, 0x80($a0)
    ctx->pc = 0x49dd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 128)));
label_49dd10:
    // 0x49dd10: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x49dd10u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_49dd14:
    // 0x49dd14: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x49dd14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_49dd18:
    // 0x49dd18: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x49dd18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
label_49dd1c:
    // 0x49dd1c: 0xc7a00028  lwc1        $f0, 0x28($sp)
    ctx->pc = 0x49dd1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_49dd20:
    // 0x49dd20: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x49dd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
label_49dd24:
    // 0x49dd24: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x49dd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_49dd28:
    // 0x49dd28: 0x8c42fffc  lw          $v0, -0x4($v0)
    ctx->pc = 0x49dd28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_49dd2c:
    // 0x49dd2c: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x49dd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
label_49dd30:
    // 0x49dd30: 0x8c82007c  lw          $v0, 0x7C($a0)
    ctx->pc = 0x49dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 124)));
label_49dd34:
    // 0x49dd34: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x49dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_49dd38:
    // 0x49dd38: 0xac82007c  sw          $v0, 0x7C($a0)
    ctx->pc = 0x49dd38u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 124), GPR_U32(ctx, 2));
label_49dd3c:
    // 0x49dd3c: 0x8c830070  lw          $v1, 0x70($a0)
    ctx->pc = 0x49dd3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 112)));
label_49dd40:
    // 0x49dd40: 0x8c820074  lw          $v0, 0x74($a0)
    ctx->pc = 0x49dd40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 116)));
label_49dd44:
    // 0x49dd44: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x49dd44u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_49dd48:
    // 0x49dd48: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x49dd48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_49dd4c:
    // 0x49dd4c: 0xc0a997c  jal         func_2A65F0
label_49dd50:
    if (ctx->pc == 0x49DD50u) {
        ctx->pc = 0x49DD50u;
            // 0x49dd50: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->pc = 0x49DD54u;
        goto label_49dd54;
    }
    ctx->pc = 0x49DD4Cu;
    SET_GPR_U32(ctx, 31, 0x49DD54u);
    ctx->pc = 0x49DD50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49DD4Cu;
            // 0x49dd50: 0x2484006c  addiu       $a0, $a0, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 108));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A65F0u;
    if (runtime->hasFunction(0x2A65F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A65F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49DD54u; }
        if (ctx->pc != 0x49DD54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A65F0_0x2a65f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49DD54u; }
        if (ctx->pc != 0x49DD54u) { return; }
    }
    ctx->pc = 0x49DD54u;
label_49dd54:
    // 0x49dd54: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x49dd54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
label_49dd58:
    // 0x49dd58: 0xc0d879c  jal         func_361E70
label_49dd5c:
    if (ctx->pc == 0x49DD5Cu) {
        ctx->pc = 0x49DD5Cu;
            // 0x49dd5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49DD60u;
        goto label_49dd60;
    }
    ctx->pc = 0x49DD58u;
    SET_GPR_U32(ctx, 31, 0x49DD60u);
    ctx->pc = 0x49DD5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49DD58u;
            // 0x49dd5c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x361E70u;
    if (runtime->hasFunction(0x361E70u)) {
        auto targetFn = runtime->lookupFunction(0x361E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49DD60u; }
        if (ctx->pc != 0x49DD60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00361E70_0x361e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49DD60u; }
        if (ctx->pc != 0x49DD60u) { return; }
    }
    ctx->pc = 0x49DD60u;
label_49dd60:
    // 0x49dd60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49dd60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49dd64:
    // 0x49dd64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49dd64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49dd68:
    // 0x49dd68: 0x3e00008  jr          $ra
label_49dd6c:
    if (ctx->pc == 0x49DD6Cu) {
        ctx->pc = 0x49DD6Cu;
            // 0x49dd6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x49DD70u;
        goto label_49dd70;
    }
    ctx->pc = 0x49DD68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49DD6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49DD68u;
            // 0x49dd6c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49DD70u;
label_49dd70:
    // 0x49dd70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x49dd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_49dd74:
    // 0x49dd74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x49dd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_49dd78:
    // 0x49dd78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49dd78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49dd7c:
    // 0x49dd7c: 0x8c830058  lw          $v1, 0x58($a0)
    ctx->pc = 0x49dd7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_49dd80:
    // 0x49dd80: 0x10600047  beqz        $v1, . + 4 + (0x47 << 2)
label_49dd84:
    if (ctx->pc == 0x49DD84u) {
        ctx->pc = 0x49DD84u;
            // 0x49dd84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49DD88u;
        goto label_49dd88;
    }
    ctx->pc = 0x49DD80u;
    {
        const bool branch_taken_0x49dd80 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49DD80u;
            // 0x49dd84: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49dd80) {
            ctx->pc = 0x49DEA0u;
            goto label_49dea0;
        }
    }
    ctx->pc = 0x49DD88u;
label_49dd88:
    // 0x49dd88: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x49dd88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_49dd8c:
    // 0x49dd8c: 0x26040084  addiu       $a0, $s0, 0x84
    ctx->pc = 0x49dd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
label_49dd90:
    // 0x49dd90: 0xae020054  sw          $v0, 0x54($s0)
    ctx->pc = 0x49dd90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 2));
label_49dd94:
    // 0x49dd94: 0xc075128  jal         func_1D44A0
label_49dd98:
    if (ctx->pc == 0x49DD98u) {
        ctx->pc = 0x49DD98u;
            // 0x49dd98: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->pc = 0x49DD9Cu;
        goto label_49dd9c;
    }
    ctx->pc = 0x49DD94u;
    SET_GPR_U32(ctx, 31, 0x49DD9Cu);
    ctx->pc = 0x49DD98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49DD94u;
            // 0x49dd98: 0x24a50004  addiu       $a1, $a1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D44A0u;
    if (runtime->hasFunction(0x1D44A0u)) {
        auto targetFn = runtime->lookupFunction(0x1D44A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49DD9Cu; }
        if (ctx->pc != 0x49DD9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D44A0_0x1d44a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49DD9Cu; }
        if (ctx->pc != 0x49DD9Cu) { return; }
    }
    ctx->pc = 0x49DD9Cu;
label_49dd9c:
    // 0x49dd9c: 0x8e030084  lw          $v1, 0x84($s0)
    ctx->pc = 0x49dd9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_49dda0:
    // 0x49dda0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49dda0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49dda4:
    // 0x49dda4: 0x8c42e390  lw          $v0, -0x1C70($v0)
    ctx->pc = 0x49dda4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960016)));
label_49dda8:
    // 0x49dda8: 0x8c630034  lw          $v1, 0x34($v1)
    ctx->pc = 0x49dda8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_49ddac:
    // 0x49ddac: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x49ddacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_49ddb0:
    // 0x49ddb0: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_49ddb4:
    if (ctx->pc == 0x49DDB4u) {
        ctx->pc = 0x49DDB4u;
            // 0x49ddb4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->pc = 0x49DDB8u;
        goto label_49ddb8;
    }
    ctx->pc = 0x49DDB0u;
    {
        const bool branch_taken_0x49ddb0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DDB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49DDB0u;
            // 0x49ddb4: 0x26040084  addiu       $a0, $s0, 0x84 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 132));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49ddb0) {
            ctx->pc = 0x49DDC0u;
            goto label_49ddc0;
        }
    }
    ctx->pc = 0x49DDB8u;
label_49ddb8:
    // 0x49ddb8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49ddb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49ddbc:
    // 0x49ddbc: 0xac43e390  sw          $v1, -0x1C70($v0)
    ctx->pc = 0x49ddbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960016), GPR_U32(ctx, 3));
label_49ddc0:
    // 0x49ddc0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x49ddc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49ddc4:
    // 0x49ddc4: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49ddc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49ddc8:
    // 0x49ddc8: 0x8c42e388  lw          $v0, -0x1C78($v0)
    ctx->pc = 0x49ddc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960008)));
label_49ddcc:
    // 0x49ddcc: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x49ddccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_49ddd0:
    // 0x49ddd0: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x49ddd0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_49ddd4:
    // 0x49ddd4: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_49ddd8:
    if (ctx->pc == 0x49DDD8u) {
        ctx->pc = 0x49DDD8u;
            // 0x49ddd8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->pc = 0x49DDDCu;
        goto label_49dddc;
    }
    ctx->pc = 0x49DDD4u;
    {
        const bool branch_taken_0x49ddd4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49ddd4) {
            ctx->pc = 0x49DDD8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49DDD4u;
            // 0x49ddd8: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49DDE8u;
            goto label_49dde8;
        }
    }
    ctx->pc = 0x49DDDCu;
label_49dddc:
    // 0x49dddc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49dddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49dde0:
    // 0x49dde0: 0xac43e388  sw          $v1, -0x1C78($v0)
    ctx->pc = 0x49dde0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960008), GPR_U32(ctx, 3));
label_49dde4:
    // 0x49dde4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x49dde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_49dde8:
    // 0x49dde8: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49dde8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49ddec:
    // 0x49ddec: 0x8c42e398  lw          $v0, -0x1C68($v0)
    ctx->pc = 0x49ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960024)));
label_49ddf0:
    // 0x49ddf0: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x49ddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_49ddf4:
    // 0x49ddf4: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x49ddf4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_49ddf8:
    // 0x49ddf8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_49ddfc:
    if (ctx->pc == 0x49DDFCu) {
        ctx->pc = 0x49DDFCu;
            // 0x49ddfc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->pc = 0x49DE00u;
        goto label_49de00;
    }
    ctx->pc = 0x49DDF8u;
    {
        const bool branch_taken_0x49ddf8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49ddf8) {
            ctx->pc = 0x49DDFCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49DDF8u;
            // 0x49ddfc: 0x8e190000  lw          $t9, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49DE0Cu;
            goto label_49de0c;
        }
    }
    ctx->pc = 0x49DE00u;
label_49de00:
    // 0x49de00: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x49de00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_49de04:
    // 0x49de04: 0xac43e398  sw          $v1, -0x1C68($v0)
    ctx->pc = 0x49de04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294960024), GPR_U32(ctx, 3));
label_49de08:
    // 0x49de08: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x49de08u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_49de0c:
    // 0x49de0c: 0x8f390044  lw          $t9, 0x44($t9)
    ctx->pc = 0x49de0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 68)));
label_49de10:
    // 0x49de10: 0x320f809  jalr        $t9
label_49de14:
    if (ctx->pc == 0x49DE14u) {
        ctx->pc = 0x49DE14u;
            // 0x49de14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49DE18u;
        goto label_49de18;
    }
    ctx->pc = 0x49DE10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x49DE18u);
        ctx->pc = 0x49DE14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49DE10u;
            // 0x49de14: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x49DE18u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x49DE18u; }
            if (ctx->pc != 0x49DE18u) { return; }
        }
        }
    }
    ctx->pc = 0x49DE18u;
label_49de18:
    // 0x49de18: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x49de18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_49de1c:
    // 0x49de1c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49de1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49de20:
    // 0x49de20: 0x8c63e388  lw          $v1, -0x1C78($v1)
    ctx->pc = 0x49de20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960008)));
label_49de24:
    // 0x49de24: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x49de24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_49de28:
    // 0x49de28: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x49de28u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_49de2c:
    // 0x49de2c: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x49de2cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_49de30:
    // 0x49de30: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_49de34:
    if (ctx->pc == 0x49DE34u) {
        ctx->pc = 0x49DE34u;
            // 0x49de34: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->pc = 0x49DE38u;
        goto label_49de38;
    }
    ctx->pc = 0x49DE30u;
    {
        const bool branch_taken_0x49de30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49de30) {
            ctx->pc = 0x49DE34u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49DE30u;
            // 0x49de34: 0x8e040084  lw          $a0, 0x84($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49DE44u;
            goto label_49de44;
        }
    }
    ctx->pc = 0x49DE38u;
label_49de38:
    // 0x49de38: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49de38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49de3c:
    // 0x49de3c: 0xac64e388  sw          $a0, -0x1C78($v1)
    ctx->pc = 0x49de3cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960008), GPR_U32(ctx, 4));
label_49de40:
    // 0x49de40: 0x8e040084  lw          $a0, 0x84($s0)
    ctx->pc = 0x49de40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 132)));
label_49de44:
    // 0x49de44: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49de44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49de48:
    // 0x49de48: 0x8c63e398  lw          $v1, -0x1C68($v1)
    ctx->pc = 0x49de48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960024)));
label_49de4c:
    // 0x49de4c: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x49de4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
label_49de50:
    // 0x49de50: 0x442018  mult        $a0, $v0, $a0
    ctx->pc = 0x49de50u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
label_49de54:
    // 0x49de54: 0x64082b  sltu        $at, $v1, $a0
    ctx->pc = 0x49de54u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
label_49de58:
    // 0x49de58: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_49de5c:
    if (ctx->pc == 0x49DE5Cu) {
        ctx->pc = 0x49DE60u;
        goto label_49de60;
    }
    ctx->pc = 0x49DE58u;
    {
        const bool branch_taken_0x49de58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49de58) {
            ctx->pc = 0x49DE68u;
            goto label_49de68;
        }
    }
    ctx->pc = 0x49DE60u;
label_49de60:
    // 0x49de60: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49de60u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49de64:
    // 0x49de64: 0xac64e398  sw          $a0, -0x1C68($v1)
    ctx->pc = 0x49de64u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960024), GPR_U32(ctx, 4));
label_49de68:
    // 0x49de68: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49de68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49de6c:
    // 0x49de6c: 0x8c63e3c8  lw          $v1, -0x1C38($v1)
    ctx->pc = 0x49de6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960072)));
label_49de70:
    // 0x49de70: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x49de70u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_49de74:
    // 0x49de74: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
label_49de78:
    if (ctx->pc == 0x49DE78u) {
        ctx->pc = 0x49DE7Cu;
        goto label_49de7c;
    }
    ctx->pc = 0x49DE74u;
    {
        const bool branch_taken_0x49de74 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49de74) {
            ctx->pc = 0x49DE84u;
            goto label_49de84;
        }
    }
    ctx->pc = 0x49DE7Cu;
label_49de7c:
    // 0x49de7c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49de7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49de80:
    // 0x49de80: 0xac62e3c8  sw          $v0, -0x1C38($v1)
    ctx->pc = 0x49de80u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960072), GPR_U32(ctx, 2));
label_49de84:
    // 0x49de84: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49de84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49de88:
    // 0x49de88: 0x8c63e3d0  lw          $v1, -0x1C30($v1)
    ctx->pc = 0x49de88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960080)));
label_49de8c:
    // 0x49de8c: 0x62082b  sltu        $at, $v1, $v0
    ctx->pc = 0x49de8cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_49de90:
    // 0x49de90: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
label_49de94:
    if (ctx->pc == 0x49DE94u) {
        ctx->pc = 0x49DE94u;
            // 0x49de94: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x49DE98u;
        goto label_49de98;
    }
    ctx->pc = 0x49DE90u;
    {
        const bool branch_taken_0x49de90 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x49de90) {
            ctx->pc = 0x49DE94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49DE90u;
            // 0x49de94: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49DEA4u;
            goto label_49dea4;
        }
    }
    ctx->pc = 0x49DE98u;
label_49de98:
    // 0x49de98: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49de98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_49de9c:
    // 0x49de9c: 0xac62e3d0  sw          $v0, -0x1C30($v1)
    ctx->pc = 0x49de9cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294960080), GPR_U32(ctx, 2));
label_49dea0:
    // 0x49dea0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x49dea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_49dea4:
    // 0x49dea4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49dea4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49dea8:
    // 0x49dea8: 0x3e00008  jr          $ra
label_49deac:
    if (ctx->pc == 0x49DEACu) {
        ctx->pc = 0x49DEACu;
            // 0x49deac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x49DEB0u;
        goto label_49deb0;
    }
    ctx->pc = 0x49DEA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49DEACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49DEA8u;
            // 0x49deac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49DEB0u;
label_49deb0:
    // 0x49deb0: 0x8127210  j           func_49C840
label_49deb4:
    if (ctx->pc == 0x49DEB4u) {
        ctx->pc = 0x49DEB4u;
            // 0x49deb4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x49DEB8u;
        goto label_49deb8;
    }
    ctx->pc = 0x49DEB0u;
    ctx->pc = 0x49DEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49DEB0u;
            // 0x49deb4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49C840u;
    {
        auto targetFn = runtime->lookupFunction(0x49C840u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x49DEB8u;
label_49deb8:
    // 0x49deb8: 0x0  nop
    ctx->pc = 0x49deb8u;
    // NOP
label_49debc:
    // 0x49debc: 0x0  nop
    ctx->pc = 0x49debcu;
    // NOP
label_49dec0:
    // 0x49dec0: 0x8127028  j           func_49C0A0
label_49dec4:
    if (ctx->pc == 0x49DEC4u) {
        ctx->pc = 0x49DEC4u;
            // 0x49dec4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x49DEC8u;
        goto label_49dec8;
    }
    ctx->pc = 0x49DEC0u;
    ctx->pc = 0x49DEC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49DEC0u;
            // 0x49dec4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49C0A0u;
    if (runtime->hasFunction(0x49C0A0u)) {
        auto targetFn = runtime->lookupFunction(0x49C0A0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_0049C0A0_0x49c0a0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x49DEC8u;
label_49dec8:
    // 0x49dec8: 0x0  nop
    ctx->pc = 0x49dec8u;
    // NOP
label_49decc:
    // 0x49decc: 0x0  nop
    ctx->pc = 0x49deccu;
    // NOP
label_49ded0:
    // 0x49ded0: 0x8127080  j           func_49C200
label_49ded4:
    if (ctx->pc == 0x49DED4u) {
        ctx->pc = 0x49DED4u;
            // 0x49ded4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->pc = 0x49DED8u;
        goto label_49ded8;
    }
    ctx->pc = 0x49DED0u;
    ctx->pc = 0x49DED4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49DED0u;
            // 0x49ded4: 0x2484ffb0  addiu       $a0, $a0, -0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49C200u;
    {
        auto targetFn = runtime->lookupFunction(0x49C200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x49DED8u;
label_49ded8:
    // 0x49ded8: 0x0  nop
    ctx->pc = 0x49ded8u;
    // NOP
label_49dedc:
    // 0x49dedc: 0x0  nop
    ctx->pc = 0x49dedcu;
    // NOP
label_49dee0:
    // 0x49dee0: 0x8127004  j           func_49C010
label_49dee4:
    if (ctx->pc == 0x49DEE4u) {
        ctx->pc = 0x49DEE4u;
            // 0x49dee4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->pc = 0x49DEE8u;
        goto label_49dee8;
    }
    ctx->pc = 0x49DEE0u;
    ctx->pc = 0x49DEE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49DEE0u;
            // 0x49dee4: 0x2484ff9c  addiu       $a0, $a0, -0x64 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967196));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49C010u;
    {
        auto targetFn = runtime->lookupFunction(0x49C010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x49DEE8u;
label_49dee8:
    // 0x49dee8: 0x0  nop
    ctx->pc = 0x49dee8u;
    // NOP
label_49deec:
    // 0x49deec: 0x0  nop
    ctx->pc = 0x49deecu;
    // NOP
label_49def0:
    // 0x49def0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x49def0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_49def4:
    // 0x49def4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x49def4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_49def8:
    // 0x49def8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x49def8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_49defc:
    // 0x49defc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x49defcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_49df00:
    // 0x49df00: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x49df00u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_49df04:
    // 0x49df04: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
label_49df08:
    if (ctx->pc == 0x49DF08u) {
        ctx->pc = 0x49DF08u;
            // 0x49df08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49DF0Cu;
        goto label_49df0c;
    }
    ctx->pc = 0x49DF04u;
    {
        const bool branch_taken_0x49df04 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DF08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49DF04u;
            // 0x49df08: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49df04) {
            ctx->pc = 0x49DF60u;
            goto label_49df60;
        }
    }
    ctx->pc = 0x49DF0Cu;
label_49df0c:
    // 0x49df0c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49df0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_49df10:
    // 0x49df10: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49df10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_49df14:
    // 0x49df14: 0x2463fec0  addiu       $v1, $v1, -0x140
    ctx->pc = 0x49df14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966976));
label_49df18:
    // 0x49df18: 0x2442fef8  addiu       $v0, $v0, -0x108
    ctx->pc = 0x49df18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967032));
label_49df1c:
    // 0x49df1c: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49df1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_49df20:
    // 0x49df20: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_49df24:
    if (ctx->pc == 0x49DF24u) {
        ctx->pc = 0x49DF24u;
            // 0x49df24: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x49DF28u;
        goto label_49df28;
    }
    ctx->pc = 0x49DF20u;
    {
        const bool branch_taken_0x49df20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x49DF24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49DF20u;
            // 0x49df24: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x49df20) {
            ctx->pc = 0x49DF48u;
            goto label_49df48;
        }
    }
    ctx->pc = 0x49DF28u;
label_49df28:
    // 0x49df28: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x49df28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_49df2c:
    // 0x49df2c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x49df2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_49df30:
    // 0x49df30: 0x2463ff70  addiu       $v1, $v1, -0x90
    ctx->pc = 0x49df30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967152));
label_49df34:
    // 0x49df34: 0x2442ffa8  addiu       $v0, $v0, -0x58
    ctx->pc = 0x49df34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967208));
label_49df38:
    // 0x49df38: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x49df38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
label_49df3c:
    // 0x49df3c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x49df3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_49df40:
    // 0x49df40: 0xc1277e0  jal         func_49DF80
label_49df44:
    if (ctx->pc == 0x49DF44u) {
        ctx->pc = 0x49DF44u;
            // 0x49df44: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->pc = 0x49DF48u;
        goto label_49df48;
    }
    ctx->pc = 0x49DF40u;
    SET_GPR_U32(ctx, 31, 0x49DF48u);
    ctx->pc = 0x49DF44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49DF40u;
            // 0x49df44: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49DF80u;
    if (runtime->hasFunction(0x49DF80u)) {
        auto targetFn = runtime->lookupFunction(0x49DF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49DF48u; }
        if (ctx->pc != 0x49DF48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049DF80_0x49df80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49DF48u; }
        if (ctx->pc != 0x49DF48u) { return; }
    }
    ctx->pc = 0x49DF48u;
label_49df48:
    // 0x49df48: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x49df48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_49df4c:
    // 0x49df4c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x49df4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_49df50:
    // 0x49df50: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_49df54:
    if (ctx->pc == 0x49DF54u) {
        ctx->pc = 0x49DF54u;
            // 0x49df54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49DF58u;
        goto label_49df58;
    }
    ctx->pc = 0x49DF50u;
    {
        const bool branch_taken_0x49df50 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x49df50) {
            ctx->pc = 0x49DF54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x49DF50u;
            // 0x49df54: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x49DF64u;
            goto label_49df64;
        }
    }
    ctx->pc = 0x49DF58u;
label_49df58:
    // 0x49df58: 0xc0400a8  jal         func_1002A0
label_49df5c:
    if (ctx->pc == 0x49DF5Cu) {
        ctx->pc = 0x49DF5Cu;
            // 0x49df5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x49DF60u;
        goto label_49df60;
    }
    ctx->pc = 0x49DF58u;
    SET_GPR_U32(ctx, 31, 0x49DF60u);
    ctx->pc = 0x49DF5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x49DF58u;
            // 0x49df5c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49DF60u; }
        if (ctx->pc != 0x49DF60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x49DF60u; }
        if (ctx->pc != 0x49DF60u) { return; }
    }
    ctx->pc = 0x49DF60u;
label_49df60:
    // 0x49df60: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x49df60u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_49df64:
    // 0x49df64: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x49df64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_49df68:
    // 0x49df68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x49df68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_49df6c:
    // 0x49df6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x49df6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_49df70:
    // 0x49df70: 0x3e00008  jr          $ra
label_49df74:
    if (ctx->pc == 0x49DF74u) {
        ctx->pc = 0x49DF74u;
            // 0x49df74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x49DF78u;
        goto label_49df78;
    }
    ctx->pc = 0x49DF70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49DF74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49DF70u;
            // 0x49df74: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49DF78u;
label_49df78:
    // 0x49df78: 0x0  nop
    ctx->pc = 0x49df78u;
    // NOP
label_49df7c:
    // 0x49df7c: 0x0  nop
    ctx->pc = 0x49df7cu;
    // NOP
}
