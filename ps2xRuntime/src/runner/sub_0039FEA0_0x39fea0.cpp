#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0039FEA0
// Address: 0x39fea0 - 0x3a0310
void sub_0039FEA0_0x39fea0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039FEA0_0x39fea0");
#endif

    switch (ctx->pc) {
        case 0x39fea0u: goto label_39fea0;
        case 0x39fea4u: goto label_39fea4;
        case 0x39fea8u: goto label_39fea8;
        case 0x39feacu: goto label_39feac;
        case 0x39feb0u: goto label_39feb0;
        case 0x39feb4u: goto label_39feb4;
        case 0x39feb8u: goto label_39feb8;
        case 0x39febcu: goto label_39febc;
        case 0x39fec0u: goto label_39fec0;
        case 0x39fec4u: goto label_39fec4;
        case 0x39fec8u: goto label_39fec8;
        case 0x39feccu: goto label_39fecc;
        case 0x39fed0u: goto label_39fed0;
        case 0x39fed4u: goto label_39fed4;
        case 0x39fed8u: goto label_39fed8;
        case 0x39fedcu: goto label_39fedc;
        case 0x39fee0u: goto label_39fee0;
        case 0x39fee4u: goto label_39fee4;
        case 0x39fee8u: goto label_39fee8;
        case 0x39feecu: goto label_39feec;
        case 0x39fef0u: goto label_39fef0;
        case 0x39fef4u: goto label_39fef4;
        case 0x39fef8u: goto label_39fef8;
        case 0x39fefcu: goto label_39fefc;
        case 0x39ff00u: goto label_39ff00;
        case 0x39ff04u: goto label_39ff04;
        case 0x39ff08u: goto label_39ff08;
        case 0x39ff0cu: goto label_39ff0c;
        case 0x39ff10u: goto label_39ff10;
        case 0x39ff14u: goto label_39ff14;
        case 0x39ff18u: goto label_39ff18;
        case 0x39ff1cu: goto label_39ff1c;
        case 0x39ff20u: goto label_39ff20;
        case 0x39ff24u: goto label_39ff24;
        case 0x39ff28u: goto label_39ff28;
        case 0x39ff2cu: goto label_39ff2c;
        case 0x39ff30u: goto label_39ff30;
        case 0x39ff34u: goto label_39ff34;
        case 0x39ff38u: goto label_39ff38;
        case 0x39ff3cu: goto label_39ff3c;
        case 0x39ff40u: goto label_39ff40;
        case 0x39ff44u: goto label_39ff44;
        case 0x39ff48u: goto label_39ff48;
        case 0x39ff4cu: goto label_39ff4c;
        case 0x39ff50u: goto label_39ff50;
        case 0x39ff54u: goto label_39ff54;
        case 0x39ff58u: goto label_39ff58;
        case 0x39ff5cu: goto label_39ff5c;
        case 0x39ff60u: goto label_39ff60;
        case 0x39ff64u: goto label_39ff64;
        case 0x39ff68u: goto label_39ff68;
        case 0x39ff6cu: goto label_39ff6c;
        case 0x39ff70u: goto label_39ff70;
        case 0x39ff74u: goto label_39ff74;
        case 0x39ff78u: goto label_39ff78;
        case 0x39ff7cu: goto label_39ff7c;
        case 0x39ff80u: goto label_39ff80;
        case 0x39ff84u: goto label_39ff84;
        case 0x39ff88u: goto label_39ff88;
        case 0x39ff8cu: goto label_39ff8c;
        case 0x39ff90u: goto label_39ff90;
        case 0x39ff94u: goto label_39ff94;
        case 0x39ff98u: goto label_39ff98;
        case 0x39ff9cu: goto label_39ff9c;
        case 0x39ffa0u: goto label_39ffa0;
        case 0x39ffa4u: goto label_39ffa4;
        case 0x39ffa8u: goto label_39ffa8;
        case 0x39ffacu: goto label_39ffac;
        case 0x39ffb0u: goto label_39ffb0;
        case 0x39ffb4u: goto label_39ffb4;
        case 0x39ffb8u: goto label_39ffb8;
        case 0x39ffbcu: goto label_39ffbc;
        case 0x39ffc0u: goto label_39ffc0;
        case 0x39ffc4u: goto label_39ffc4;
        case 0x39ffc8u: goto label_39ffc8;
        case 0x39ffccu: goto label_39ffcc;
        case 0x39ffd0u: goto label_39ffd0;
        case 0x39ffd4u: goto label_39ffd4;
        case 0x39ffd8u: goto label_39ffd8;
        case 0x39ffdcu: goto label_39ffdc;
        case 0x39ffe0u: goto label_39ffe0;
        case 0x39ffe4u: goto label_39ffe4;
        case 0x39ffe8u: goto label_39ffe8;
        case 0x39ffecu: goto label_39ffec;
        case 0x39fff0u: goto label_39fff0;
        case 0x39fff4u: goto label_39fff4;
        case 0x39fff8u: goto label_39fff8;
        case 0x39fffcu: goto label_39fffc;
        case 0x3a0000u: goto label_3a0000;
        case 0x3a0004u: goto label_3a0004;
        case 0x3a0008u: goto label_3a0008;
        case 0x3a000cu: goto label_3a000c;
        case 0x3a0010u: goto label_3a0010;
        case 0x3a0014u: goto label_3a0014;
        case 0x3a0018u: goto label_3a0018;
        case 0x3a001cu: goto label_3a001c;
        case 0x3a0020u: goto label_3a0020;
        case 0x3a0024u: goto label_3a0024;
        case 0x3a0028u: goto label_3a0028;
        case 0x3a002cu: goto label_3a002c;
        case 0x3a0030u: goto label_3a0030;
        case 0x3a0034u: goto label_3a0034;
        case 0x3a0038u: goto label_3a0038;
        case 0x3a003cu: goto label_3a003c;
        case 0x3a0040u: goto label_3a0040;
        case 0x3a0044u: goto label_3a0044;
        case 0x3a0048u: goto label_3a0048;
        case 0x3a004cu: goto label_3a004c;
        case 0x3a0050u: goto label_3a0050;
        case 0x3a0054u: goto label_3a0054;
        case 0x3a0058u: goto label_3a0058;
        case 0x3a005cu: goto label_3a005c;
        case 0x3a0060u: goto label_3a0060;
        case 0x3a0064u: goto label_3a0064;
        case 0x3a0068u: goto label_3a0068;
        case 0x3a006cu: goto label_3a006c;
        case 0x3a0070u: goto label_3a0070;
        case 0x3a0074u: goto label_3a0074;
        case 0x3a0078u: goto label_3a0078;
        case 0x3a007cu: goto label_3a007c;
        case 0x3a0080u: goto label_3a0080;
        case 0x3a0084u: goto label_3a0084;
        case 0x3a0088u: goto label_3a0088;
        case 0x3a008cu: goto label_3a008c;
        case 0x3a0090u: goto label_3a0090;
        case 0x3a0094u: goto label_3a0094;
        case 0x3a0098u: goto label_3a0098;
        case 0x3a009cu: goto label_3a009c;
        case 0x3a00a0u: goto label_3a00a0;
        case 0x3a00a4u: goto label_3a00a4;
        case 0x3a00a8u: goto label_3a00a8;
        case 0x3a00acu: goto label_3a00ac;
        case 0x3a00b0u: goto label_3a00b0;
        case 0x3a00b4u: goto label_3a00b4;
        case 0x3a00b8u: goto label_3a00b8;
        case 0x3a00bcu: goto label_3a00bc;
        case 0x3a00c0u: goto label_3a00c0;
        case 0x3a00c4u: goto label_3a00c4;
        case 0x3a00c8u: goto label_3a00c8;
        case 0x3a00ccu: goto label_3a00cc;
        case 0x3a00d0u: goto label_3a00d0;
        case 0x3a00d4u: goto label_3a00d4;
        case 0x3a00d8u: goto label_3a00d8;
        case 0x3a00dcu: goto label_3a00dc;
        case 0x3a00e0u: goto label_3a00e0;
        case 0x3a00e4u: goto label_3a00e4;
        case 0x3a00e8u: goto label_3a00e8;
        case 0x3a00ecu: goto label_3a00ec;
        case 0x3a00f0u: goto label_3a00f0;
        case 0x3a00f4u: goto label_3a00f4;
        case 0x3a00f8u: goto label_3a00f8;
        case 0x3a00fcu: goto label_3a00fc;
        case 0x3a0100u: goto label_3a0100;
        case 0x3a0104u: goto label_3a0104;
        case 0x3a0108u: goto label_3a0108;
        case 0x3a010cu: goto label_3a010c;
        case 0x3a0110u: goto label_3a0110;
        case 0x3a0114u: goto label_3a0114;
        case 0x3a0118u: goto label_3a0118;
        case 0x3a011cu: goto label_3a011c;
        case 0x3a0120u: goto label_3a0120;
        case 0x3a0124u: goto label_3a0124;
        case 0x3a0128u: goto label_3a0128;
        case 0x3a012cu: goto label_3a012c;
        case 0x3a0130u: goto label_3a0130;
        case 0x3a0134u: goto label_3a0134;
        case 0x3a0138u: goto label_3a0138;
        case 0x3a013cu: goto label_3a013c;
        case 0x3a0140u: goto label_3a0140;
        case 0x3a0144u: goto label_3a0144;
        case 0x3a0148u: goto label_3a0148;
        case 0x3a014cu: goto label_3a014c;
        case 0x3a0150u: goto label_3a0150;
        case 0x3a0154u: goto label_3a0154;
        case 0x3a0158u: goto label_3a0158;
        case 0x3a015cu: goto label_3a015c;
        case 0x3a0160u: goto label_3a0160;
        case 0x3a0164u: goto label_3a0164;
        case 0x3a0168u: goto label_3a0168;
        case 0x3a016cu: goto label_3a016c;
        case 0x3a0170u: goto label_3a0170;
        case 0x3a0174u: goto label_3a0174;
        case 0x3a0178u: goto label_3a0178;
        case 0x3a017cu: goto label_3a017c;
        case 0x3a0180u: goto label_3a0180;
        case 0x3a0184u: goto label_3a0184;
        case 0x3a0188u: goto label_3a0188;
        case 0x3a018cu: goto label_3a018c;
        case 0x3a0190u: goto label_3a0190;
        case 0x3a0194u: goto label_3a0194;
        case 0x3a0198u: goto label_3a0198;
        case 0x3a019cu: goto label_3a019c;
        case 0x3a01a0u: goto label_3a01a0;
        case 0x3a01a4u: goto label_3a01a4;
        case 0x3a01a8u: goto label_3a01a8;
        case 0x3a01acu: goto label_3a01ac;
        case 0x3a01b0u: goto label_3a01b0;
        case 0x3a01b4u: goto label_3a01b4;
        case 0x3a01b8u: goto label_3a01b8;
        case 0x3a01bcu: goto label_3a01bc;
        case 0x3a01c0u: goto label_3a01c0;
        case 0x3a01c4u: goto label_3a01c4;
        case 0x3a01c8u: goto label_3a01c8;
        case 0x3a01ccu: goto label_3a01cc;
        case 0x3a01d0u: goto label_3a01d0;
        case 0x3a01d4u: goto label_3a01d4;
        case 0x3a01d8u: goto label_3a01d8;
        case 0x3a01dcu: goto label_3a01dc;
        case 0x3a01e0u: goto label_3a01e0;
        case 0x3a01e4u: goto label_3a01e4;
        case 0x3a01e8u: goto label_3a01e8;
        case 0x3a01ecu: goto label_3a01ec;
        case 0x3a01f0u: goto label_3a01f0;
        case 0x3a01f4u: goto label_3a01f4;
        case 0x3a01f8u: goto label_3a01f8;
        case 0x3a01fcu: goto label_3a01fc;
        case 0x3a0200u: goto label_3a0200;
        case 0x3a0204u: goto label_3a0204;
        case 0x3a0208u: goto label_3a0208;
        case 0x3a020cu: goto label_3a020c;
        case 0x3a0210u: goto label_3a0210;
        case 0x3a0214u: goto label_3a0214;
        case 0x3a0218u: goto label_3a0218;
        case 0x3a021cu: goto label_3a021c;
        case 0x3a0220u: goto label_3a0220;
        case 0x3a0224u: goto label_3a0224;
        case 0x3a0228u: goto label_3a0228;
        case 0x3a022cu: goto label_3a022c;
        case 0x3a0230u: goto label_3a0230;
        case 0x3a0234u: goto label_3a0234;
        case 0x3a0238u: goto label_3a0238;
        case 0x3a023cu: goto label_3a023c;
        case 0x3a0240u: goto label_3a0240;
        case 0x3a0244u: goto label_3a0244;
        case 0x3a0248u: goto label_3a0248;
        case 0x3a024cu: goto label_3a024c;
        case 0x3a0250u: goto label_3a0250;
        case 0x3a0254u: goto label_3a0254;
        case 0x3a0258u: goto label_3a0258;
        case 0x3a025cu: goto label_3a025c;
        case 0x3a0260u: goto label_3a0260;
        case 0x3a0264u: goto label_3a0264;
        case 0x3a0268u: goto label_3a0268;
        case 0x3a026cu: goto label_3a026c;
        case 0x3a0270u: goto label_3a0270;
        case 0x3a0274u: goto label_3a0274;
        case 0x3a0278u: goto label_3a0278;
        case 0x3a027cu: goto label_3a027c;
        case 0x3a0280u: goto label_3a0280;
        case 0x3a0284u: goto label_3a0284;
        case 0x3a0288u: goto label_3a0288;
        case 0x3a028cu: goto label_3a028c;
        case 0x3a0290u: goto label_3a0290;
        case 0x3a0294u: goto label_3a0294;
        case 0x3a0298u: goto label_3a0298;
        case 0x3a029cu: goto label_3a029c;
        case 0x3a02a0u: goto label_3a02a0;
        case 0x3a02a4u: goto label_3a02a4;
        case 0x3a02a8u: goto label_3a02a8;
        case 0x3a02acu: goto label_3a02ac;
        case 0x3a02b0u: goto label_3a02b0;
        case 0x3a02b4u: goto label_3a02b4;
        case 0x3a02b8u: goto label_3a02b8;
        case 0x3a02bcu: goto label_3a02bc;
        case 0x3a02c0u: goto label_3a02c0;
        case 0x3a02c4u: goto label_3a02c4;
        case 0x3a02c8u: goto label_3a02c8;
        case 0x3a02ccu: goto label_3a02cc;
        case 0x3a02d0u: goto label_3a02d0;
        case 0x3a02d4u: goto label_3a02d4;
        case 0x3a02d8u: goto label_3a02d8;
        case 0x3a02dcu: goto label_3a02dc;
        case 0x3a02e0u: goto label_3a02e0;
        case 0x3a02e4u: goto label_3a02e4;
        case 0x3a02e8u: goto label_3a02e8;
        case 0x3a02ecu: goto label_3a02ec;
        case 0x3a02f0u: goto label_3a02f0;
        case 0x3a02f4u: goto label_3a02f4;
        case 0x3a02f8u: goto label_3a02f8;
        case 0x3a02fcu: goto label_3a02fc;
        case 0x3a0300u: goto label_3a0300;
        case 0x3a0304u: goto label_3a0304;
        case 0x3a0308u: goto label_3a0308;
        case 0x3a030cu: goto label_3a030c;
        default: break;
    }

    ctx->pc = 0x39fea0u;

