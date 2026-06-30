#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0042DC40
// Address: 0x42dc40 - 0x42e0a0
void sub_0042DC40_0x42dc40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042DC40_0x42dc40");
#endif

    switch (ctx->pc) {
        case 0x42dc40u: goto label_42dc40;
        case 0x42dc44u: goto label_42dc44;
        case 0x42dc48u: goto label_42dc48;
        case 0x42dc4cu: goto label_42dc4c;
        case 0x42dc50u: goto label_42dc50;
        case 0x42dc54u: goto label_42dc54;
        case 0x42dc58u: goto label_42dc58;
        case 0x42dc5cu: goto label_42dc5c;
        case 0x42dc60u: goto label_42dc60;
        case 0x42dc64u: goto label_42dc64;
        case 0x42dc68u: goto label_42dc68;
        case 0x42dc6cu: goto label_42dc6c;
        case 0x42dc70u: goto label_42dc70;
        case 0x42dc74u: goto label_42dc74;
        case 0x42dc78u: goto label_42dc78;
        case 0x42dc7cu: goto label_42dc7c;
        case 0x42dc80u: goto label_42dc80;
        case 0x42dc84u: goto label_42dc84;
        case 0x42dc88u: goto label_42dc88;
        case 0x42dc8cu: goto label_42dc8c;
        case 0x42dc90u: goto label_42dc90;
        case 0x42dc94u: goto label_42dc94;
        case 0x42dc98u: goto label_42dc98;
        case 0x42dc9cu: goto label_42dc9c;
        case 0x42dca0u: goto label_42dca0;
        case 0x42dca4u: goto label_42dca4;
        case 0x42dca8u: goto label_42dca8;
        case 0x42dcacu: goto label_42dcac;
        case 0x42dcb0u: goto label_42dcb0;
        case 0x42dcb4u: goto label_42dcb4;
        case 0x42dcb8u: goto label_42dcb8;
        case 0x42dcbcu: goto label_42dcbc;
        case 0x42dcc0u: goto label_42dcc0;
        case 0x42dcc4u: goto label_42dcc4;
        case 0x42dcc8u: goto label_42dcc8;
        case 0x42dcccu: goto label_42dccc;
        case 0x42dcd0u: goto label_42dcd0;
        case 0x42dcd4u: goto label_42dcd4;
        case 0x42dcd8u: goto label_42dcd8;
        case 0x42dcdcu: goto label_42dcdc;
        case 0x42dce0u: goto label_42dce0;
        case 0x42dce4u: goto label_42dce4;
        case 0x42dce8u: goto label_42dce8;
        case 0x42dcecu: goto label_42dcec;
        case 0x42dcf0u: goto label_42dcf0;
        case 0x42dcf4u: goto label_42dcf4;
        case 0x42dcf8u: goto label_42dcf8;
        case 0x42dcfcu: goto label_42dcfc;
        case 0x42dd00u: goto label_42dd00;
        case 0x42dd04u: goto label_42dd04;
        case 0x42dd08u: goto label_42dd08;
        case 0x42dd0cu: goto label_42dd0c;
        case 0x42dd10u: goto label_42dd10;
        case 0x42dd14u: goto label_42dd14;
        case 0x42dd18u: goto label_42dd18;
        case 0x42dd1cu: goto label_42dd1c;
        case 0x42dd20u: goto label_42dd20;
        case 0x42dd24u: goto label_42dd24;
        case 0x42dd28u: goto label_42dd28;
        case 0x42dd2cu: goto label_42dd2c;
        case 0x42dd30u: goto label_42dd30;
        case 0x42dd34u: goto label_42dd34;
        case 0x42dd38u: goto label_42dd38;
        case 0x42dd3cu: goto label_42dd3c;
        case 0x42dd40u: goto label_42dd40;
        case 0x42dd44u: goto label_42dd44;
        case 0x42dd48u: goto label_42dd48;
        case 0x42dd4cu: goto label_42dd4c;
        case 0x42dd50u: goto label_42dd50;
        case 0x42dd54u: goto label_42dd54;
        case 0x42dd58u: goto label_42dd58;
        case 0x42dd5cu: goto label_42dd5c;
        case 0x42dd60u: goto label_42dd60;
        case 0x42dd64u: goto label_42dd64;
        case 0x42dd68u: goto label_42dd68;
        case 0x42dd6cu: goto label_42dd6c;
        case 0x42dd70u: goto label_42dd70;
        case 0x42dd74u: goto label_42dd74;
        case 0x42dd78u: goto label_42dd78;
        case 0x42dd7cu: goto label_42dd7c;
        case 0x42dd80u: goto label_42dd80;
        case 0x42dd84u: goto label_42dd84;
        case 0x42dd88u: goto label_42dd88;
        case 0x42dd8cu: goto label_42dd8c;
        case 0x42dd90u: goto label_42dd90;
        case 0x42dd94u: goto label_42dd94;
        case 0x42dd98u: goto label_42dd98;
        case 0x42dd9cu: goto label_42dd9c;
        case 0x42dda0u: goto label_42dda0;
        case 0x42dda4u: goto label_42dda4;
        case 0x42dda8u: goto label_42dda8;
        case 0x42ddacu: goto label_42ddac;
        case 0x42ddb0u: goto label_42ddb0;
        case 0x42ddb4u: goto label_42ddb4;
        case 0x42ddb8u: goto label_42ddb8;
        case 0x42ddbcu: goto label_42ddbc;
        case 0x42ddc0u: goto label_42ddc0;
        case 0x42ddc4u: goto label_42ddc4;
        case 0x42ddc8u: goto label_42ddc8;
        case 0x42ddccu: goto label_42ddcc;
        case 0x42ddd0u: goto label_42ddd0;
        case 0x42ddd4u: goto label_42ddd4;
        case 0x42ddd8u: goto label_42ddd8;
        case 0x42dddcu: goto label_42dddc;
        case 0x42dde0u: goto label_42dde0;
        case 0x42dde4u: goto label_42dde4;
        case 0x42dde8u: goto label_42dde8;
        case 0x42ddecu: goto label_42ddec;
        case 0x42ddf0u: goto label_42ddf0;
        case 0x42ddf4u: goto label_42ddf4;
        case 0x42ddf8u: goto label_42ddf8;
        case 0x42ddfcu: goto label_42ddfc;
        case 0x42de00u: goto label_42de00;
        case 0x42de04u: goto label_42de04;
        case 0x42de08u: goto label_42de08;
        case 0x42de0cu: goto label_42de0c;
        case 0x42de10u: goto label_42de10;
        case 0x42de14u: goto label_42de14;
        case 0x42de18u: goto label_42de18;
        case 0x42de1cu: goto label_42de1c;
        case 0x42de20u: goto label_42de20;
        case 0x42de24u: goto label_42de24;
        case 0x42de28u: goto label_42de28;
        case 0x42de2cu: goto label_42de2c;
        case 0x42de30u: goto label_42de30;
        case 0x42de34u: goto label_42de34;
        case 0x42de38u: goto label_42de38;
        case 0x42de3cu: goto label_42de3c;
        case 0x42de40u: goto label_42de40;
        case 0x42de44u: goto label_42de44;
        case 0x42de48u: goto label_42de48;
        case 0x42de4cu: goto label_42de4c;
        case 0x42de50u: goto label_42de50;
        case 0x42de54u: goto label_42de54;
        case 0x42de58u: goto label_42de58;
        case 0x42de5cu: goto label_42de5c;
        case 0x42de60u: goto label_42de60;
        case 0x42de64u: goto label_42de64;
        case 0x42de68u: goto label_42de68;
        case 0x42de6cu: goto label_42de6c;
        case 0x42de70u: goto label_42de70;
        case 0x42de74u: goto label_42de74;
        case 0x42de78u: goto label_42de78;
        case 0x42de7cu: goto label_42de7c;
        case 0x42de80u: goto label_42de80;
        case 0x42de84u: goto label_42de84;
        case 0x42de88u: goto label_42de88;
        case 0x42de8cu: goto label_42de8c;
        case 0x42de90u: goto label_42de90;
        case 0x42de94u: goto label_42de94;
        case 0x42de98u: goto label_42de98;
        case 0x42de9cu: goto label_42de9c;
        case 0x42dea0u: goto label_42dea0;
        case 0x42dea4u: goto label_42dea4;
        case 0x42dea8u: goto label_42dea8;
        case 0x42deacu: goto label_42deac;
        case 0x42deb0u: goto label_42deb0;
        case 0x42deb4u: goto label_42deb4;
        case 0x42deb8u: goto label_42deb8;
        case 0x42debcu: goto label_42debc;
        case 0x42dec0u: goto label_42dec0;
        case 0x42dec4u: goto label_42dec4;
        case 0x42dec8u: goto label_42dec8;
        case 0x42deccu: goto label_42decc;
        case 0x42ded0u: goto label_42ded0;
        case 0x42ded4u: goto label_42ded4;
        case 0x42ded8u: goto label_42ded8;
        case 0x42dedcu: goto label_42dedc;
        case 0x42dee0u: goto label_42dee0;
        case 0x42dee4u: goto label_42dee4;
        case 0x42dee8u: goto label_42dee8;
        case 0x42deecu: goto label_42deec;
        case 0x42def0u: goto label_42def0;
        case 0x42def4u: goto label_42def4;
        case 0x42def8u: goto label_42def8;
        case 0x42defcu: goto label_42defc;
        case 0x42df00u: goto label_42df00;
        case 0x42df04u: goto label_42df04;
        case 0x42df08u: goto label_42df08;
        case 0x42df0cu: goto label_42df0c;
        case 0x42df10u: goto label_42df10;
        case 0x42df14u: goto label_42df14;
        case 0x42df18u: goto label_42df18;
        case 0x42df1cu: goto label_42df1c;
        case 0x42df20u: goto label_42df20;
        case 0x42df24u: goto label_42df24;
        case 0x42df28u: goto label_42df28;
        case 0x42df2cu: goto label_42df2c;
        case 0x42df30u: goto label_42df30;
        case 0x42df34u: goto label_42df34;
        case 0x42df38u: goto label_42df38;
        case 0x42df3cu: goto label_42df3c;
        case 0x42df40u: goto label_42df40;
        case 0x42df44u: goto label_42df44;
        case 0x42df48u: goto label_42df48;
        case 0x42df4cu: goto label_42df4c;
        case 0x42df50u: goto label_42df50;
        case 0x42df54u: goto label_42df54;
        case 0x42df58u: goto label_42df58;
        case 0x42df5cu: goto label_42df5c;
        case 0x42df60u: goto label_42df60;
        case 0x42df64u: goto label_42df64;
        case 0x42df68u: goto label_42df68;
        case 0x42df6cu: goto label_42df6c;
        case 0x42df70u: goto label_42df70;
        case 0x42df74u: goto label_42df74;
        case 0x42df78u: goto label_42df78;
        case 0x42df7cu: goto label_42df7c;
        case 0x42df80u: goto label_42df80;
        case 0x42df84u: goto label_42df84;
        case 0x42df88u: goto label_42df88;
        case 0x42df8cu: goto label_42df8c;
        case 0x42df90u: goto label_42df90;
        case 0x42df94u: goto label_42df94;
        case 0x42df98u: goto label_42df98;
        case 0x42df9cu: goto label_42df9c;
        case 0x42dfa0u: goto label_42dfa0;
        case 0x42dfa4u: goto label_42dfa4;
        case 0x42dfa8u: goto label_42dfa8;
        case 0x42dfacu: goto label_42dfac;
        case 0x42dfb0u: goto label_42dfb0;
        case 0x42dfb4u: goto label_42dfb4;
        case 0x42dfb8u: goto label_42dfb8;
        case 0x42dfbcu: goto label_42dfbc;
        case 0x42dfc0u: goto label_42dfc0;
        case 0x42dfc4u: goto label_42dfc4;
        case 0x42dfc8u: goto label_42dfc8;
        case 0x42dfccu: goto label_42dfcc;
        case 0x42dfd0u: goto label_42dfd0;
        case 0x42dfd4u: goto label_42dfd4;
        case 0x42dfd8u: goto label_42dfd8;
        case 0x42dfdcu: goto label_42dfdc;
        case 0x42dfe0u: goto label_42dfe0;
        case 0x42dfe4u: goto label_42dfe4;
        case 0x42dfe8u: goto label_42dfe8;
        case 0x42dfecu: goto label_42dfec;
        case 0x42dff0u: goto label_42dff0;
        case 0x42dff4u: goto label_42dff4;
        case 0x42dff8u: goto label_42dff8;
        case 0x42dffcu: goto label_42dffc;
        case 0x42e000u: goto label_42e000;
        case 0x42e004u: goto label_42e004;
        case 0x42e008u: goto label_42e008;
        case 0x42e00cu: goto label_42e00c;
        case 0x42e010u: goto label_42e010;
        case 0x42e014u: goto label_42e014;
        case 0x42e018u: goto label_42e018;
        case 0x42e01cu: goto label_42e01c;
        case 0x42e020u: goto label_42e020;
        case 0x42e024u: goto label_42e024;
        case 0x42e028u: goto label_42e028;
        case 0x42e02cu: goto label_42e02c;
        case 0x42e030u: goto label_42e030;
        case 0x42e034u: goto label_42e034;
        case 0x42e038u: goto label_42e038;
        case 0x42e03cu: goto label_42e03c;
        case 0x42e040u: goto label_42e040;
        case 0x42e044u: goto label_42e044;
        case 0x42e048u: goto label_42e048;
        case 0x42e04cu: goto label_42e04c;
        case 0x42e050u: goto label_42e050;
        case 0x42e054u: goto label_42e054;
        case 0x42e058u: goto label_42e058;
        case 0x42e05cu: goto label_42e05c;
        case 0x42e060u: goto label_42e060;
        case 0x42e064u: goto label_42e064;
        case 0x42e068u: goto label_42e068;
        case 0x42e06cu: goto label_42e06c;
        case 0x42e070u: goto label_42e070;
        case 0x42e074u: goto label_42e074;
        case 0x42e078u: goto label_42e078;
        case 0x42e07cu: goto label_42e07c;
        case 0x42e080u: goto label_42e080;
        case 0x42e084u: goto label_42e084;
        case 0x42e088u: goto label_42e088;
        case 0x42e08cu: goto label_42e08c;
        case 0x42e090u: goto label_42e090;
        case 0x42e094u: goto label_42e094;
        case 0x42e098u: goto label_42e098;
        case 0x42e09cu: goto label_42e09c;
        default: break;
    }

    ctx->pc = 0x42dc40u;

