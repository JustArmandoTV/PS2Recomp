#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0032FF70
// Address: 0x32ff70 - 0x330140
void sub_0032FF70_0x32ff70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032FF70_0x32ff70");
#endif

    switch (ctx->pc) {
        case 0x32ff70u: goto label_32ff70;
        case 0x32ff74u: goto label_32ff74;
        case 0x32ff78u: goto label_32ff78;
        case 0x32ff7cu: goto label_32ff7c;
        case 0x32ff80u: goto label_32ff80;
        case 0x32ff84u: goto label_32ff84;
        case 0x32ff88u: goto label_32ff88;
        case 0x32ff8cu: goto label_32ff8c;
        case 0x32ff90u: goto label_32ff90;
        case 0x32ff94u: goto label_32ff94;
        case 0x32ff98u: goto label_32ff98;
        case 0x32ff9cu: goto label_32ff9c;
        case 0x32ffa0u: goto label_32ffa0;
        case 0x32ffa4u: goto label_32ffa4;
        case 0x32ffa8u: goto label_32ffa8;
        case 0x32ffacu: goto label_32ffac;
        case 0x32ffb0u: goto label_32ffb0;
        case 0x32ffb4u: goto label_32ffb4;
        case 0x32ffb8u: goto label_32ffb8;
        case 0x32ffbcu: goto label_32ffbc;
        case 0x32ffc0u: goto label_32ffc0;
        case 0x32ffc4u: goto label_32ffc4;
        case 0x32ffc8u: goto label_32ffc8;
        case 0x32ffccu: goto label_32ffcc;
        case 0x32ffd0u: goto label_32ffd0;
        case 0x32ffd4u: goto label_32ffd4;
        case 0x32ffd8u: goto label_32ffd8;
        case 0x32ffdcu: goto label_32ffdc;
        case 0x32ffe0u: goto label_32ffe0;
        case 0x32ffe4u: goto label_32ffe4;
        case 0x32ffe8u: goto label_32ffe8;
        case 0x32ffecu: goto label_32ffec;
        case 0x32fff0u: goto label_32fff0;
        case 0x32fff4u: goto label_32fff4;
        case 0x32fff8u: goto label_32fff8;
        case 0x32fffcu: goto label_32fffc;
        case 0x330000u: goto label_330000;
        case 0x330004u: goto label_330004;
        case 0x330008u: goto label_330008;
        case 0x33000cu: goto label_33000c;
        case 0x330010u: goto label_330010;
        case 0x330014u: goto label_330014;
        case 0x330018u: goto label_330018;
        case 0x33001cu: goto label_33001c;
        case 0x330020u: goto label_330020;
        case 0x330024u: goto label_330024;
        case 0x330028u: goto label_330028;
        case 0x33002cu: goto label_33002c;
        case 0x330030u: goto label_330030;
        case 0x330034u: goto label_330034;
        case 0x330038u: goto label_330038;
        case 0x33003cu: goto label_33003c;
        case 0x330040u: goto label_330040;
        case 0x330044u: goto label_330044;
        case 0x330048u: goto label_330048;
        case 0x33004cu: goto label_33004c;
        case 0x330050u: goto label_330050;
        case 0x330054u: goto label_330054;
        case 0x330058u: goto label_330058;
        case 0x33005cu: goto label_33005c;
        case 0x330060u: goto label_330060;
        case 0x330064u: goto label_330064;
        case 0x330068u: goto label_330068;
        case 0x33006cu: goto label_33006c;
        case 0x330070u: goto label_330070;
        case 0x330074u: goto label_330074;
        case 0x330078u: goto label_330078;
        case 0x33007cu: goto label_33007c;
        case 0x330080u: goto label_330080;
        case 0x330084u: goto label_330084;
        case 0x330088u: goto label_330088;
        case 0x33008cu: goto label_33008c;
        case 0x330090u: goto label_330090;
        case 0x330094u: goto label_330094;
        case 0x330098u: goto label_330098;
        case 0x33009cu: goto label_33009c;
        case 0x3300a0u: goto label_3300a0;
        case 0x3300a4u: goto label_3300a4;
        case 0x3300a8u: goto label_3300a8;
        case 0x3300acu: goto label_3300ac;
        case 0x3300b0u: goto label_3300b0;
        case 0x3300b4u: goto label_3300b4;
        case 0x3300b8u: goto label_3300b8;
        case 0x3300bcu: goto label_3300bc;
        case 0x3300c0u: goto label_3300c0;
        case 0x3300c4u: goto label_3300c4;
        case 0x3300c8u: goto label_3300c8;
        case 0x3300ccu: goto label_3300cc;
        case 0x3300d0u: goto label_3300d0;
        case 0x3300d4u: goto label_3300d4;
        case 0x3300d8u: goto label_3300d8;
        case 0x3300dcu: goto label_3300dc;
        case 0x3300e0u: goto label_3300e0;
        case 0x3300e4u: goto label_3300e4;
        case 0x3300e8u: goto label_3300e8;
        case 0x3300ecu: goto label_3300ec;
        case 0x3300f0u: goto label_3300f0;
        case 0x3300f4u: goto label_3300f4;
        case 0x3300f8u: goto label_3300f8;
        case 0x3300fcu: goto label_3300fc;
        case 0x330100u: goto label_330100;
        case 0x330104u: goto label_330104;
        case 0x330108u: goto label_330108;
        case 0x33010cu: goto label_33010c;
        case 0x330110u: goto label_330110;
        case 0x330114u: goto label_330114;
        case 0x330118u: goto label_330118;
        case 0x33011cu: goto label_33011c;
        case 0x330120u: goto label_330120;
        case 0x330124u: goto label_330124;
        case 0x330128u: goto label_330128;
        case 0x33012cu: goto label_33012c;
        case 0x330130u: goto label_330130;
        case 0x330134u: goto label_330134;
        case 0x330138u: goto label_330138;
        case 0x33013cu: goto label_33013c;
        default: break;
    }

    ctx->pc = 0x32ff70u;