label_39fea0:
    // 0x39fea0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39fea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_39fea4:
    // 0x39fea4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x39fea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_39fea8:
    // 0x39fea8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39fea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_39feac:
    // 0x39feac: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x39feacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_39feb0:
    // 0x39feb0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39feb0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_39feb4:
    // 0x39feb4: 0x1220004c  beqz        $s1, . + 4 + (0x4C << 2)
label_39feb8:
    if (ctx->pc == 0x39FEB8u) {
        ctx->pc = 0x39FEB8u;
            // 0x39feb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39FEBCu;
        goto label_39febc;
    }
    ctx->pc = 0x39FEB4u;
    {
        const bool branch_taken_0x39feb4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x39FEB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39FEB4u;
            // 0x39feb8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39feb4) {
            ctx->pc = 0x39FFE8u;
            goto label_39ffe8;
        }
    }
    ctx->pc = 0x39FEBCu;
label_39febc:
    // 0x39febc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x39febcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_39fec0:
    // 0x39fec0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x39fec0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_39fec4:
    // 0x39fec4: 0x246386f0  addiu       $v1, $v1, -0x7910
    ctx->pc = 0x39fec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936304));
label_39fec8:
    // 0x39fec8: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x39fec8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
label_39fecc:
    // 0x39fecc: 0x24428728  addiu       $v0, $v0, -0x78D8
    ctx->pc = 0x39feccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936360));
label_39fed0:
    // 0x39fed0: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x39fed0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_39fed4:
    // 0x39fed4: 0xae220064  sw          $v0, 0x64($s1)
    ctx->pc = 0x39fed4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 2));
label_39fed8:
    // 0x39fed8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x39fed8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
label_39fedc:
    // 0x39fedc: 0xc0407c0  jal         func_101F00