label_42dc40:
    // 0x42dc40: 0x3e00008  jr          $ra
label_42dc44:
    if (ctx->pc == 0x42DC44u) {
        ctx->pc = 0x42DC44u;
            // 0x42dc44: 0xa0851240  sb          $a1, 0x1240($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4672), (uint8_t)GPR_U32(ctx, 5));
        ctx->pc = 0x42DC48u;
        goto label_42dc48;
    }
    ctx->pc = 0x42DC40u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42DC44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42DC40u;
            // 0x42dc44: 0xa0851240  sb          $a1, 0x1240($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4672), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42DC48u;
label_42dc48:
    // 0x42dc48: 0x0  nop
    ctx->pc = 0x42dc48u;
    // NOP
label_42dc4c:
    // 0x42dc4c: 0x0  nop
    ctx->pc = 0x42dc4cu;
    // NOP
label_42dc50:
    // 0x42dc50: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x42dc50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_42dc54:
    // 0x42dc54: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x42dc54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_42dc58:
    // 0x42dc58: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x42dc58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_42dc5c:
    // 0x42dc5c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x42dc5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_42dc60:
    // 0x42dc60: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x42dc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_42dc64:
    // 0x42dc64: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x42dc64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_42dc68:
    // 0x42dc68: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x42dc68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_42dc6c:
    // 0x42dc6c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42dc6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42dc70:
    // 0x42dc70: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42dc70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42dc74:
    // 0x42dc74: 0x90831241  lbu         $v1, 0x1241($a0)
    ctx->pc = 0x42dc74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4673)));
label_42dc78:
    // 0x42dc78: 0x106000bb  beqz        $v1, . + 4 + (0xBB << 2)