label_32ff70:
    // 0x32ff70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x32ff70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_32ff74:
    // 0x32ff74: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32ff74u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32ff78:
    // 0x32ff78: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x32ff78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_32ff7c:
    // 0x32ff7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x32ff7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32ff80:
    // 0x32ff80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x32ff80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_32ff84:
    // 0x32ff84: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x32ff84u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32ff88:
    // 0x32ff88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x32ff88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_32ff8c:
    // 0x32ff8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x32ff8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_32ff90:
    // 0x32ff90: 0xc0cc050  jal         func_330140
label_32ff94:
    if (ctx->pc == 0x32FF94u) {
        ctx->pc = 0x32FF94u;
            // 0x32ff94: 0xac800998  sw          $zero, 0x998($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2456), GPR_U32(ctx, 0));
        ctx->pc = 0x32FF98u;
        goto label_32ff98;
    }
    ctx->pc = 0x32FF90u;
    SET_GPR_U32(ctx, 31, 0x32FF98u);
    ctx->pc = 0x32FF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x32FF90u;
            // 0x32ff94: 0xac800998  sw          $zero, 0x998($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 2456), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x330140u;
    if (runtime->hasFunction(0x330140u)) {
        auto targetFn = runtime->lookupFunction(0x330140u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32FF98u; }
        if (ctx->pc != 0x32FF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00330140_0x330140(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x32FF98u; }
        if (ctx->pc != 0x32FF98u) { return; }
    }
    ctx->pc = 0x32FF98u;
label_32ff98:
    // 0x32ff98: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x32ff98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_32ff9c:
    // 0x32ff9c: 0x3c070060  lui         $a3, 0x60
    ctx->pc = 0x32ff9cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)96 << 16));
label_32ffa0:
    // 0x32ffa0: 0x8c508a08  lw          $s0, -0x75F8($v0)
    ctx->pc = 0x32ffa0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937096)));