label_39fee0:
    if (ctx->pc == 0x39FEE0u) {
        ctx->pc = 0x39FEE0u;
            // 0x39fee0: 0x24a50000  addiu       $a1, $a1, 0x0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
        ctx->pc = 0x39FEE4u;
        goto label_39fee4;
    }
    ctx->pc = 0x39FEDCu;
    SET_GPR_U32(ctx, 31, 0x39FEE4u);
    ctx->pc = 0x39FEE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39FEDCu;
            // 0x39fee0: 0x24a50000  addiu       $a1, $a1, 0x0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x101F00u;
    if (runtime->hasFunction(0x101F00u)) {
        auto targetFn = runtime->lookupFunction(0x101F00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FEE4u; }
        if (ctx->pc != 0x39FEE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00101F00_0x101f00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FEE4u; }
        if (ctx->pc != 0x39FEE4u) { return; }
    }
    ctx->pc = 0x39FEE4u;
label_39fee4:
    // 0x39fee4: 0x26220084  addiu       $v0, $s1, 0x84
    ctx->pc = 0x39fee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 132));
label_39fee8:
    // 0x39fee8: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_39feec:
    if (ctx->pc == 0x39FEECu) {
        ctx->pc = 0x39FEECu;
            // 0x39feec: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->pc = 0x39FEF0u;
        goto label_39fef0;
    }
    ctx->pc = 0x39FEE8u;
    {
        const bool branch_taken_0x39fee8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39fee8) {
            ctx->pc = 0x39FEECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39FEE8u;
            // 0x39feec: 0x26220078  addiu       $v0, $s1, 0x78 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39FEFCu;
            goto label_39fefc;
        }
    }
    ctx->pc = 0x39FEF0u;
label_39fef0:
    // 0x39fef0: 0xc07507c  jal         func_1D41F0
label_39fef4:
    if (ctx->pc == 0x39FEF4u) {
        ctx->pc = 0x39FEF4u;
            // 0x39fef4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->pc = 0x39FEF8u;
        goto label_39fef8;
    }
    ctx->pc = 0x39FEF0u;
    SET_GPR_U32(ctx, 31, 0x39FEF8u);
    ctx->pc = 0x39FEF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39FEF0u;
            // 0x39fef4: 0x8e240088  lw          $a0, 0x88($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 136)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D41F0u;
    if (runtime->hasFunction(0x1D41F0u)) {
        auto targetFn = runtime->lookupFunction(0x1D41F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FEF8u; }
        if (ctx->pc != 0x39FEF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D41F0_0x1d41f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FEF8u; }
        if (ctx->pc != 0x39FEF8u) { return; }
    }
    ctx->pc = 0x39FEF8u;
label_39fef8:
    // 0x39fef8: 0x26220078  addiu       $v0, $s1, 0x78
    ctx->pc = 0x39fef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 120));
label_39fefc:
    // 0x39fefc: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_39ff00:
    if (ctx->pc == 0x39FF00u) {
        ctx->pc = 0x39FF00u;
            // 0x39ff00: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->pc = 0x39FF04u;
        goto label_39ff04;
    }
    ctx->pc = 0x39FEFCu;
    {
        const bool branch_taken_0x39fefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39fefc) {
            ctx->pc = 0x39FF00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39FEFCu;
            // 0x39ff00: 0x2622006c  addiu       $v0, $s1, 0x6C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39FF2Cu;
            goto label_39ff2c;
        }
    }
    ctx->pc = 0x39FF04u;
label_39ff04:
    // 0x39ff04: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_39ff08:
    if (ctx->pc == 0x39FF08u) {
        ctx->pc = 0x39FF0Cu;
        goto label_39ff0c;
    }
    ctx->pc = 0x39FF04u;
    {
        const bool branch_taken_0x39ff04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ff04) {
            ctx->pc = 0x39FF28u;
            goto label_39ff28;
        }
    }
    ctx->pc = 0x39FF0Cu;
label_39ff0c:
    // 0x39ff0c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_39ff10:
    if (ctx->pc == 0x39FF10u) {
        ctx->pc = 0x39FF14u;
        goto label_39ff14;
    }
    ctx->pc = 0x39FF0Cu;
    {
        const bool branch_taken_0x39ff0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ff0c) {
            ctx->pc = 0x39FF28u;
            goto label_39ff28;
        }
    }
    ctx->pc = 0x39FF14u;
label_39ff14:
    // 0x39ff14: 0x8e240080  lw          $a0, 0x80($s1)
    ctx->pc = 0x39ff14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 128)));
label_39ff18:
    // 0x39ff18: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_39ff1c:
    if (ctx->pc == 0x39FF1Cu) {
        ctx->pc = 0x39FF20u;
        goto label_39ff20;
    }
    ctx->pc = 0x39FF18u;
    {
        const bool branch_taken_0x39ff18 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ff18) {
            ctx->pc = 0x39FF28u;
            goto label_39ff28;
        }
    }
    ctx->pc = 0x39FF20u;
label_39ff20:
    // 0x39ff20: 0xc0400a8  jal         func_1002A0
label_39ff24:
    if (ctx->pc == 0x39FF24u) {
        ctx->pc = 0x39FF28u;
        goto label_39ff28;
    }
    ctx->pc = 0x39FF20u;
    SET_GPR_U32(ctx, 31, 0x39FF28u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FF28u; }
        if (ctx->pc != 0x39FF28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FF28u; }
        if (ctx->pc != 0x39FF28u) { return; }
    }
    ctx->pc = 0x39FF28u;
label_39ff28:
    // 0x39ff28: 0x2622006c  addiu       $v0, $s1, 0x6C
    ctx->pc = 0x39ff28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
label_39ff2c:
    // 0x39ff2c: 0x5040000b  beql        $v0, $zero, . + 4 + (0xB << 2)
label_39ff30:
    if (ctx->pc == 0x39FF30u) {
        ctx->pc = 0x39FF30u;
            // 0x39ff30: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->pc = 0x39FF34u;
        goto label_39ff34;
    }
    ctx->pc = 0x39FF2Cu;
    {
        const bool branch_taken_0x39ff2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ff2c) {
            ctx->pc = 0x39FF30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39FF2Cu;
            // 0x39ff30: 0x26220064  addiu       $v0, $s1, 0x64 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39FF5Cu;
            goto label_39ff5c;
        }
    }
    ctx->pc = 0x39FF34u;
label_39ff34:
    // 0x39ff34: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_39ff38:
    if (ctx->pc == 0x39FF38u) {
        ctx->pc = 0x39FF3Cu;
        goto label_39ff3c;
    }
    ctx->pc = 0x39FF34u;
    {
        const bool branch_taken_0x39ff34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ff34) {
            ctx->pc = 0x39FF58u;
            goto label_39ff58;
        }
    }
    ctx->pc = 0x39FF3Cu;
label_39ff3c:
    // 0x39ff3c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_39ff40:
    if (ctx->pc == 0x39FF40u) {
        ctx->pc = 0x39FF44u;
        goto label_39ff44;
    }
    ctx->pc = 0x39FF3Cu;
    {
        const bool branch_taken_0x39ff3c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ff3c) {
            ctx->pc = 0x39FF58u;
            goto label_39ff58;
        }
    }
    ctx->pc = 0x39FF44u;
label_39ff44:
    // 0x39ff44: 0x8e240074  lw          $a0, 0x74($s1)
    ctx->pc = 0x39ff44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 116)));
label_39ff48:
    // 0x39ff48: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
label_39ff4c:
    if (ctx->pc == 0x39FF4Cu) {
        ctx->pc = 0x39FF50u;
        goto label_39ff50;
    }
    ctx->pc = 0x39FF48u;
    {
        const bool branch_taken_0x39ff48 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ff48) {
            ctx->pc = 0x39FF58u;
            goto label_39ff58;
        }
    }
    ctx->pc = 0x39FF50u;
label_39ff50:
    // 0x39ff50: 0xc0400a8  jal         func_1002A0
label_39ff54:
    if (ctx->pc == 0x39FF54u) {
        ctx->pc = 0x39FF58u;
        goto label_39ff58;
    }
    ctx->pc = 0x39FF50u;
    SET_GPR_U32(ctx, 31, 0x39FF58u);
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FF58u; }
        if (ctx->pc != 0x39FF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FF58u; }
        if (ctx->pc != 0x39FF58u) { return; }
    }
    ctx->pc = 0x39FF58u;
label_39ff58:
    // 0x39ff58: 0x26220064  addiu       $v0, $s1, 0x64
    ctx->pc = 0x39ff58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 100));
label_39ff5c:
    // 0x39ff5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_39ff60:
    if (ctx->pc == 0x39FF60u) {
        ctx->pc = 0x39FF64u;
        goto label_39ff64;
    }
    ctx->pc = 0x39FF5Cu;
    {
        const bool branch_taken_0x39ff5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ff5c) {
            ctx->pc = 0x39FF78u;
            goto label_39ff78;
        }
    }
    ctx->pc = 0x39FF64u;
label_39ff64:
    // 0x39ff64: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x39ff64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