label_42dc7c:
    if (ctx->pc == 0x42DC7Cu) {
        ctx->pc = 0x42DC7Cu;
            // 0x42dc7c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42DC80u;
        goto label_42dc80;
    }
    ctx->pc = 0x42DC78u;
    {
        const bool branch_taken_0x42dc78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42DC7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42DC78u;
            // 0x42dc7c: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42dc78) {
            ctx->pc = 0x42DF68u;
            goto label_42df68;
        }
    }
    ctx->pc = 0x42DC80u;
label_42dc80:
    // 0x42dc80: 0x92231240  lbu         $v1, 0x1240($s1)
    ctx->pc = 0x42dc80u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 4672)));
label_42dc84:
    // 0x42dc84: 0x506000b9  beql        $v1, $zero, . + 4 + (0xB9 << 2)
label_42dc88:
    if (ctx->pc == 0x42DC88u) {
        ctx->pc = 0x42DC88u;
            // 0x42dc88: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->pc = 0x42DC8Cu;
        goto label_42dc8c;
    }
    ctx->pc = 0x42DC84u;
    {
        const bool branch_taken_0x42dc84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x42dc84) {
            ctx->pc = 0x42DC88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42DC84u;
            // 0x42dc88: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42DF6Cu;
            goto label_42df6c;
        }
    }
    ctx->pc = 0x42DC8Cu;
label_42dc8c:
    // 0x42dc8c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x42dc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_42dc90:
    // 0x42dc90: 0x8e350d6c  lw          $s5, 0xD6C($s1)
    ctx->pc = 0x42dc90u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_42dc94:
    // 0x42dc94: 0x8c43d130  lw          $v1, -0x2ED0($v0)
    ctx->pc = 0x42dc94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_42dc98:
    // 0x42dc98: 0x8e360550  lw          $s6, 0x550($s1)
    ctx->pc = 0x42dc98u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_42dc9c:
    // 0x42dc9c: 0x8eb20000  lw          $s2, 0x0($s5)
    ctx->pc = 0x42dc9cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_42dca0:
    // 0x42dca0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42dca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42dca4:
    // 0x42dca4: 0x8c730130  lw          $s3, 0x130($v1)
    ctx->pc = 0x42dca4u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_42dca8:
    // 0x42dca8: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x42dca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_42dcac:
    // 0x42dcac: 0x8e500000  lw          $s0, 0x0($s2)
    ctx->pc = 0x42dcacu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_42dcb0:
    // 0x42dcb0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x42dcb0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_42dcb4:
    // 0x42dcb4: 0x92220e3d  lbu         $v0, 0xE3D($s1)
    ctx->pc = 0x42dcb4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3645)));
label_42dcb8:
    // 0x42dcb8: 0x21180  sll         $v0, $v0, 6
    ctx->pc = 0x42dcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
label_42dcbc:
    // 0x42dcbc: 0x2221821  addu        $v1, $s1, $v0
    ctx->pc = 0x42dcbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_42dcc0:
    // 0x42dcc0: 0x131080  sll         $v0, $s3, 2
    ctx->pc = 0x42dcc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 2));
label_42dcc4:
    // 0x42dcc4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x42dcc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_42dcc8:
    // 0x42dcc8: 0x9046007d  lbu         $a2, 0x7D($v0)
    ctx->pc = 0x42dcc8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 125)));
label_42dccc:
    // 0x42dccc: 0xc07698c  jal         func_1DA630
label_42dcd0:
    if (ctx->pc == 0x42DCD0u) {
        ctx->pc = 0x42DCD0u;
            // 0x42dcd0: 0x247400c0  addiu       $s4, $v1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
        ctx->pc = 0x42DCD4u;
        goto label_42dcd4;
    }
    ctx->pc = 0x42DCCCu;
    SET_GPR_U32(ctx, 31, 0x42DCD4u);
    ctx->pc = 0x42DCD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42DCCCu;
            // 0x42dcd0: 0x247400c0  addiu       $s4, $v1, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA630u;
    if (runtime->hasFunction(0x1DA630u)) {
        auto targetFn = runtime->lookupFunction(0x1DA630u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DCD4u; }
        if (ctx->pc != 0x42DCD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA630_0x1da630(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DCD4u; }
        if (ctx->pc != 0x42DCD4u) { return; }
    }
    ctx->pc = 0x42DCD4u;
label_42dcd4:
    // 0x42dcd4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x42dcd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_42dcd8:
    // 0x42dcd8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
label_42dcdc:
    if (ctx->pc == 0x42DCDCu) {
        ctx->pc = 0x42DCE0u;
        goto label_42dce0;
    }
    ctx->pc = 0x42DCD8u;
    {
        const bool branch_taken_0x42dcd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x42dcd8) {
            ctx->pc = 0x42DCE8u;
            goto label_42dce8;
        }
    }
    ctx->pc = 0x42DCE0u;
label_42dce0:
    // 0x42dce0: 0x10000034  b           . + 4 + (0x34 << 2)
label_42dce4:
    if (ctx->pc == 0x42DCE4u) {
        ctx->pc = 0x42DCE4u;
            // 0x42dce4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->pc = 0x42DCE8u;
        goto label_42dce8;
    }
    ctx->pc = 0x42DCE0u;
    {
        const bool branch_taken_0x42dce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42DCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42DCE0u;
            // 0x42dce4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42dce0) {
            ctx->pc = 0x42DDB4u;
            goto label_42ddb4;
        }
    }
    ctx->pc = 0x42DCE8u;
label_42dce8:
    // 0x42dce8: 0xc0576f4  jal         func_15DBD0
label_42dcec:
    if (ctx->pc == 0x42DCECu) {
        ctx->pc = 0x42DCF0u;
        goto label_42dcf0;
    }
    ctx->pc = 0x42DCE8u;
    SET_GPR_U32(ctx, 31, 0x42DCF0u);
    ctx->pc = 0x15DBD0u;
    if (runtime->hasFunction(0x15DBD0u)) {
        auto targetFn = runtime->lookupFunction(0x15DBD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DCF0u; }
        if (ctx->pc != 0x42DCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DBD0_0x15dbd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DCF0u; }
        if (ctx->pc != 0x42DCF0u) { return; }
    }
    ctx->pc = 0x42DCF0u;
label_42dcf0:
    // 0x42dcf0: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x42dcf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_42dcf4:
    // 0x42dcf4: 0xc076984  jal         func_1DA610
label_42dcf8:
    if (ctx->pc == 0x42DCF8u) {
        ctx->pc = 0x42DCF8u;
            // 0x42dcf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42DCFCu;
        goto label_42dcfc;
    }
    ctx->pc = 0x42DCF4u;
    SET_GPR_U32(ctx, 31, 0x42DCFCu);
    ctx->pc = 0x42DCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42DCF4u;
            // 0x42dcf8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA610u;
    if (runtime->hasFunction(0x1DA610u)) {
        auto targetFn = runtime->lookupFunction(0x1DA610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DCFCu; }
        if (ctx->pc != 0x42DCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA610_0x1da610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DCFCu; }
        if (ctx->pc != 0x42DCFCu) { return; }
    }
    ctx->pc = 0x42DCFCu;
label_42dcfc:
    // 0x42dcfc: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x42dcfcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42dd00:
    // 0x42dd00: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x42dd00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_42dd04:
    // 0x42dd04: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x42dd04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_42dd08:
    // 0x42dd08: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x42dd08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_42dd0c:
    // 0x42dd0c: 0xc4420030  lwc1        $f2, 0x30($v0)
    ctx->pc = 0x42dd0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
label_42dd10:
    // 0x42dd10: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x42dd10u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42dd14:
    // 0x42dd14: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x42dd14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_42dd18:
    // 0x42dd18: 0xc4410038  lwc1        $f1, 0x38($v0)
    ctx->pc = 0x42dd18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_42dd1c:
    // 0x42dd1c: 0xe7a200c0  swc1        $f2, 0xC0($sp)
    ctx->pc = 0x42dd1cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