label_32ffa4:
    // 0x32ffa4: 0x3c060060  lui         $a2, 0x60
    ctx->pc = 0x32ffa4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)96 << 16));
label_32ffa8:
    // 0x32ffa8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x32ffa8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_32ffac:
    // 0x32ffac: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x32ffacu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32ffb0:
    // 0x32ffb0: 0x24e7eb70  addiu       $a3, $a3, -0x1490
    ctx->pc = 0x32ffb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294962032));
label_32ffb4:
    // 0x32ffb4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x32ffb4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32ffb8:
    // 0x32ffb8: 0x8208007a  lb          $t0, 0x7A($s0)
    ctx->pc = 0x32ffb8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 122)));
label_32ffbc:
    // 0x32ffbc: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x32ffbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
label_32ffc0:
    // 0x32ffc0: 0x24c6e7b0  addiu       $a2, $a2, -0x1850
    ctx->pc = 0x32ffc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294961072));
label_32ffc4:
    // 0x32ffc4: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x32ffc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_32ffc8:
    // 0x32ffc8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x32ffc8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_32ffcc:
    // 0x32ffcc: 0xa208007b  sb          $t0, 0x7B($s0)
    ctx->pc = 0x32ffccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 123), (uint8_t)GPR_U32(ctx, 8));
label_32ffd0:
    // 0x32ffd0: 0x8c6389f0  lw          $v1, -0x7610($v1)
    ctx->pc = 0x32ffd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
label_32ffd4:
    // 0x32ffd4: 0x90630029  lbu         $v1, 0x29($v1)
    ctx->pc = 0x32ffd4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 41)));
label_32ffd8:
    // 0x32ffd8: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x32ffd8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_32ffdc:
    // 0x32ffdc: 0x1234021  addu        $t0, $t1, $v1
    ctx->pc = 0x32ffdcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 3)));
label_32ffe0:
    // 0x32ffe0: 0x81880  sll         $v1, $t0, 2
    ctx->pc = 0x32ffe0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 8), 2));
label_32ffe4:
    // 0x32ffe4: 0x681821  addu        $v1, $v1, $t0
    ctx->pc = 0x32ffe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
label_32ffe8:
    // 0x32ffe8: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x32ffe8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_32ffec:
    // 0x32ffec: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x32ffecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
label_32fff0:
    // 0x32fff0: 0xae030050  sw          $v1, 0x50($s0)
    ctx->pc = 0x32fff0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 3));
label_32fff4:
    // 0x32fff4: 0xae070064  sw          $a3, 0x64($s0)
    ctx->pc = 0x32fff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 7));
label_32fff8:
    // 0x32fff8: 0x8c4289f0  lw          $v0, -0x7610($v0)
    ctx->pc = 0x32fff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937072)));
label_32fffc:
    // 0x32fffc: 0x90420029  lbu         $v0, 0x29($v0)
    ctx->pc = 0x32fffcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 41)));
label_330000:
    // 0x330000: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x330000u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_330004:
    // 0x330004: 0x1421821  addu        $v1, $t2, $v0
    ctx->pc = 0x330004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 2)));
label_330008:
    // 0x330008: 0x31100  sll         $v0, $v1, 4
    ctx->pc = 0x330008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
label_33000c:
    // 0x33000c: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x33000cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_330010:
    // 0x330010: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x330010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_330014:
    // 0x330014: 0xc0575cc  jal         func_15D730
label_330018:
    if (ctx->pc == 0x330018u) {
        ctx->pc = 0x330018u;
            // 0x330018: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->pc = 0x33001Cu;
        goto label_33001c;
    }
    ctx->pc = 0x330014u;
    SET_GPR_U32(ctx, 31, 0x33001Cu);
    ctx->pc = 0x330018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x330014u;
            // 0x330018: 0xc23021  addu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D730u;
    if (runtime->hasFunction(0x15D730u)) {
        auto targetFn = runtime->lookupFunction(0x15D730u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33001Cu; }
        if (ctx->pc != 0x33001Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D730_0x15d730(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33001Cu; }
        if (ctx->pc != 0x33001Cu) { return; }
    }
    ctx->pc = 0x33001Cu;
label_33001c:
    // 0x33001c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33001cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_330020:
    // 0x330020: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x330020u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_330024:
    // 0x330024: 0xa205007a  sb          $a1, 0x7A($s0)
    ctx->pc = 0x330024u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 122), (uint8_t)GPR_U32(ctx, 5));