label_39ff68:
    // 0x39ff68: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x39ff68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_39ff6c:
    // 0x39ff6c: 0x246386d8  addiu       $v1, $v1, -0x7928
    ctx->pc = 0x39ff6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294936280));
label_39ff70:
    // 0x39ff70: 0xae230064  sw          $v1, 0x64($s1)
    ctx->pc = 0x39ff70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 100), GPR_U32(ctx, 3));
label_39ff74:
    // 0x39ff74: 0xac406498  sw          $zero, 0x6498($v0)
    ctx->pc = 0x39ff74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 25752), GPR_U32(ctx, 0));
label_39ff78:
    // 0x39ff78: 0x52200016  beql        $s1, $zero, . + 4 + (0x16 << 2)
label_39ff7c:
    if (ctx->pc == 0x39FF7Cu) {
        ctx->pc = 0x39FF7Cu;
            // 0x39ff7c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x39FF80u;
        goto label_39ff80;
    }
    ctx->pc = 0x39FF78u;
    {
        const bool branch_taken_0x39ff78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ff78) {
            ctx->pc = 0x39FF7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39FF78u;
            // 0x39ff7c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39FFD4u;
            goto label_39ffd4;
        }
    }
    ctx->pc = 0x39FF80u;
label_39ff80:
    // 0x39ff80: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x39ff80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_39ff84:
    // 0x39ff84: 0x244228a0  addiu       $v0, $v0, 0x28A0
    ctx->pc = 0x39ff84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10400));
label_39ff88:
    // 0x39ff88: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x39ff88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_39ff8c:
    // 0x39ff8c: 0x8e24005c  lw          $a0, 0x5C($s1)
    ctx->pc = 0x39ff8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 92)));
label_39ff90:
    // 0x39ff90: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_39ff94:
    if (ctx->pc == 0x39FF94u) {
        ctx->pc = 0x39FF94u;
            // 0x39ff94: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->pc = 0x39FF98u;
        goto label_39ff98;
    }
    ctx->pc = 0x39FF90u;
    {
        const bool branch_taken_0x39ff90 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ff90) {
            ctx->pc = 0x39FF94u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39FF90u;
            // 0x39ff94: 0x8e240060  lw          $a0, 0x60($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39FFACu;
            goto label_39ffac;
        }
    }
    ctx->pc = 0x39FF98u;
label_39ff98:
    // 0x39ff98: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x39ff98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39ff9c:
    // 0x39ff9c: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x39ff9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_39ffa0:
    // 0x39ffa0: 0x320f809  jalr        $t9
label_39ffa4:
    if (ctx->pc == 0x39FFA4u) {
        ctx->pc = 0x39FFA4u;
            // 0x39ffa4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x39FFA8u;
        goto label_39ffa8;
    }
    ctx->pc = 0x39FFA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39FFA8u);
        ctx->pc = 0x39FFA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39FFA0u;
            // 0x39ffa4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39FFA8u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39FFA8u; }
            if (ctx->pc != 0x39FFA8u) { return; }
        }
        }
    }
    ctx->pc = 0x39FFA8u;
label_39ffa8:
    // 0x39ffa8: 0x8e240060  lw          $a0, 0x60($s1)
    ctx->pc = 0x39ffa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 96)));
label_39ffac:
    // 0x39ffac: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_39ffb0:
    if (ctx->pc == 0x39FFB0u) {
        ctx->pc = 0x39FFB0u;
            // 0x39ffb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39FFB4u;
        goto label_39ffb4;
    }
    ctx->pc = 0x39FFACu;
    {
        const bool branch_taken_0x39ffac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39ffac) {
            ctx->pc = 0x39FFB0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39FFACu;
            // 0x39ffb0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39FFC8u;
            goto label_39ffc8;
        }
    }
    ctx->pc = 0x39FFB4u;
label_39ffb4:
    // 0x39ffb4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x39ffb4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_39ffb8:
    // 0x39ffb8: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x39ffb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_39ffbc:
    // 0x39ffbc: 0x320f809  jalr        $t9
label_39ffc0:
    if (ctx->pc == 0x39FFC0u) {
        ctx->pc = 0x39FFC0u;
            // 0x39ffc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x39FFC4u;
        goto label_39ffc4;
    }
    ctx->pc = 0x39FFBCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x39FFC4u);
        ctx->pc = 0x39FFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39FFBCu;
            // 0x39ffc0: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x39FFC4u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x39FFC4u; }
            if (ctx->pc != 0x39FFC4u) { return; }
        }
        }
    }
    ctx->pc = 0x39FFC4u;
label_39ffc4:
    // 0x39ffc4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x39ffc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39ffc8:
    // 0x39ffc8: 0xc075bf8  jal         func_1D6FE0
label_39ffcc:
    if (ctx->pc == 0x39FFCCu) {
        ctx->pc = 0x39FFCCu;
            // 0x39ffcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39FFD0u;
        goto label_39ffd0;
    }
    ctx->pc = 0x39FFC8u;
    SET_GPR_U32(ctx, 31, 0x39FFD0u);
    ctx->pc = 0x39FFCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39FFC8u;
            // 0x39ffcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FFD0u; }
        if (ctx->pc != 0x39FFD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FFD0u; }
        if (ctx->pc != 0x39FFD0u) { return; }
    }
    ctx->pc = 0x39FFD0u;
label_39ffd0:
    // 0x39ffd0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x39ffd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_39ffd4:
    // 0x39ffd4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x39ffd4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_39ffd8:
    // 0x39ffd8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_39ffdc:
    if (ctx->pc == 0x39FFDCu) {
        ctx->pc = 0x39FFDCu;
            // 0x39ffdc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39FFE0u;
        goto label_39ffe0;
    }
    ctx->pc = 0x39FFD8u;
    {
        const bool branch_taken_0x39ffd8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x39ffd8) {
            ctx->pc = 0x39FFDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x39FFD8u;
            // 0x39ffdc: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x39FFECu;
            goto label_39ffec;
        }
    }
    ctx->pc = 0x39FFE0u;
label_39ffe0:
    // 0x39ffe0: 0xc0400a8  jal         func_1002A0
label_39ffe4:
    if (ctx->pc == 0x39FFE4u) {
        ctx->pc = 0x39FFE4u;
            // 0x39ffe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x39FFE8u;
        goto label_39ffe8;
    }
    ctx->pc = 0x39FFE0u;
    SET_GPR_U32(ctx, 31, 0x39FFE8u);
    ctx->pc = 0x39FFE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x39FFE0u;
            // 0x39ffe4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FFE8u; }
        if (ctx->pc != 0x39FFE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x39FFE8u; }
        if (ctx->pc != 0x39FFE8u) { return; }
    }
    ctx->pc = 0x39FFE8u;
label_39ffe8:
    // 0x39ffe8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x39ffe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_39ffec:
    // 0x39ffec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x39ffecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_39fff0:
    // 0x39fff0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39fff0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_39fff4:
    // 0x39fff4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x39fff4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_39fff8:
    // 0x39fff8: 0x3e00008  jr          $ra
label_39fffc:
    if (ctx->pc == 0x39FFFCu) {
        ctx->pc = 0x39FFFCu;
            // 0x39fffc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3A0000u;
        goto label_3a0000;
    }
    ctx->pc = 0x39FFF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39FFFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x39FFF8u;
            // 0x39fffc: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A0000u;
label_3a0000:
    // 0x3a0000: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3a0000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_3a0004:
    // 0x3a0004: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3a0004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_3a0008:
    // 0x3a0008: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3a0008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3a000c:
    // 0x3a000c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3a000cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3a0010:
    // 0x3a0010: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x3a0010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3a0014:
    // 0x3a0014: 0x12200017  beqz        $s1, . + 4 + (0x17 << 2)
label_3a0018:
    if (ctx->pc == 0x3A0018u) {
        ctx->pc = 0x3A0018u;
            // 0x3a0018: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A001Cu;
        goto label_3a001c;
    }
    ctx->pc = 0x3A0014u;
    {
        const bool branch_taken_0x3a0014 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0018u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0014u;
            // 0x3a0018: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0014) {
            ctx->pc = 0x3A0074u;
            goto label_3a0074;
        }
    }
    ctx->pc = 0x3A001Cu;
label_3a001c:
    // 0x3a001c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x3a001cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
label_3a0020:
    // 0x3a0020: 0x24428790  addiu       $v0, $v0, -0x7870
    ctx->pc = 0x3a0020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294936464));
label_3a0024:
    // 0x3a0024: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3a0024u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3a0028:
    // 0x3a0028: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a0028u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a002c:
    // 0x3a002c: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x3a002cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_3a0030:
    // 0x3a0030: 0x320f809  jalr        $t9