label_42dd20:
    // 0x42dd20: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x42dd20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_42dd24:
    // 0x42dd24: 0xc440003c  lwc1        $f0, 0x3C($v0)
    ctx->pc = 0x42dd24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42dd28:
    // 0x42dd28: 0xe7a100c8  swc1        $f1, 0xC8($sp)
    ctx->pc = 0x42dd28u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
label_42dd2c:
    // 0x42dd2c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x42dd2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_42dd30:
    // 0x42dd30: 0x8c420034  lw          $v0, 0x34($v0)
    ctx->pc = 0x42dd30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
label_42dd34:
    // 0x42dd34: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x42dd34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
label_42dd38:
    // 0x42dd38: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x42dd38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
label_42dd3c:
    // 0x42dd3c: 0xc6000004  lwc1        $f0, 0x4($s0)
    ctx->pc = 0x42dd3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_42dd40:
    // 0x42dd40: 0xc04cca0  jal         func_133280
label_42dd44:
    if (ctx->pc == 0x42DD44u) {
        ctx->pc = 0x42DD44u;
            // 0x42dd44: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->pc = 0x42DD48u;
        goto label_42dd48;
    }
    ctx->pc = 0x42DD40u;
    SET_GPR_U32(ctx, 31, 0x42DD48u);
    ctx->pc = 0x42DD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42DD40u;
            // 0x42dd44: 0xe7a000c4  swc1        $f0, 0xC4($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DD48u; }
        if (ctx->pc != 0x42DD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DD48u; }
        if (ctx->pc != 0x42DD48u) { return; }
    }
    ctx->pc = 0x42DD48u;
label_42dd48:
    // 0x42dd48: 0xc076980  jal         func_1DA600
label_42dd4c:
    if (ctx->pc == 0x42DD4Cu) {
        ctx->pc = 0x42DD4Cu;
            // 0x42dd4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42DD50u;
        goto label_42dd50;
    }
    ctx->pc = 0x42DD48u;
    SET_GPR_U32(ctx, 31, 0x42DD50u);
    ctx->pc = 0x42DD4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42DD48u;
            // 0x42dd4c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1DA600u;
    if (runtime->hasFunction(0x1DA600u)) {
        auto targetFn = runtime->lookupFunction(0x1DA600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DD50u; }
        if (ctx->pc != 0x42DD50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA600_0x1da600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DD50u; }
        if (ctx->pc != 0x42DD50u) { return; }
    }
    ctx->pc = 0x42DD50u;
label_42dd50:
    // 0x42dd50: 0x27a400c0  addiu       $a0, $sp, 0xC0
    ctx->pc = 0x42dd50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_42dd54:
    // 0x42dd54: 0xc04cc34  jal         func_1330D0
label_42dd58:
    if (ctx->pc == 0x42DD58u) {
        ctx->pc = 0x42DD58u;
            // 0x42dd58: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42DD5Cu;
        goto label_42dd5c;
    }
    ctx->pc = 0x42DD54u;
    SET_GPR_U32(ctx, 31, 0x42DD5Cu);
    ctx->pc = 0x42DD58u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42DD54u;
            // 0x42dd58: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1330D0u;
    if (runtime->hasFunction(0x1330D0u)) {
        auto targetFn = runtime->lookupFunction(0x1330D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DD5Cu; }
        if (ctx->pc != 0x42DD5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001330D0_0x1330d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DD5Cu; }
        if (ctx->pc != 0x42DD5Cu) { return; }
    }
    ctx->pc = 0x42DD5Cu;
label_42dd5c:
    // 0x42dd5c: 0x3c0344c8  lui         $v1, 0x44C8
    ctx->pc = 0x42dd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17608 << 16));
label_42dd60:
    // 0x42dd60: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x42dd60u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_42dd64:
    // 0x42dd64: 0x0  nop
    ctx->pc = 0x42dd64u;
    // NOP
label_42dd68:
    // 0x42dd68: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x42dd68u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_42dd6c:
    // 0x42dd6c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
label_42dd70:
    if (ctx->pc == 0x42DD70u) {
        ctx->pc = 0x42DD70u;
            // 0x42dd70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42DD74u;
        goto label_42dd74;
    }
    ctx->pc = 0x42DD6Cu;
    {
        const bool branch_taken_0x42dd6c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x42dd6c) {
            ctx->pc = 0x42DD70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42DD6Cu;
            // 0x42dd70: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42DD7Cu;
            goto label_42dd7c;
        }
    }
    ctx->pc = 0x42DD74u;
label_42dd74:
    // 0x42dd74: 0x1000000f  b           . + 4 + (0xF << 2)
label_42dd78:
    if (ctx->pc == 0x42DD78u) {
        ctx->pc = 0x42DD78u;
            // 0x42dd78: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->pc = 0x42DD7Cu;
        goto label_42dd7c;
    }
    ctx->pc = 0x42DD74u;
    {
        const bool branch_taken_0x42dd74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42DD78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42DD74u;
            // 0x42dd78: 0x24030004  addiu       $v1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42dd74) {
            ctx->pc = 0x42DDB4u;
            goto label_42ddb4;
        }
    }
    ctx->pc = 0x42DD7Cu;
label_42dd7c:
    // 0x42dd7c: 0xc07697c  jal         func_1DA5F0
label_42dd80:
    if (ctx->pc == 0x42DD80u) {
        ctx->pc = 0x42DD84u;
        goto label_42dd84;
    }
    ctx->pc = 0x42DD7Cu;
    SET_GPR_U32(ctx, 31, 0x42DD84u);
    ctx->pc = 0x1DA5F0u;
    if (runtime->hasFunction(0x1DA5F0u)) {
        auto targetFn = runtime->lookupFunction(0x1DA5F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DD84u; }
        if (ctx->pc != 0x42DD84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001DA5F0_0x1da5f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DD84u; }
        if (ctx->pc != 0x42DD84u) { return; }
    }
    ctx->pc = 0x42DD84u;
label_42dd84:
    // 0x42dd84: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x42dd84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42dd88:
    // 0x42dd88: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x42dd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_42dd8c:
    // 0x42dd8c: 0xc04cd60  jal         func_133580
label_42dd90:
    if (ctx->pc == 0x42DD90u) {
        ctx->pc = 0x42DD90u;
            // 0x42dd90: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42DD94u;
        goto label_42dd94;
    }
    ctx->pc = 0x42DD8Cu;
    SET_GPR_U32(ctx, 31, 0x42DD94u);
    ctx->pc = 0x42DD90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42DD8Cu;
            // 0x42dd90: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DD94u; }
        if (ctx->pc != 0x42DD94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DD94u; }
        if (ctx->pc != 0x42DD94u) { return; }
    }
    ctx->pc = 0x42DD94u;
label_42dd94:
    // 0x42dd94: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42dd94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42dd98:
    // 0x42dd98: 0xc04c650  jal         func_131940
label_42dd9c:
    if (ctx->pc == 0x42DD9Cu) {
        ctx->pc = 0x42DD9Cu;
            // 0x42dd9c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->pc = 0x42DDA0u;
        goto label_42dda0;
    }
    ctx->pc = 0x42DD98u;
    SET_GPR_U32(ctx, 31, 0x42DDA0u);
    ctx->pc = 0x42DD9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42DD98u;
            // 0x42dd9c: 0x27a50080  addiu       $a1, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x131940u;
    if (runtime->hasFunction(0x131940u)) {
        auto targetFn = runtime->lookupFunction(0x131940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DDA0u; }
        if (ctx->pc != 0x42DDA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00131940_0x131940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DDA0u; }
        if (ctx->pc != 0x42DDA0u) { return; }
    }
    ctx->pc = 0x42DDA0u;
label_42dda0:
    // 0x42dda0: 0x3c030063  lui         $v1, 0x63
    ctx->pc = 0x42dda0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)99 << 16));
label_42dda4:
    // 0x42dda4: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x42dda4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_42dda8:
    // 0x42dda8: 0x2463e320  addiu       $v1, $v1, -0x1CE0
    ctx->pc = 0x42dda8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959904));
label_42ddac:
    // 0x42ddac: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x42ddacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_42ddb0:
    // 0x42ddb0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x42ddb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_42ddb4:
    // 0x42ddb4: 0x28610002  slti        $at, $v1, 0x2
    ctx->pc = 0x42ddb4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