label_330028:
    // 0x330028: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x330028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
label_33002c:
    // 0x33002c: 0x8c648a08  lw          $a0, -0x75F8($v1)
    ctx->pc = 0x33002cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_330030:
    // 0x330030: 0x8c42d120  lw          $v0, -0x2EE0($v0)
    ctx->pc = 0x330030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955296)));
label_330034:
    // 0x330034: 0x8c84003c  lw          $a0, 0x3C($a0)
    ctx->pc = 0x330034u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
label_330038:
    // 0x330038: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x330038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_33003c:
    // 0x33003c: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x33003cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_330040:
    // 0x330040: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x330040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_330044:
    // 0x330044: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x330044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_330048:
    // 0x330048: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x330048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_33004c:
    // 0x33004c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x33004cu;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = copysignf(INFINITY, ctx->f[1] * 0.0f); } else ctx->f[0] = ctx->f[1] / ctx->f[0];
label_330050:
    // 0x330050: 0x0  nop
    ctx->pc = 0x330050u;
    // NOP
label_330054:
    // 0x330054: 0xe4400198  swc1        $f0, 0x198($v0)
    ctx->pc = 0x330054u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 408), bits); }
label_330058:
    // 0x330058: 0x8e220968  lw          $v0, 0x968($s1)
    ctx->pc = 0x330058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2408)));
label_33005c:
    // 0x33005c: 0x50430011  beql        $v0, $v1, . + 4 + (0x11 << 2)
label_330060:
    if (ctx->pc == 0x330060u) {
        ctx->pc = 0x330060u;
            // 0x330060: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->pc = 0x330064u;
        goto label_330064;
    }
    ctx->pc = 0x33005Cu;
    {
        const bool branch_taken_0x33005c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x33005c) {
            ctx->pc = 0x330060u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33005Cu;
            // 0x330060: 0x3c02bf80  lui         $v0, 0xBF80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3300A4u;
            goto label_3300a4;
        }
    }
    ctx->pc = 0x330064u;
label_330064:
    // 0x330064: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x330064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_330068:
    // 0x330068: 0x8c440ea4  lw          $a0, 0xEA4($v0)
    ctx->pc = 0x330068u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_33006c:
    // 0x33006c: 0xac850090  sw          $a1, 0x90($a0)
    ctx->pc = 0x33006cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 144), GPR_U32(ctx, 5));
label_330070:
    // 0x330070: 0xac8000a0  sw          $zero, 0xA0($a0)
    ctx->pc = 0x330070u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 160), GPR_U32(ctx, 0));
label_330074:
    // 0x330074: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x330074u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_330078:
    // 0x330078: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x330078u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_33007c:
    // 0x33007c: 0x320f809  jalr        $t9
label_330080:
    if (ctx->pc == 0x330080u) {
        ctx->pc = 0x330084u;
        goto label_330084;
    }
    ctx->pc = 0x33007Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x330084u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x330084u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x330084u; }
            if (ctx->pc != 0x330084u) { return; }
        }
        }
    }
    ctx->pc = 0x330084u;
label_330084:
    // 0x330084: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
label_330088:
    if (ctx->pc == 0x330088u) {
        ctx->pc = 0x33008Cu;
        goto label_33008c;
    }
    ctx->pc = 0x330084u;
    {
        const bool branch_taken_0x330084 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x330084) {
            ctx->pc = 0x3300A0u;
            goto label_3300a0;
        }
    }
    ctx->pc = 0x33008Cu;
label_33008c:
    // 0x33008c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x33008cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_330090:
    // 0x330090: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x330090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_330094:
    // 0x330094: 0x8c420ea4  lw          $v0, 0xEA4($v0)
    ctx->pc = 0x330094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3748)));