label_3a0034:
    if (ctx->pc == 0x3A0034u) {
        ctx->pc = 0x3A0038u;
        goto label_3a0038;
    }
    ctx->pc = 0x3A0030u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A0038u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A0038u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A0038u; }
            if (ctx->pc != 0x3A0038u) { return; }
        }
        }
    }
    ctx->pc = 0x3A0038u;
label_3a0038:
    // 0x3a0038: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
label_3a003c:
    if (ctx->pc == 0x3A003Cu) {
        ctx->pc = 0x3A003Cu;
            // 0x3a003c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->pc = 0x3A0040u;
        goto label_3a0040;
    }
    ctx->pc = 0x3A0038u;
    {
        const bool branch_taken_0x3a0038 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0038) {
            ctx->pc = 0x3A003Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0038u;
            // 0x3a003c: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A0060u;
            goto label_3a0060;
        }
    }
    ctx->pc = 0x3A0040u;
label_3a0040:
    // 0x3a0040: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3a0040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3a0044:
    // 0x3a0044: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x3a0044u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
label_3a0048:
    // 0x3a0048: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
label_3a004c:
    if (ctx->pc == 0x3A004Cu) {
        ctx->pc = 0x3A004Cu;
            // 0x3a004c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x3A0050u;
        goto label_3a0050;
    }
    ctx->pc = 0x3A0048u;
    {
        const bool branch_taken_0x3a0048 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A004Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0048u;
            // 0x3a004c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0048) {
            ctx->pc = 0x3A005Cu;
            goto label_3a005c;
        }
    }
    ctx->pc = 0x3A0050u;
label_3a0050:
    // 0x3a0050: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x3a0050u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_3a0054:
    // 0x3a0054: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x3a0054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
label_3a0058:
    // 0x3a0058: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x3a0058u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_3a005c:
    // 0x3a005c: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x3a005cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_3a0060:
    // 0x3a0060: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x3a0060u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_3a0064:
    // 0x3a0064: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_3a0068:
    if (ctx->pc == 0x3A0068u) {
        ctx->pc = 0x3A0068u;
            // 0x3a0068: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A006Cu;
        goto label_3a006c;
    }
    ctx->pc = 0x3A0064u;
    {
        const bool branch_taken_0x3a0064 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3a0064) {
            ctx->pc = 0x3A0068u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0064u;
            // 0x3a0068: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3A0078u;
            goto label_3a0078;
        }
    }
    ctx->pc = 0x3A006Cu;
label_3a006c:
    // 0x3a006c: 0xc0400a8  jal         func_1002A0
label_3a0070:
    if (ctx->pc == 0x3A0070u) {
        ctx->pc = 0x3A0070u;
            // 0x3a0070: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A0074u;
        goto label_3a0074;
    }
    ctx->pc = 0x3A006Cu;
    SET_GPR_U32(ctx, 31, 0x3A0074u);
    ctx->pc = 0x3A0070u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A006Cu;
            // 0x3a0070: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0074u; }
        if (ctx->pc != 0x3A0074u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0074u; }
        if (ctx->pc != 0x3A0074u) { return; }
    }
    ctx->pc = 0x3A0074u;
label_3a0074:
    // 0x3a0074: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3a0074u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3a0078:
    // 0x3a0078: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3a0078u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_3a007c:
    // 0x3a007c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3a007cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a0080:
    // 0x3a0080: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3a0080u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3a0084:
    // 0x3a0084: 0x3e00008  jr          $ra
label_3a0088:
    if (ctx->pc == 0x3A0088u) {
        ctx->pc = 0x3A0088u;
            // 0x3a0088: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x3A008Cu;
        goto label_3a008c;
    }
    ctx->pc = 0x3A0084u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0088u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0084u;
            // 0x3a0088: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A008Cu;
label_3a008c:
    // 0x3a008c: 0x0  nop
    ctx->pc = 0x3a008cu;
    // NOP
label_3a0090:
    // 0x3a0090: 0x27bdfef0  addiu       $sp, $sp, -0x110
    ctx->pc = 0x3a0090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967024));
label_3a0094:
    // 0x3a0094: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3a0094u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3a0098:
    // 0x3a0098: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x3a0098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
label_3a009c:
    // 0x3a009c: 0x7fbe0090  sq          $fp, 0x90($sp)
    ctx->pc = 0x3a009cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 30));
label_3a00a0:
    // 0x3a00a0: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x3a00a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_3a00a4:
    // 0x3a00a4: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x3a00a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
label_3a00a8:
    // 0x3a00a8: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3a00a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3a00ac:
    // 0x3a00ac: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3a00acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_3a00b0:
    // 0x3a00b0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3a00b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
label_3a00b4:
    // 0x3a00b4: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3a00b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_3a00b8:
    // 0x3a00b8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3a00b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_3a00bc:
    // 0x3a00bc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3a00bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3a00c0:
    // 0x3a00c0: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3a00c0u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
label_3a00c4:
    // 0x3a00c4: 0x90850010  lbu         $a1, 0x10($a0)
    ctx->pc = 0x3a00c4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 16)));
label_3a00c8:
    // 0x3a00c8: 0x10a30013  beq         $a1, $v1, . + 4 + (0x13 << 2)
label_3a00cc:
    if (ctx->pc == 0x3A00CCu) {
        ctx->pc = 0x3A00CCu;
            // 0x3a00cc: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A00D0u;
        goto label_3a00d0;
    }
    ctx->pc = 0x3A00C8u;
    {
        const bool branch_taken_0x3a00c8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        ctx->pc = 0x3A00CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A00C8u;
            // 0x3a00cc: 0x80f02d  daddu       $fp, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a00c8) {
            ctx->pc = 0x3A0118u;
            goto label_3a0118;
        }
    }
    ctx->pc = 0x3A00D0u;
label_3a00d0:
    // 0x3a00d0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3a00d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_3a00d4:
    // 0x3a00d4: 0x10a30080  beq         $a1, $v1, . + 4 + (0x80 << 2)
label_3a00d8:
    if (ctx->pc == 0x3A00D8u) {
        ctx->pc = 0x3A00DCu;
        goto label_3a00dc;
    }
    ctx->pc = 0x3A00D4u;
    {
        const bool branch_taken_0x3a00d4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a00d4) {
            ctx->pc = 0x3A02D8u;
            goto label_3a02d8;
        }
    }
    ctx->pc = 0x3A00DCu;
label_3a00dc:
    // 0x3a00dc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3a00dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_3a00e0:
    // 0x3a00e0: 0x10a30003  beq         $a1, $v1, . + 4 + (0x3 << 2)
label_3a00e4:
    if (ctx->pc == 0x3A00E4u) {
        ctx->pc = 0x3A00E8u;
        goto label_3a00e8;
    }
    ctx->pc = 0x3A00E0u;
    {
        const bool branch_taken_0x3a00e0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x3a00e0) {
            ctx->pc = 0x3A00F0u;
            goto label_3a00f0;
        }
    }
    ctx->pc = 0x3A00E8u;
label_3a00e8:
    // 0x3a00e8: 0x1000007b  b           . + 4 + (0x7B << 2)
label_3a00ec:
    if (ctx->pc == 0x3A00ECu) {
        ctx->pc = 0x3A00F0u;
        goto label_3a00f0;
    }
    ctx->pc = 0x3A00E8u;
    {
        const bool branch_taken_0x3a00e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a00e8) {
            ctx->pc = 0x3A02D8u;
            goto label_3a02d8;
        }
    }
    ctx->pc = 0x3A00F0u;
label_3a00f0:
    // 0x3a00f0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3a00f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3a00f4:
    // 0x3a00f4: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3a00f4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3a00f8:
    // 0x3a00f8: 0x8c420e80  lw          $v0, 0xE80($v0)
    ctx->pc = 0x3a00f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
label_3a00fc:
    // 0x3a00fc: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x3a00fcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_3a0100:
    // 0x3a0100: 0x8c420cb4  lw          $v0, 0xCB4($v0)
    ctx->pc = 0x3a0100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3252)));
label_3a0104:
    // 0x3a0104: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3a0104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_3a0108:
    // 0x3a0108: 0x320f809  jalr        $t9
label_3a010c:
    if (ctx->pc == 0x3A010Cu) {
        ctx->pc = 0x3A010Cu;
            // 0x3a010c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->pc = 0x3A0110u;
        goto label_3a0110;
    }
    ctx->pc = 0x3A0108u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A0110u);
        ctx->pc = 0x3A010Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0108u;
            // 0x3a010c: 0x2282b  sltu        $a1, $zero, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A0110u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A0110u; }
            if (ctx->pc != 0x3A0110u) { return; }
        }
        }
    }
    ctx->pc = 0x3A0110u;
label_3a0110:
    // 0x3a0110: 0x10000071  b           . + 4 + (0x71 << 2)