label_42ddb8:
    // 0x42ddb8: 0x1020006b  beqz        $at, . + 4 + (0x6B << 2)
label_42ddbc:
    if (ctx->pc == 0x42DDBCu) {
        ctx->pc = 0x42DDC0u;
        goto label_42ddc0;
    }
    ctx->pc = 0x42DDB8u;
    {
        const bool branch_taken_0x42ddb8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x42ddb8) {
            ctx->pc = 0x42DF68u;
            goto label_42df68;
        }
    }
    ctx->pc = 0x42DDC0u;
label_42ddc0:
    // 0x42ddc0: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42ddc4:
    // 0x42ddc4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x42ddc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42ddc8:
    // 0x42ddc8: 0x8c50e418  lw          $s0, -0x1BE8($v0)
    ctx->pc = 0x42ddc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960152)));
label_42ddcc:
    // 0x42ddcc: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x42ddccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_42ddd0:
    // 0x42ddd0: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x42ddd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_42ddd4:
    // 0x42ddd4: 0x320f809  jalr        $t9
label_42ddd8:
    if (ctx->pc == 0x42DDD8u) {
        ctx->pc = 0x42DDD8u;
            // 0x42ddd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42DDDCu;
        goto label_42dddc;
    }
    ctx->pc = 0x42DDD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42DDDCu);
        ctx->pc = 0x42DDD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42DDD4u;
            // 0x42ddd8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42DDDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42DDDCu; }
            if (ctx->pc != 0x42DDDCu) { return; }
        }
        }
    }
    ctx->pc = 0x42DDDCu;
label_42dddc:
    // 0x42dddc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x42dddcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_42dde0:
    // 0x42dde0: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x42dde0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_42dde4:
    // 0x42dde4: 0x8c43d130  lw          $v1, -0x2ED0($v0)
    ctx->pc = 0x42dde4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_42dde8:
    // 0x42dde8: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x42dde8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_42ddec:
    // 0x42ddec: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x42ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_42ddf0:
    // 0x42ddf0: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x42ddf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
label_42ddf4:
    // 0x42ddf4: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x42ddf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_42ddf8:
    // 0x42ddf8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x42ddf8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_42ddfc:
    // 0x42ddfc: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x42ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_42de00:
    // 0x42de00: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x42de00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_42de04:
    // 0x42de04: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x42de04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_42de08:
    // 0x42de08: 0xc04cd60  jal         func_133580
label_42de0c:
    if (ctx->pc == 0x42DE0Cu) {
        ctx->pc = 0x42DE0Cu;
            // 0x42de0c: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->pc = 0x42DE10u;
        goto label_42de10;
    }
    ctx->pc = 0x42DE08u;
    SET_GPR_U32(ctx, 31, 0x42DE10u);
    ctx->pc = 0x42DE0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42DE08u;
            // 0x42de0c: 0x24450010  addiu       $a1, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DE10u; }
        if (ctx->pc != 0x42DE10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DE10u; }
        if (ctx->pc != 0x42DE10u) { return; }
    }
    ctx->pc = 0x42DE10u;
label_42de10:
    // 0x42de10: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x42de10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_42de14:
    // 0x42de14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42de14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42de18:
    // 0x42de18: 0x8c44e370  lw          $a0, -0x1C90($v0)
    ctx->pc = 0x42de18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_42de1c:
    // 0x42de1c: 0x8ec60004  lw          $a2, 0x4($s6)
    ctx->pc = 0x42de1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
label_42de20:
    // 0x42de20: 0x8c670034  lw          $a3, 0x34($v1)
    ctx->pc = 0x42de20u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_42de24:
    // 0x42de24: 0xc04e4cc  jal         func_139330
label_42de28:
    if (ctx->pc == 0x42DE28u) {
        ctx->pc = 0x42DE28u;
            // 0x42de28: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x42DE2Cu;
        goto label_42de2c;
    }
    ctx->pc = 0x42DE24u;
    SET_GPR_U32(ctx, 31, 0x42DE2Cu);
    ctx->pc = 0x42DE28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42DE24u;
            // 0x42de28: 0x27a500d0  addiu       $a1, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139330u;
    if (runtime->hasFunction(0x139330u)) {
        auto targetFn = runtime->lookupFunction(0x139330u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DE2Cu; }
        if (ctx->pc != 0x42DE2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139330_0x139330(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DE2Cu; }
        if (ctx->pc != 0x42DE2Cu) { return; }
    }
    ctx->pc = 0x42DE2Cu;
label_42de2c:
    // 0x42de2c: 0x3c023f00  lui         $v0, 0x3F00
    ctx->pc = 0x42de2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16128 << 16));
label_42de30:
    // 0x42de30: 0x92a40010  lbu         $a0, 0x10($s5)
    ctx->pc = 0x42de30u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 21), 16)));
label_42de34:
    // 0x42de34: 0x34428081  ori         $v0, $v0, 0x8081
    ctx->pc = 0x42de34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32897);
label_42de38:
    // 0x42de38: 0x3c030064  lui         $v1, 0x64
    ctx->pc = 0x42de38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)100 << 16));
label_42de3c:
    // 0x42de3c: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x42de3cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_42de40:
    // 0x42de40: 0x2463caf8  addiu       $v1, $v1, -0x3508
    ctx->pc = 0x42de40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294953720));
label_42de44:
    // 0x42de44: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x42de44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_42de48:
    // 0x42de48: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x42de48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_42de4c:
    // 0x42de4c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x42de4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_42de50:
    // 0x42de50: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x42de50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_42de54:
    // 0x42de54: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x42de54u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_42de58:
    // 0x42de58: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x42de58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_42de5c:
    // 0x42de5c: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x42de5cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_42de60:
    // 0x42de60: 0xc0747dc  jal         func_1D1F70
label_42de64:
    if (ctx->pc == 0x42DE64u) {
        ctx->pc = 0x42DE64u;
            // 0x42de64: 0x2a180  sll         $s4, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->pc = 0x42DE68u;
        goto label_42de68;
    }
    ctx->pc = 0x42DE60u;
    SET_GPR_U32(ctx, 31, 0x42DE68u);
    ctx->pc = 0x42DE64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42DE60u;
            // 0x42de64: 0x2a180  sll         $s4, $v0, 6 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)SLL32(GPR_U32(ctx, 2), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D1F70u;
    if (runtime->hasFunction(0x1D1F70u)) {
        auto targetFn = runtime->lookupFunction(0x1D1F70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DE68u; }
        if (ctx->pc != 0x42DE68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1F70_0x1d1f70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DE68u; }
        if (ctx->pc != 0x42DE68u) { return; }
    }
    ctx->pc = 0x42DE68u;
label_42de68:
    // 0x42de68: 0x8e230d6c  lw          $v1, 0xD6C($s1)
    ctx->pc = 0x42de68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3436)));
label_42de6c:
    // 0x42de6c: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x42de6cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_42de70:
    // 0x42de70: 0x24020012  addiu       $v0, $zero, 0x12
    ctx->pc = 0x42de70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
label_42de74:
    // 0x42de74: 0x90630010  lbu         $v1, 0x10($v1)
    ctx->pc = 0x42de74u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 16)));
label_42de78:
    // 0x42de78: 0x5462000e  bnel        $v1, $v0, . + 4 + (0xE << 2)
label_42de7c:
    if (ctx->pc == 0x42DE7Cu) {
        ctx->pc = 0x42DE7Cu;
            // 0x42de7c: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x42DE80u;
        goto label_42de80;
    }
    ctx->pc = 0x42DE78u;
    {
        const bool branch_taken_0x42de78 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x42de78) {
            ctx->pc = 0x42DE7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42DE78u;
            // 0x42de7c: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42DEB4u;
            goto label_42deb4;
        }
    }
    ctx->pc = 0x42DE80u;
label_42de80:
    // 0x42de80: 0x8e220d70  lw          $v0, 0xD70($s1)
    ctx->pc = 0x42de80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
label_42de84:
    // 0x42de84: 0x8c4200cc  lw          $v0, 0xCC($v0)
    ctx->pc = 0x42de84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 204)));