label_330098:
    // 0x330098: 0xac430474  sw          $v1, 0x474($v0)
    ctx->pc = 0x330098u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1140), GPR_U32(ctx, 3));
label_33009c:
    // 0x33009c: 0xac400484  sw          $zero, 0x484($v0)
    ctx->pc = 0x33009cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1156), GPR_U32(ctx, 0));
label_3300a0:
    // 0x3300a0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3300a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
label_3300a4:
    // 0x3300a4: 0xae22099c  sw          $v0, 0x99C($s1)
    ctx->pc = 0x3300a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2460), GPR_U32(ctx, 2));
label_3300a8:
    // 0x3300a8: 0x92220c77  lbu         $v0, 0xC77($s1)
    ctx->pc = 0x3300a8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3191)));
label_3300ac:
    // 0x3300ac: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_3300b0:
    if (ctx->pc == 0x3300B0u) {
        ctx->pc = 0x3300B0u;
            // 0x3300b0: 0x8e23077c  lw          $v1, 0x77C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1916)));
        ctx->pc = 0x3300B4u;
        goto label_3300b4;
    }
    ctx->pc = 0x3300ACu;
    {
        const bool branch_taken_0x3300ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3300ac) {
            ctx->pc = 0x3300B0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3300ACu;
            // 0x3300b0: 0x8e23077c  lw          $v1, 0x77C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 1916)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3300D8u;
            goto label_3300d8;
        }
    }
    ctx->pc = 0x3300B4u;
label_3300b4:
    // 0x3300b4: 0x8e2309d8  lw          $v1, 0x9D8($s1)
    ctx->pc = 0x3300b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 2520)));
label_3300b8:
    // 0x3300b8: 0x50600013  beql        $v1, $zero, . + 4 + (0x13 << 2)
label_3300bc:
    if (ctx->pc == 0x3300BCu) {
        ctx->pc = 0x3300BCu;
            // 0x3300bc: 0xae200c98  sw          $zero, 0xC98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3224), GPR_U32(ctx, 0));
        ctx->pc = 0x3300C0u;
        goto label_3300c0;
    }
    ctx->pc = 0x3300B8u;
    {
        const bool branch_taken_0x3300b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3300b8) {
            ctx->pc = 0x3300BCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3300B8u;
            // 0x3300bc: 0xae200c98  sw          $zero, 0xC98($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 3224), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x330108u;
            goto label_330108;
        }
    }
    ctx->pc = 0x3300C0u;
label_3300c0:
    // 0x3300c0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3300c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3300c4:
    // 0x3300c4: 0xa0620058  sb          $v0, 0x58($v1)
    ctx->pc = 0x3300c4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 88), (uint8_t)GPR_U32(ctx, 2));
label_3300c8:
    // 0x3300c8: 0xae2009d8  sw          $zero, 0x9D8($s1)
    ctx->pc = 0x3300c8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2520), GPR_U32(ctx, 0));
label_3300cc:
    // 0x3300cc: 0xae200c98  sw          $zero, 0xC98($s1)
    ctx->pc = 0x3300ccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 3224), GPR_U32(ctx, 0));
label_3300d0:
    // 0x3300d0: 0x1000000d  b           . + 4 + (0xD << 2)
label_3300d4:
    if (ctx->pc == 0x3300D4u) {
        ctx->pc = 0x3300D8u;
        goto label_3300d8;
    }
    ctx->pc = 0x3300D0u;
    {
        const bool branch_taken_0x3300d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3300d0) {
            ctx->pc = 0x330108u;
            goto label_330108;
        }
    }
    ctx->pc = 0x3300D8u;
label_3300d8:
    // 0x3300d8: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3300d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_3300dc:
    // 0x3300dc: 0x24420e80  addiu       $v0, $v0, 0xE80
    ctx->pc = 0x3300dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 3712));