label_3a0114:
    if (ctx->pc == 0x3A0114u) {
        ctx->pc = 0x3A0118u;
        goto label_3a0118;
    }
    ctx->pc = 0x3A0110u;
    {
        const bool branch_taken_0x3a0110 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0110) {
            ctx->pc = 0x3A02D8u;
            goto label_3a02d8;
        }
    }
    ctx->pc = 0x3A0118u;
label_3a0118:
    // 0x3a0118: 0x8fc30070  lw          $v1, 0x70($fp)
    ctx->pc = 0x3a0118u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 112)));
label_3a011c:
    // 0x3a011c: 0x1060006e  beqz        $v1, . + 4 + (0x6E << 2)
label_3a0120:
    if (ctx->pc == 0x3A0120u) {
        ctx->pc = 0x3A0120u;
            // 0x3a0120: 0x7fa300b0  sq          $v1, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
        ctx->pc = 0x3A0124u;
        goto label_3a0124;
    }
    ctx->pc = 0x3A011Cu;
    {
        const bool branch_taken_0x3a011c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A0120u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A011Cu;
            // 0x3a0120: 0x7fa300b0  sq          $v1, 0xB0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a011c) {
            ctx->pc = 0x3A02D8u;
            goto label_3a02d8;
        }
    }
    ctx->pc = 0x3A0124u;
label_3a0124:
    // 0x3a0124: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3a0124u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
label_3a0128:
    // 0x3a0128: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3a0128u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_3a012c:
    // 0x3a012c: 0x8c44d130  lw          $a0, -0x2ED0($v0)
    ctx->pc = 0x3a012cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955312)));
label_3a0130:
    // 0x3a0130: 0x27d00084  addiu       $s0, $fp, 0x84
    ctx->pc = 0x3a0130u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 30), 132));
label_3a0134:
    // 0x3a0134: 0x8c75e378  lw          $s5, -0x1C88($v1)
    ctx->pc = 0x3a0134u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
label_3a0138:
    // 0x3a0138: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3a0138u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_3a013c:
    // 0x3a013c: 0x8c850130  lw          $a1, 0x130($a0)
    ctx->pc = 0x3a013cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
label_3a0140:
    // 0x3a0140: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3a0140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
label_3a0144:
    // 0x3a0144: 0x8c54e370  lw          $s4, -0x1C90($v0)
    ctx->pc = 0x3a0144u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294959984)));
label_3a0148:
    // 0x3a0148: 0x8c63d120  lw          $v1, -0x2EE0($v1)
    ctx->pc = 0x3a0148u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
label_3a014c:
    // 0x3a014c: 0x8fc40088  lw          $a0, 0x88($fp)
    ctx->pc = 0x3a014cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 136)));
label_3a0150:
    // 0x3a0150: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3a0150u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
label_3a0154:
    // 0x3a0154: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3a0154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3a0158:
    // 0x3a0158: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3a0158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3a015c:
    // 0x3a015c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3a015cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a0160:
    // 0x3a0160: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3a0160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
label_3a0164:
    // 0x3a0164: 0xc04e738  jal         func_139CE0
label_3a0168:
    if (ctx->pc == 0x3A0168u) {
        ctx->pc = 0x3A0168u;
            // 0x3a0168: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->pc = 0x3A016Cu;
        goto label_3a016c;
    }
    ctx->pc = 0x3A0164u;
    SET_GPR_U32(ctx, 31, 0x3A016Cu);
    ctx->pc = 0x3A0168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0164u;
            // 0x3a0168: 0xafa200c0  sw          $v0, 0xC0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139CE0u;
    if (runtime->hasFunction(0x139CE0u)) {
        auto targetFn = runtime->lookupFunction(0x139CE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A016Cu; }
        if (ctx->pc != 0x3A016Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139CE0_0x139ce0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A016Cu; }
        if (ctx->pc != 0x3A016Cu) { return; }
    }
    ctx->pc = 0x3A016Cu;
label_3a016c:
    // 0x3a016c: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x3a016cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
label_3a0170:
    // 0x3a0170: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x3a0170u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a0174:
    // 0x3a0174: 0xc45473f0  lwc1        $f20, 0x73F0($v0)
    ctx->pc = 0x3a0174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 29680)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3a0178:
    // 0x3a0178: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x3a0178u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a017c:
    // 0x3a017c: 0x8fc20074  lw          $v0, 0x74($fp)
    ctx->pc = 0x3a017cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 116)));
label_3a0180:
    // 0x3a0180: 0x561021  addu        $v0, $v0, $s6
    ctx->pc = 0x3a0180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
label_3a0184:
    // 0x3a0184: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x3a0184u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3a0188:
    // 0x3a0188: 0xc0e80d4  jal         func_3A0350
label_3a018c:
    if (ctx->pc == 0x3A018Cu) {
        ctx->pc = 0x3A018Cu;
            // 0x3a018c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A0190u;
        goto label_3a0190;
    }
    ctx->pc = 0x3A0188u;
    SET_GPR_U32(ctx, 31, 0x3A0190u);
    ctx->pc = 0x3A018Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0188u;
            // 0x3a018c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A0350u;
    if (runtime->hasFunction(0x3A0350u)) {
        auto targetFn = runtime->lookupFunction(0x3A0350u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0190u; }
        if (ctx->pc != 0x3A0190u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A0350_0x3a0350(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0190u; }
        if (ctx->pc != 0x3A0190u) { return; }
    }
    ctx->pc = 0x3A0190u;
label_3a0190:
    // 0x3a0190: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_3a0194:
    if (ctx->pc == 0x3A0194u) {
        ctx->pc = 0x3A0198u;
        goto label_3a0198;
    }
    ctx->pc = 0x3A0190u;
    {
        const bool branch_taken_0x3a0190 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0190) {
            ctx->pc = 0x3A02C0u;
            goto label_3a02c0;
        }
    }
    ctx->pc = 0x3A0198u;
label_3a0198:
    // 0x3a0198: 0xc0d1c14  jal         func_347050
label_3a019c:
    if (ctx->pc == 0x3A019Cu) {
        ctx->pc = 0x3A019Cu;
            // 0x3a019c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A01A0u;
        goto label_3a01a0;
    }
    ctx->pc = 0x3A0198u;
    SET_GPR_U32(ctx, 31, 0x3A01A0u);
    ctx->pc = 0x3A019Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0198u;
            // 0x3a019c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347050u;
    if (runtime->hasFunction(0x347050u)) {
        auto targetFn = runtime->lookupFunction(0x347050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A01A0u; }
        if (ctx->pc != 0x3A01A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347050_0x347050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A01A0u; }
        if (ctx->pc != 0x3A01A0u) { return; }
    }
    ctx->pc = 0x3A01A0u;
label_3a01a0:
    // 0x3a01a0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a01a0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a01a4:
    // 0x3a01a4: 0xc04f278  jal         func_13C9E0
label_3a01a8:
    if (ctx->pc == 0x3A01A8u) {
        ctx->pc = 0x3A01A8u;
            // 0x3a01a8: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3A01ACu;
        goto label_3a01ac;
    }
    ctx->pc = 0x3A01A4u;
    SET_GPR_U32(ctx, 31, 0x3A01ACu);
    ctx->pc = 0x3A01A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A01A4u;
            // 0x3a01a8: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9E0u;
    if (runtime->hasFunction(0x13C9E0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A01ACu; }
        if (ctx->pc != 0x3A01ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9E0_0x13c9e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A01ACu; }
        if (ctx->pc != 0x3A01ACu) { return; }
    }
    ctx->pc = 0x3A01ACu;
label_3a01ac:
    // 0x3a01ac: 0xc0d1c10  jal         func_347040
label_3a01b0:
    if (ctx->pc == 0x3A01B0u) {
        ctx->pc = 0x3A01B0u;
            // 0x3a01b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A01B4u;
        goto label_3a01b4;
    }
    ctx->pc = 0x3A01ACu;
    SET_GPR_U32(ctx, 31, 0x3A01B4u);
    ctx->pc = 0x3A01B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A01ACu;
            // 0x3a01b0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x347040u;
    if (runtime->hasFunction(0x347040u)) {
        auto targetFn = runtime->lookupFunction(0x347040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A01B4u; }
        if (ctx->pc != 0x3A01B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00347040_0x347040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A01B4u; }
        if (ctx->pc != 0x3A01B4u) { return; }
    }
    ctx->pc = 0x3A01B4u;
label_3a01b4:
    // 0x3a01b4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3a01b4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a01b8:
    // 0x3a01b8: 0xc04ce80  jal         func_133A00
label_3a01bc:
    if (ctx->pc == 0x3A01BCu) {
        ctx->pc = 0x3A01BCu;
            // 0x3a01bc: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->pc = 0x3A01C0u;
        goto label_3a01c0;
    }
    ctx->pc = 0x3A01B8u;
    SET_GPR_U32(ctx, 31, 0x3A01C0u);
    ctx->pc = 0x3A01BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A01B8u;
            // 0x3a01bc: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A01C0u; }
        if (ctx->pc != 0x3A01C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A01C0u; }
        if (ctx->pc != 0x3A01C0u) { return; }
    }
    ctx->pc = 0x3A01C0u;