label_42de88:
    // 0x42de88: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_42de8c:
    if (ctx->pc == 0x42DE8Cu) {
        ctx->pc = 0x42DE90u;
        goto label_42de90;
    }
    ctx->pc = 0x42DE88u;
    {
        const bool branch_taken_0x42de88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42de88) {
            ctx->pc = 0x42DEA0u;
            goto label_42dea0;
        }
    }
    ctx->pc = 0x42DE90u;
label_42de90:
    // 0x42de90: 0xc04e738  jal         func_139CE0
label_42de94:
    if (ctx->pc == 0x42DE94u) {
        ctx->pc = 0x42DE94u;
            // 0x42de94: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x42DE98u;
        goto label_42de98;
    }
    ctx->pc = 0x42DE90u;
    SET_GPR_U32(ctx, 31, 0x42DE98u);
    ctx->pc = 0x42DE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42DE90u;
            // 0x42de94: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DE98u; }
        if (ctx->pc != 0x42DE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DE98u; }
        if (ctx->pc != 0x42DE98u) { return; }
    }
    ctx->pc = 0x42DE98u;
label_42de98:
    // 0x42de98: 0x10000008  b           . + 4 + (0x8 << 2)
label_42de9c:
    if (ctx->pc == 0x42DE9Cu) {
        ctx->pc = 0x42DEA0u;
        goto label_42dea0;
    }
    ctx->pc = 0x42DE98u;
    {
        const bool branch_taken_0x42de98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42de98) {
            ctx->pc = 0x42DEBCu;
            goto label_42debc;
        }
    }
    ctx->pc = 0x42DEA0u;
label_42dea0:
    // 0x42dea0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42dea0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42dea4:
    // 0x42dea4: 0xc04e738  jal         func_139CE0
label_42dea8:
    if (ctx->pc == 0x42DEA8u) {
        ctx->pc = 0x42DEA8u;
            // 0x42dea8: 0x8c44f2b4  lw          $a0, -0xD4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963892)));
        ctx->pc = 0x42DEACu;
        goto label_42deac;
    }
    ctx->pc = 0x42DEA4u;
    SET_GPR_U32(ctx, 31, 0x42DEACu);
    ctx->pc = 0x42DEA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42DEA4u;
            // 0x42dea8: 0x8c44f2b4  lw          $a0, -0xD4C($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294963892)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DEACu; }
        if (ctx->pc != 0x42DEACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DEACu; }
        if (ctx->pc != 0x42DEACu) { return; }
    }
    ctx->pc = 0x42DEACu;
label_42deac:
    // 0x42deac: 0x10000003  b           . + 4 + (0x3 << 2)
label_42deb0:
    if (ctx->pc == 0x42DEB0u) {
        ctx->pc = 0x42DEB4u;
        goto label_42deb4;
    }
    ctx->pc = 0x42DEACu;
    {
        const bool branch_taken_0x42deac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42deac) {
            ctx->pc = 0x42DEBCu;
            goto label_42debc;
        }
    }
    ctx->pc = 0x42DEB4u;
label_42deb4:
    // 0x42deb4: 0xc04e738  jal         func_139CE0
label_42deb8:
    if (ctx->pc == 0x42DEB8u) {
        ctx->pc = 0x42DEBCu;
        goto label_42debc;
    }
    ctx->pc = 0x42DEB4u;
    SET_GPR_U32(ctx, 31, 0x42DEBCu);
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DEBCu; }
        if (ctx->pc != 0x42DEBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DEBCu; }
        if (ctx->pc != 0x42DEBCu) { return; }
    }
    ctx->pc = 0x42DEBCu;
label_42debc:
    // 0x42debc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42debcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42dec0:
    // 0x42dec0: 0x8c45e370  lw          $a1, -0x1C90($v0)
    ctx->pc = 0x42dec0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_42dec4:
    // 0x42dec4: 0x2934025  or          $t0, $s4, $s3
    ctx->pc = 0x42dec4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 20) | GPR_U64(ctx, 19));
label_42dec8:
    // 0x42dec8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x42dec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_42decc:
    // 0x42decc: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x42deccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
label_42ded0:
    // 0x42ded0: 0x1021024  and         $v0, $t0, $v0
    ctx->pc = 0x42ded0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & GPR_U64(ctx, 2));
label_42ded4:
    // 0x42ded4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
label_42ded8:
    if (ctx->pc == 0x42DED8u) {
        ctx->pc = 0x42DED8u;
            // 0x42ded8: 0x8ec60010  lw          $a2, 0x10($s6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
        ctx->pc = 0x42DEDCu;
        goto label_42dedc;
    }
    ctx->pc = 0x42DED4u;
    {
        const bool branch_taken_0x42ded4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42DED8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42DED4u;
            // 0x42ded8: 0x8ec60010  lw          $a2, 0x10($s6) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42ded4) {
            ctx->pc = 0x42DEECu;
            goto label_42deec;
        }
    }
    ctx->pc = 0x42DEDCu;
label_42dedc:
    // 0x42dedc: 0xc0538d8  jal         func_14E360
label_42dee0:
    if (ctx->pc == 0x42DEE0u) {
        ctx->pc = 0x42DEE0u;
            // 0x42dee0: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->pc = 0x42DEE4u;
        goto label_42dee4;
    }
    ctx->pc = 0x42DEDCu;
    SET_GPR_U32(ctx, 31, 0x42DEE4u);
    ctx->pc = 0x42DEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42DEDCu;
            // 0x42dee0: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E360u;
    if (runtime->hasFunction(0x14E360u)) {
        auto targetFn = runtime->lookupFunction(0x14E360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DEE4u; }
        if (ctx->pc != 0x42DEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E360_0x14e360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DEE4u; }
        if (ctx->pc != 0x42DEE4u) { return; }
    }
    ctx->pc = 0x42DEE4u;
label_42dee4:
    // 0x42dee4: 0x10000004  b           . + 4 + (0x4 << 2)
label_42dee8:
    if (ctx->pc == 0x42DEE8u) {
        ctx->pc = 0x42DEE8u;
            // 0x42dee8: 0x8eb90054  lw          $t9, 0x54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
        ctx->pc = 0x42DEECu;
        goto label_42deec;
    }
    ctx->pc = 0x42DEE4u;
    {
        const bool branch_taken_0x42dee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42DEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42DEE4u;
            // 0x42dee8: 0x8eb90054  lw          $t9, 0x54($s5) (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42dee4) {
            ctx->pc = 0x42DEF8u;
            goto label_42def8;
        }
    }
    ctx->pc = 0x42DEECu;
label_42deec:
    // 0x42deec: 0xc050044  jal         func_140110
label_42def0:
    if (ctx->pc == 0x42DEF0u) {
        ctx->pc = 0x42DEF0u;
            // 0x42def0: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->pc = 0x42DEF4u;
        goto label_42def4;
    }
    ctx->pc = 0x42DEECu;
    SET_GPR_U32(ctx, 31, 0x42DEF4u);
    ctx->pc = 0x42DEF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42DEECu;
            // 0x42def0: 0x3c078000  lui         $a3, 0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140110u;
    if (runtime->hasFunction(0x140110u)) {
        auto targetFn = runtime->lookupFunction(0x140110u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DEF4u; }
        if (ctx->pc != 0x42DEF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140110_0x140110(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DEF4u; }
        if (ctx->pc != 0x42DEF4u) { return; }
    }
    ctx->pc = 0x42DEF4u;
label_42def4:
    // 0x42def4: 0x8eb90054  lw          $t9, 0x54($s5)
    ctx->pc = 0x42def4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 84)));
label_42def8:
    // 0x42def8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x42def8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_42defc:
    // 0x42defc: 0x8f39003c  lw          $t9, 0x3C($t9)
    ctx->pc = 0x42defcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 60)));
label_42df00:
    // 0x42df00: 0x320f809  jalr        $t9
label_42df04:
    if (ctx->pc == 0x42DF04u) {
        ctx->pc = 0x42DF04u;
            // 0x42df04: 0x24050025  addiu       $a1, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->pc = 0x42DF08u;
        goto label_42df08;
    }
    ctx->pc = 0x42DF00u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42DF08u);
        ctx->pc = 0x42DF04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42DF00u;
            // 0x42df04: 0x24050025  addiu       $a1, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42DF08u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42DF08u; }
            if (ctx->pc != 0x42DF08u) { return; }
        }
        }
    }
    ctx->pc = 0x42DF08u;