label_3300e0:
    // 0x3300e0: 0x2465ffff  addiu       $a1, $v1, -0x1
    ctx->pc = 0x3300e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_3300e4:
    // 0x3300e4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x3300e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3300e8:
    // 0x3300e8: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x3300e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3300ec:
    // 0x3300ec: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x3300ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_3300f0:
    // 0x3300f0: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x3300f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_3300f4:
    // 0x3300f4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3300f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_3300f8:
    // 0x3300f8: 0xa06011a1  sb          $zero, 0x11A1($v1)
    ctx->pc = 0x3300f8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4513), (uint8_t)GPR_U32(ctx, 0));
label_3300fc:
    // 0x3300fc: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x3300fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_330100:
    // 0x330100: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_330104:
    if (ctx->pc == 0x330104u) {
        ctx->pc = 0x330108u;
        goto label_330108;
    }
    ctx->pc = 0x330100u;
    {
        const bool branch_taken_0x330100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x330100) {
            ctx->pc = 0x3300ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3300ec;
        }
    }
    ctx->pc = 0x330108u;
label_330108:
    // 0x330108: 0xc040180  jal         func_100600
label_33010c:
    if (ctx->pc == 0x33010Cu) {
        ctx->pc = 0x33010Cu;
            // 0x33010c: 0x2404005c  addiu       $a0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->pc = 0x330110u;
        goto label_330110;
    }
    ctx->pc = 0x330108u;
    SET_GPR_U32(ctx, 31, 0x330110u);
    ctx->pc = 0x33010Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x330108u;
            // 0x33010c: 0x2404005c  addiu       $a0, $zero, 0x5C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330110u; }
        if (ctx->pc != 0x330110u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330110u; }
        if (ctx->pc != 0x330110u) { return; }
    }
    ctx->pc = 0x330110u;
label_330110:
    // 0x330110: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x330110u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_330114:
    // 0x330114: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
label_330118:
    if (ctx->pc == 0x330118u) {
        ctx->pc = 0x330118u;
            // 0x330118: 0xae2409d8  sw          $a0, 0x9D8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2520), GPR_U32(ctx, 4));
        ctx->pc = 0x33011Cu;
        goto label_33011c;
    }
    ctx->pc = 0x330114u;
    {
        const bool branch_taken_0x330114 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x330114) {
            ctx->pc = 0x330118u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x330114u;
            // 0x330118: 0xae2409d8  sw          $a0, 0x9D8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 2520), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33012Cu;
            goto label_33012c;
        }
    }
    ctx->pc = 0x33011Cu;
label_33011c:
    // 0x33011c: 0xc126de8  jal         func_49B7A0
label_330120:
    if (ctx->pc == 0x330120u) {
        ctx->pc = 0x330124u;
        goto label_330124;
    }
    ctx->pc = 0x33011Cu;
    SET_GPR_U32(ctx, 31, 0x330124u);
    ctx->pc = 0x49B7A0u;
    if (runtime->hasFunction(0x49B7A0u)) {
        auto targetFn = runtime->lookupFunction(0x49B7A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330124u; }
        if (ctx->pc != 0x330124u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049B7A0_0x49b7a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x330124u; }
        if (ctx->pc != 0x330124u) { return; }
    }
    ctx->pc = 0x330124u;
label_330124:
    // 0x330124: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x330124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_330128:
    // 0x330128: 0xae2409d8  sw          $a0, 0x9D8($s1)
    ctx->pc = 0x330128u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 2520), GPR_U32(ctx, 4));
label_33012c:
    // 0x33012c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x33012cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_330130:
    // 0x330130: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x330130u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_330134:
    // 0x330134: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x330134u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_330138:
    // 0x330138: 0x3e00008  jr          $ra
label_33013c:
    if (ctx->pc == 0x33013Cu) {
        ctx->pc = 0x33013Cu;
            // 0x33013c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x330140u;
        goto label_fallthrough_0x330138;
    }
    ctx->pc = 0x330138u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33013Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x330138u;
            // 0x33013c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x330138:
    ctx->pc = 0x330140u;
}