label_3a01c0:
    // 0x3a01c0: 0xc0d4108  jal         func_350420
label_3a01c4:
    if (ctx->pc == 0x3A01C4u) {
        ctx->pc = 0x3A01C8u;
        goto label_3a01c8;
    }
    ctx->pc = 0x3A01C0u;
    SET_GPR_U32(ctx, 31, 0x3A01C8u);
    ctx->pc = 0x350420u;
    if (runtime->hasFunction(0x350420u)) {
        auto targetFn = runtime->lookupFunction(0x350420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A01C8u; }
        if (ctx->pc != 0x3A01C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350420_0x350420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A01C8u; }
        if (ctx->pc != 0x3A01C8u) { return; }
    }
    ctx->pc = 0x3A01C8u;
label_3a01c8:
    // 0x3a01c8: 0xc0b36b4  jal         func_2CDAD0
label_3a01cc:
    if (ctx->pc == 0x3A01CCu) {
        ctx->pc = 0x3A01CCu;
            // 0x3a01cc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A01D0u;
        goto label_3a01d0;
    }
    ctx->pc = 0x3A01C8u;
    SET_GPR_U32(ctx, 31, 0x3A01D0u);
    ctx->pc = 0x3A01CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A01C8u;
            // 0x3a01cc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2CDAD0u;
    if (runtime->hasFunction(0x2CDAD0u)) {
        auto targetFn = runtime->lookupFunction(0x2CDAD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A01D0u; }
        if (ctx->pc != 0x3A01D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002CDAD0_0x2cdad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A01D0u; }
        if (ctx->pc != 0x3A01D0u) { return; }
    }
    ctx->pc = 0x3A01D0u;
label_3a01d0:
    // 0x3a01d0: 0xc0b9c64  jal         func_2E7190
label_3a01d4:
    if (ctx->pc == 0x3A01D4u) {
        ctx->pc = 0x3A01D4u;
            // 0x3a01d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A01D8u;
        goto label_3a01d8;
    }
    ctx->pc = 0x3A01D0u;
    SET_GPR_U32(ctx, 31, 0x3A01D8u);
    ctx->pc = 0x3A01D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A01D0u;
            // 0x3a01d4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2E7190u;
    if (runtime->hasFunction(0x2E7190u)) {
        auto targetFn = runtime->lookupFunction(0x2E7190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A01D8u; }
        if (ctx->pc != 0x3A01D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E7190_0x2e7190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A01D8u; }
        if (ctx->pc != 0x3A01D8u) { return; }
    }
    ctx->pc = 0x3A01D8u;
label_3a01d8:
    // 0x3a01d8: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x3a01d8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a01dc:
    // 0x3a01dc: 0xc0d4104  jal         func_350410
label_3a01e0:
    if (ctx->pc == 0x3A01E0u) {
        ctx->pc = 0x3A01E0u;
            // 0x3a01e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A01E4u;
        goto label_3a01e4;
    }
    ctx->pc = 0x3A01DCu;
    SET_GPR_U32(ctx, 31, 0x3A01E4u);
    ctx->pc = 0x3A01E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A01DCu;
            // 0x3a01e0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x350410u;
    if (runtime->hasFunction(0x350410u)) {
        auto targetFn = runtime->lookupFunction(0x350410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A01E4u; }
        if (ctx->pc != 0x3A01E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00350410_0x350410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A01E4u; }
        if (ctx->pc != 0x3A01E4u) { return; }
    }
    ctx->pc = 0x3A01E4u;
label_3a01e4:
    // 0x3a01e4: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x3a01e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a01e8:
    // 0x3a01e8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a01e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a01ec:
    // 0x3a01ec: 0x2e0282d  daddu       $a1, $s7, $zero
    ctx->pc = 0x3a01ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
label_3a01f0:
    // 0x3a01f0: 0x27a700d0  addiu       $a3, $sp, 0xD0
    ctx->pc = 0x3a01f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3a01f4:
    // 0x3a01f4: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x3a01f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a01f8:
    // 0x3a01f8: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3a01f8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3a01fc:
    // 0x3a01fc: 0xc0d40ac  jal         func_3502B0
label_3a0200:
    if (ctx->pc == 0x3A0200u) {
        ctx->pc = 0x3A0200u;
            // 0x3a0200: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->pc = 0x3A0204u;
        goto label_3a0204;
    }
    ctx->pc = 0x3A01FCu;
    SET_GPR_U32(ctx, 31, 0x3A0204u);
    ctx->pc = 0x3A0200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A01FCu;
            // 0x3a0200: 0x4600a306  mov.s       $f12, $f20 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x3502B0u;
    if (runtime->hasFunction(0x3502B0u)) {
        auto targetFn = runtime->lookupFunction(0x3502B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0204u; }
        if (ctx->pc != 0x3A0204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003502B0_0x3502b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0204u; }
        if (ctx->pc != 0x3A0204u) { return; }
    }
    ctx->pc = 0x3A0204u;
label_3a0204:
    // 0x3a0204: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x3a0204u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_3a0208:
    // 0x3a0208: 0x1020002d  beqz        $at, . + 4 + (0x2D << 2)
label_3a020c:
    if (ctx->pc == 0x3A020Cu) {
        ctx->pc = 0x3A020Cu;
            // 0x3a020c: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->pc = 0x3A0210u;
        goto label_3a0210;
    }
    ctx->pc = 0x3A0208u;
    {
        const bool branch_taken_0x3a0208 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3A020Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0208u;
            // 0x3a020c: 0xae220044  sw          $v0, 0x44($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 68), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a0208) {
            ctx->pc = 0x3A02C0u;
            goto label_3a02c0;
        }
    }
    ctx->pc = 0x3A0210u;
label_3a0210:
    // 0x3a0210: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x3a0210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_3a0214:
    // 0x3a0214: 0x27a400d0  addiu       $a0, $sp, 0xD0
    ctx->pc = 0x3a0214u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3a0218:
    // 0x3a0218: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x3a0218u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3a021c:
    // 0x3a021c: 0xc04cd60  jal         func_133580
label_3a0220:
    if (ctx->pc == 0x3A0220u) {
        ctx->pc = 0x3A0220u;
            // 0x3a0220: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A0224u;
        goto label_3a0224;
    }
    ctx->pc = 0x3A021Cu;
    SET_GPR_U32(ctx, 31, 0x3A0224u);
    ctx->pc = 0x3A0220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A021Cu;
            // 0x3a0220: 0x80302d  daddu       $a2, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0224u; }
        if (ctx->pc != 0x3A0224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0224u; }
        if (ctx->pc != 0x3A0224u) { return; }
    }
    ctx->pc = 0x3A0224u;
label_3a0224:
    // 0x3a0224: 0x8e450028  lw          $a1, 0x28($s2)
    ctx->pc = 0x3a0224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 40)));
label_3a0228:
    // 0x3a0228: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x3a0228u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a022c:
    // 0x3a022c: 0xc04e4a4  jal         func_139290
label_3a0230:
    if (ctx->pc == 0x3A0230u) {
        ctx->pc = 0x3A0230u;
            // 0x3a0230: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A0234u;
        goto label_3a0234;
    }
    ctx->pc = 0x3A022Cu;
    SET_GPR_U32(ctx, 31, 0x3A0234u);
    ctx->pc = 0x3A0230u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A022Cu;
            // 0x3a0230: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0234u; }
        if (ctx->pc != 0x3A0234u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0234u; }
        if (ctx->pc != 0x3A0234u) { return; }
    }
    ctx->pc = 0x3A0234u;
label_3a0234:
    // 0x3a0234: 0x8e390000  lw          $t9, 0x0($s1)
    ctx->pc = 0x3a0234u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3a0238:
    // 0x3a0238: 0x8f390034  lw          $t9, 0x34($t9)
    ctx->pc = 0x3a0238u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 52)));
label_3a023c:
    // 0x3a023c: 0x320f809  jalr        $t9
label_3a0240:
    if (ctx->pc == 0x3A0240u) {
        ctx->pc = 0x3A0240u;
            // 0x3a0240: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A0244u;
        goto label_3a0244;
    }
    ctx->pc = 0x3A023Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3A0244u);
        ctx->pc = 0x3A0240u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A023Cu;
            // 0x3a0240: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3A0244u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3A0244u; }
            if (ctx->pc != 0x3A0244u) { return; }
        }
        }
    }
    ctx->pc = 0x3A0244u;