label_42df08:
    // 0x42df08: 0x8ea50000  lw          $a1, 0x0($s5)
    ctx->pc = 0x42df08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
label_42df0c:
    // 0x42df0c: 0x23e3c  dsll32      $a3, $v0, 24
    ctx->pc = 0x42df0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) << (32 + 24));
label_42df10:
    // 0x42df10: 0x73e3f  dsra32      $a3, $a3, 24
    ctx->pc = 0x42df10u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 24));
label_42df14:
    // 0x42df14: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x42df14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_42df18:
    // 0x42df18: 0x718c0  sll         $v1, $a3, 3
    ctx->pc = 0x42df18u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
label_42df1c:
    // 0x42df1c: 0x8c42e370  lw          $v0, -0x1C90($v0)
    ctx->pc = 0x42df1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_42df20:
    // 0x42df20: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x42df20u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
label_42df24:
    // 0x42df24: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x42df24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
label_42df28:
    // 0x42df28: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x42df28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_42df2c:
    // 0x42df2c: 0x8e240d70  lw          $a0, 0xD70($s1)
    ctx->pc = 0x42df2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3440)));
label_42df30:
    // 0x42df30: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x42df30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_42df34:
    // 0x42df34: 0x8ca50030  lw          $a1, 0x30($a1)
    ctx->pc = 0x42df34u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
label_42df38:
    // 0x42df38: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x42df38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_42df3c:
    // 0x42df3c: 0x84630004  lh          $v1, 0x4($v1)
    ctx->pc = 0x42df3cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
label_42df40:
    // 0x42df40: 0x31980  sll         $v1, $v1, 6
    ctx->pc = 0x42df40u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
label_42df44:
    // 0x42df44: 0xc0bdba8  jal         func_2F6EA0
label_42df48:
    if (ctx->pc == 0x42DF48u) {
        ctx->pc = 0x42DF48u;
            // 0x42df48: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->pc = 0x42DF4Cu;
        goto label_42df4c;
    }
    ctx->pc = 0x42DF44u;
    SET_GPR_U32(ctx, 31, 0x42DF4Cu);
    ctx->pc = 0x42DF48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42DF44u;
            // 0x42df48: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F6EA0u;
    if (runtime->hasFunction(0x2F6EA0u)) {
        auto targetFn = runtime->lookupFunction(0x2F6EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DF4Cu; }
        if (ctx->pc != 0x42DF4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F6EA0_0x2f6ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DF4Cu; }
        if (ctx->pc != 0x42DF4Cu) { return; }
    }
    ctx->pc = 0x42DF4Cu;
label_42df4c:
    // 0x42df4c: 0xc0747d0  jal         func_1D1F40
label_42df50:
    if (ctx->pc == 0x42DF50u) {
        ctx->pc = 0x42DF54u;
        goto label_42df54;
    }
    ctx->pc = 0x42DF4Cu;
    SET_GPR_U32(ctx, 31, 0x42DF54u);
    ctx->pc = 0x1D1F40u;
    if (runtime->hasFunction(0x1D1F40u)) {
        auto targetFn = runtime->lookupFunction(0x1D1F40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DF54u; }
        if (ctx->pc != 0x42DF54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D1F40_0x1d1f40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DF54u; }
        if (ctx->pc != 0x42DF54u) { return; }
    }
    ctx->pc = 0x42DF54u;
label_42df54:
    // 0x42df54: 0x8e190000  lw          $t9, 0x0($s0)
    ctx->pc = 0x42df54u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_42df58:
    // 0x42df58: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42df58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42df5c:
    // 0x42df5c: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x42df5cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_42df60:
    // 0x42df60: 0x320f809  jalr        $t9
label_42df64:
    if (ctx->pc == 0x42DF64u) {
        ctx->pc = 0x42DF64u;
            // 0x42df64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42DF68u;
        goto label_42df68;
    }
    ctx->pc = 0x42DF60u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42DF68u);
        ctx->pc = 0x42DF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42DF60u;
            // 0x42df64: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42DF68u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42DF68u; }
            if (ctx->pc != 0x42DF68u) { return; }
        }
        }
    }
    ctx->pc = 0x42DF68u;
label_42df68:
    // 0x42df68: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x42df68u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_42df6c:
    // 0x42df6c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x42df6cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_42df70:
    // 0x42df70: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x42df70u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_42df74:
    // 0x42df74: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x42df74u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_42df78:
    // 0x42df78: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x42df78u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_42df7c:
    // 0x42df7c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x42df7cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_42df80:
    // 0x42df80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42df80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42df84:
    // 0x42df84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42df84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42df88:
    // 0x42df88: 0x3e00008  jr          $ra
label_42df8c:
    if (ctx->pc == 0x42DF8Cu) {
        ctx->pc = 0x42DF8Cu;
            // 0x42df8c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x42DF90u;
        goto label_42df90;
    }
    ctx->pc = 0x42DF88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42DF8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42DF88u;
            // 0x42df8c: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42DF90u;
label_42df90:
    // 0x42df90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x42df90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_42df94:
    // 0x42df94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x42df94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_42df98:
    // 0x42df98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42df98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42df9c:
    // 0x42df9c: 0x90831241  lbu         $v1, 0x1241($a0)
    ctx->pc = 0x42df9cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4673)));
label_42dfa0:
    // 0x42dfa0: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
label_42dfa4:
    if (ctx->pc == 0x42DFA4u) {
        ctx->pc = 0x42DFA4u;
            // 0x42dfa4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42DFA8u;
        goto label_42dfa8;
    }
    ctx->pc = 0x42DFA0u;
    {
        const bool branch_taken_0x42dfa0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42DFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42DFA0u;
            // 0x42dfa4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42dfa0) {
            ctx->pc = 0x42DFDCu;
            goto label_42dfdc;
        }
    }
    ctx->pc = 0x42DFA8u;
label_42dfa8:
    // 0x42dfa8: 0x92031240  lbu         $v1, 0x1240($s0)
    ctx->pc = 0x42dfa8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4672)));
label_42dfac:
    // 0x42dfac: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
label_42dfb0:
    if (ctx->pc == 0x42DFB0u) {
        ctx->pc = 0x42DFB0u;
            // 0x42dfb0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x42DFB4u;
        goto label_42dfb4;
    }
    ctx->pc = 0x42DFACu;
    {
        const bool branch_taken_0x42dfac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x42dfac) {
            ctx->pc = 0x42DFB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x42DFACu;
            // 0x42dfb0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x42DFE0u;
            goto label_42dfe0;
        }
    }
    ctx->pc = 0x42DFB4u;
label_42dfb4:
    // 0x42dfb4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x42dfb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_42dfb8:
    // 0x42dfb8: 0xc0dcd78  jal         func_3735E0
label_42dfbc:
    if (ctx->pc == 0x42DFBCu) {
        ctx->pc = 0x42DFBCu;
            // 0x42dfbc: 0x8c443e78  lw          $a0, 0x3E78($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15992)));
        ctx->pc = 0x42DFC0u;
        goto label_42dfc0;
    }
    ctx->pc = 0x42DFB8u;
    SET_GPR_U32(ctx, 31, 0x42DFC0u);
    ctx->pc = 0x42DFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42DFB8u;
            // 0x42dfbc: 0x8c443e78  lw          $a0, 0x3E78($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15992)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3735E0u;
    if (runtime->hasFunction(0x3735E0u)) {
        auto targetFn = runtime->lookupFunction(0x3735E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DFC0u; }
        if (ctx->pc != 0x42DFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003735E0_0x3735e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DFC0u; }
        if (ctx->pc != 0x42DFC0u) { return; }
    }
    ctx->pc = 0x42DFC0u;
label_42dfc0:
    // 0x42dfc0: 0xc0bdca8  jal         func_2F72A0
label_42dfc4:
    if (ctx->pc == 0x42DFC4u) {
        ctx->pc = 0x42DFC4u;
            // 0x42dfc4: 0x8e040d70  lw          $a0, 0xD70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
        ctx->pc = 0x42DFC8u;
        goto label_42dfc8;
    }
    ctx->pc = 0x42DFC0u;
    SET_GPR_U32(ctx, 31, 0x42DFC8u);
    ctx->pc = 0x42DFC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42DFC0u;
            // 0x42dfc4: 0x8e040d70  lw          $a0, 0xD70($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F72A0u;
    if (runtime->hasFunction(0x2F72A0u)) {
        auto targetFn = runtime->lookupFunction(0x2F72A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DFC8u; }
        if (ctx->pc != 0x42DFC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F72A0_0x2f72a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42DFC8u; }
        if (ctx->pc != 0x42DFC8u) { return; }
    }
    ctx->pc = 0x42DFC8u;
label_42dfc8:
    // 0x42dfc8: 0x8e040d6c  lw          $a0, 0xD6C($s0)
    ctx->pc = 0x42dfc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 3436)));
label_42dfcc:
    // 0x42dfcc: 0x8c990054  lw          $t9, 0x54($a0)
    ctx->pc = 0x42dfccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
label_42dfd0:
    // 0x42dfd0: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x42dfd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_42dfd4:
    // 0x42dfd4: 0x320f809  jalr        $t9
label_42dfd8:
    if (ctx->pc == 0x42DFD8u) {
        ctx->pc = 0x42DFDCu;
        goto label_42dfdc;
    }
    ctx->pc = 0x42DFD4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42DFDCu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x42DFDCu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42DFDCu; }
            if (ctx->pc != 0x42DFDCu) { return; }
        }
        }
    }
    ctx->pc = 0x42DFDCu;
label_42dfdc:
    // 0x42dfdc: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x42dfdcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_42dfe0:
    // 0x42dfe0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42dfe0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42dfe4:
    // 0x42dfe4: 0x3e00008  jr          $ra
label_42dfe8:
    if (ctx->pc == 0x42DFE8u) {
        ctx->pc = 0x42DFE8u;
            // 0x42dfe8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x42DFECu;
        goto label_42dfec;
    }
    ctx->pc = 0x42DFE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42DFE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42DFE4u;
            // 0x42dfe8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42DFECu;
label_42dfec:
    // 0x42dfec: 0x0  nop
    ctx->pc = 0x42dfecu;
    // NOP
label_42dff0:
    // 0x42dff0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x42dff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_42dff4:
    // 0x42dff4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x42dff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_42dff8:
    // 0x42dff8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x42dff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_42dffc:
    // 0x42dffc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x42dffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_42e000:
    // 0x42e000: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x42e000u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_42e004:
    // 0x42e004: 0xc0be408  jal         func_2F9020
label_42e008:
    if (ctx->pc == 0x42E008u) {
        ctx->pc = 0x42E008u;
            // 0x42e008: 0x8c840d70  lw          $a0, 0xD70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
        ctx->pc = 0x42E00Cu;
        goto label_42e00c;
    }
    ctx->pc = 0x42E004u;
    SET_GPR_U32(ctx, 31, 0x42E00Cu);
    ctx->pc = 0x42E008u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x42E004u;
            // 0x42e008: 0x8c840d70  lw          $a0, 0xD70($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3440)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2F9020u;
    if (runtime->hasFunction(0x2F9020u)) {
        auto targetFn = runtime->lookupFunction(0x2F9020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E00Cu; }
        if (ctx->pc != 0x42E00Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002F9020_0x2f9020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x42E00Cu; }
        if (ctx->pc != 0x42E00Cu) { return; }
    }
    ctx->pc = 0x42E00Cu;
label_42e00c:
    // 0x42e00c: 0x8e300550  lw          $s0, 0x550($s1)
    ctx->pc = 0x42e00cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1360)));
label_42e010:
    // 0x42e010: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x42e010u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_42e014:
    // 0x42e014: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x42e014u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42e018:
    // 0x42e018: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x42e018u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_42e01c:
    // 0x42e01c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x42e01cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42e020:
    // 0x42e020: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x42e020u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_42e024:
    // 0x42e024: 0x8203010d  lb          $v1, 0x10D($s0)
    ctx->pc = 0x42e024u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 269)));
label_42e028:
    // 0x42e028: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42e028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42e02c:
    // 0x42e02c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x42e02cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
label_42e030:
    // 0x42e030: 0xa203010e  sb          $v1, 0x10E($s0)
    ctx->pc = 0x42e030u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 270), (uint8_t)GPR_U32(ctx, 3));
label_42e034:
    // 0x42e034: 0xa200010d  sb          $zero, 0x10D($s0)
    ctx->pc = 0x42e034u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 269), (uint8_t)GPR_U32(ctx, 0));
label_42e038:
    // 0x42e038: 0x8203010c  lb          $v1, 0x10C($s0)
    ctx->pc = 0x42e038u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 268)));
label_42e03c:
    // 0x42e03c: 0x431823  subu        $v1, $v0, $v1
    ctx->pc = 0x42e03cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_42e040:
    // 0x42e040: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x42e040u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_42e044:
    // 0x42e044: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x42e044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_42e048:
    // 0x42e048: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x42e048u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_42e04c:
    // 0x42e04c: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x42e04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_42e050:
    // 0x42e050: 0xac480080  sw          $t0, 0x80($v0)
    ctx->pc = 0x42e050u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 128), GPR_U32(ctx, 8));
label_42e054:
    // 0x42e054: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x42e054u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_42e058:
    // 0x42e058: 0x8f390028  lw          $t9, 0x28($t9)
    ctx->pc = 0x42e058u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 40)));
label_42e05c:
    // 0x42e05c: 0x320f809  jalr        $t9
label_42e060:
    if (ctx->pc == 0x42E060u) {
        ctx->pc = 0x42E060u;
            // 0x42e060: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->pc = 0x42E064u;
        goto label_42e064;
    }
    ctx->pc = 0x42E05Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42E064u);
        ctx->pc = 0x42E060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42E05Cu;
            // 0x42e060: 0x24070010  addiu       $a3, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42E064u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42E064u; }
            if (ctx->pc != 0x42E064u) { return; }
        }
        }
    }
    ctx->pc = 0x42E064u;
label_42e064:
    // 0x42e064: 0x8e190058  lw          $t9, 0x58($s0)
    ctx->pc = 0x42e064u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
label_42e068:
    // 0x42e068: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x42e068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_42e06c:
    // 0x42e06c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x42e06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_42e070:
    // 0x42e070: 0x8f39002c  lw          $t9, 0x2C($t9)
    ctx->pc = 0x42e070u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 44)));
label_42e074:
    // 0x42e074: 0x320f809  jalr        $t9
label_42e078:
    if (ctx->pc == 0x42E078u) {
        ctx->pc = 0x42E078u;
            // 0x42e078: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x42E07Cu;
        goto label_42e07c;
    }
    ctx->pc = 0x42E074u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x42E07Cu);
        ctx->pc = 0x42E078u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42E074u;
            // 0x42e078: 0xa0302d  daddu       $a2, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x42E07Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x42E07Cu; }
            if (ctx->pc != 0x42E07Cu) { return; }
        }
        }
    }
    ctx->pc = 0x42E07Cu;
label_42e07c:
    // 0x42e07c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x42e07cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42e080:
    // 0x42e080: 0xa2231240  sb          $v1, 0x1240($s1)
    ctx->pc = 0x42e080u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 4672), (uint8_t)GPR_U32(ctx, 3));
label_42e084:
    // 0x42e084: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x42e084u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_42e088:
    // 0x42e088: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x42e088u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_42e08c:
    // 0x42e08c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x42e08cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_42e090:
    // 0x42e090: 0x3e00008  jr          $ra
label_42e094:
    if (ctx->pc == 0x42E094u) {
        ctx->pc = 0x42E094u;
            // 0x42e094: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x42E098u;
        goto label_42e098;
    }
    ctx->pc = 0x42E090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42E094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42E090u;
            // 0x42e094: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42E098u;
label_42e098:
    // 0x42e098: 0x0  nop
    ctx->pc = 0x42e098u;
    // NOP
label_42e09c:
    // 0x42e09c: 0x0  nop
    ctx->pc = 0x42e09cu;
    // NOP
}