label_3a0244:
    // 0x3a0244: 0x8e070008  lw          $a3, 0x8($s0)
    ctx->pc = 0x3a0244u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3a0248:
    // 0x3a0248: 0xc62c006c  lwc1        $f12, 0x6C($s1)
    ctx->pc = 0x3a0248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3a024c:
    // 0x3a024c: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x3a024cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_3a0250:
    // 0x3a0250: 0x40502d  daddu       $t2, $v0, $zero
    ctx->pc = 0x3a0250u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3a0254:
    // 0x3a0254: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3a0254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a0258:
    // 0x3a0258: 0x2a0282d  daddu       $a1, $s5, $zero
    ctx->pc = 0x3a0258u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a025c:
    // 0x3a025c: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x3a025cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a0260:
    // 0x3a0260: 0x27a800d0  addiu       $t0, $sp, 0xD0
    ctx->pc = 0x3a0260u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_3a0264:
    // 0x3a0264: 0xc04cff4  jal         func_133FD0
label_3a0268:
    if (ctx->pc == 0x3A0268u) {
        ctx->pc = 0x3A0268u;
            // 0x3a0268: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->pc = 0x3A026Cu;
        goto label_3a026c;
    }
    ctx->pc = 0x3A0264u;
    SET_GPR_U32(ctx, 31, 0x3A026Cu);
    ctx->pc = 0x3A0268u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0264u;
            // 0x3a0268: 0x2529e350  addiu       $t1, $t1, -0x1CB0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294959952));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133FD0u;
    if (runtime->hasFunction(0x133FD0u)) {
        auto targetFn = runtime->lookupFunction(0x133FD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A026Cu; }
        if (ctx->pc != 0x3A026Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133FD0_0x133fd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A026Cu; }
        if (ctx->pc != 0x3A026Cu) { return; }
    }
    ctx->pc = 0x3A026Cu;
label_3a026c:
    // 0x3a026c: 0x8e060014  lw          $a2, 0x14($s0)
    ctx->pc = 0x3a026cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_3a0270:
    // 0x3a0270: 0x10c0000d  beqz        $a2, . + 4 + (0xD << 2)
label_3a0274:
    if (ctx->pc == 0x3A0274u) {
        ctx->pc = 0x3A0278u;
        goto label_3a0278;
    }
    ctx->pc = 0x3A0270u;
    {
        const bool branch_taken_0x3a0270 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a0270) {
            ctx->pc = 0x3A02A8u;
            goto label_3a02a8;
        }
    }
    ctx->pc = 0x3A0278u;
label_3a0278:
    // 0x3a0278: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3a0278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3a027c:
    // 0x3a027c: 0xc62c0070  lwc1        $f12, 0x70($s1)
    ctx->pc = 0x3a027cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_3a0280:
    // 0x3a0280: 0xc054bbc  jal         func_152EF0
label_3a0284:
    if (ctx->pc == 0x3A0284u) {
        ctx->pc = 0x3A0284u;
            // 0x3a0284: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x3A0288u;
        goto label_3a0288;
    }
    ctx->pc = 0x3A0280u;
    SET_GPR_U32(ctx, 31, 0x3A0288u);
    ctx->pc = 0x3A0284u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0280u;
            // 0x3a0284: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x152EF0u;
    if (runtime->hasFunction(0x152EF0u)) {
        auto targetFn = runtime->lookupFunction(0x152EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0288u; }
        if (ctx->pc != 0x3A0288u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00152EF0_0x152ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A0288u; }
        if (ctx->pc != 0x3A0288u) { return; }
    }
    ctx->pc = 0x3A0288u;
label_3a0288:
    // 0x3a0288: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x3a0288u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_3a028c:
    // 0x3a028c: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3a028cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a0290:
    // 0x3a0290: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3a0290u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a0294:
    // 0x3a0294: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3a0294u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3a0298:
    // 0x3a0298: 0xc054c2c  jal         func_1530B0
label_3a029c:
    if (ctx->pc == 0x3A029Cu) {
        ctx->pc = 0x3A029Cu;
            // 0x3a029c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x3A02A0u;
        goto label_3a02a0;
    }
    ctx->pc = 0x3A0298u;
    SET_GPR_U32(ctx, 31, 0x3A02A0u);
    ctx->pc = 0x3A029Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0298u;
            // 0x3a029c: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530B0u;
    if (runtime->hasFunction(0x1530B0u)) {
        auto targetFn = runtime->lookupFunction(0x1530B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A02A0u; }
        if (ctx->pc != 0x3A02A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530B0_0x1530b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A02A0u; }
        if (ctx->pc != 0x3A02A0u) { return; }
    }
    ctx->pc = 0x3A02A0u;
label_3a02a0:
    // 0x3a02a0: 0x10000007  b           . + 4 + (0x7 << 2)
label_3a02a4:
    if (ctx->pc == 0x3A02A4u) {
        ctx->pc = 0x3A02A8u;
        goto label_3a02a8;
    }
    ctx->pc = 0x3A02A0u;
    {
        const bool branch_taken_0x3a02a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3a02a0) {
            ctx->pc = 0x3A02C0u;
            goto label_3a02c0;
        }
    }
    ctx->pc = 0x3A02A8u;
label_3a02a8:
    // 0x3a02a8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3a02a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3a02ac:
    // 0x3a02ac: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3a02acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3a02b0:
    // 0x3a02b0: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x3a02b0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_3a02b4:
    // 0x3a02b4: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3a02b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
label_3a02b8:
    // 0x3a02b8: 0xc0e80c4  jal         func_3A0310
label_3a02bc:
    if (ctx->pc == 0x3A02BCu) {
        ctx->pc = 0x3A02BCu;
            // 0x3a02bc: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->pc = 0x3A02C0u;
        goto label_3a02c0;
    }
    ctx->pc = 0x3A02B8u;
    SET_GPR_U32(ctx, 31, 0x3A02C0u);
    ctx->pc = 0x3A02BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3A02B8u;
            // 0x3a02bc: 0x24080080  addiu       $t0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3A0310u;
    if (runtime->hasFunction(0x3A0310u)) {
        auto targetFn = runtime->lookupFunction(0x3A0310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A02C0u; }
        if (ctx->pc != 0x3A02C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003A0310_0x3a0310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3A02C0u; }
        if (ctx->pc != 0x3A02C0u) { return; }
    }
    ctx->pc = 0x3A02C0u;
label_3a02c0:
    // 0x3a02c0: 0x7ba300b0  lq          $v1, 0xB0($sp)
    ctx->pc = 0x3a02c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3a02c4:
    // 0x3a02c4: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x3a02c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_3a02c8:
    // 0x3a02c8: 0x263182b  sltu        $v1, $s3, $v1
    ctx->pc = 0x3a02c8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3a02cc:
    // 0x3a02cc: 0x1460ffab  bnez        $v1, . + 4 + (-0x55 << 2)
label_3a02d0:
    if (ctx->pc == 0x3A02D0u) {
        ctx->pc = 0x3A02D0u;
            // 0x3a02d0: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->pc = 0x3A02D4u;
        goto label_3a02d4;
    }
    ctx->pc = 0x3A02CCu;
    {
        const bool branch_taken_0x3a02cc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3A02D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A02CCu;
            // 0x3a02d0: 0x26d60004  addiu       $s6, $s6, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3a02cc) {
            ctx->pc = 0x3A017Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3a017c;
        }
    }
    ctx->pc = 0x3A02D4u;
label_3a02d4:
    // 0x3a02d4: 0x0  nop
    ctx->pc = 0x3a02d4u;
    // NOP
label_3a02d8:
    // 0x3a02d8: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x3a02d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
label_3a02dc:
    // 0x3a02dc: 0x7bbe0090  lq          $fp, 0x90($sp)
    ctx->pc = 0x3a02dcu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3a02e0:
    // 0x3a02e0: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3a02e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
label_3a02e4:
    // 0x3a02e4: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x3a02e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3a02e8:
    // 0x3a02e8: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x3a02e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3a02ec:
    // 0x3a02ec: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3a02ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3a02f0:
    // 0x3a02f0: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3a02f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3a02f4:
    // 0x3a02f4: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3a02f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3a02f8:
    // 0x3a02f8: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3a02f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3a02fc:
    // 0x3a02fc: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3a02fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3a0300:
    // 0x3a0300: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3a0300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3a0304:
    // 0x3a0304: 0x3e00008  jr          $ra
label_3a0308:
    if (ctx->pc == 0x3A0308u) {
        ctx->pc = 0x3A0308u;
            // 0x3a0308: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->pc = 0x3A030Cu;
        goto label_3a030c;
    }
    ctx->pc = 0x3A0304u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3A0308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3A0304u;
            // 0x3a0308: 0x27bd0110  addiu       $sp, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3A030Cu;
label_3a030c:
    // 0x3a030c: 0x0  nop
    ctx->pc = 0x3a030cu;
    // NOP
}
