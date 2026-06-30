#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0027D040
// Address: 0x27d040 - 0x27d200
void sub_0027D040_0x27d040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027D040_0x27d040");
#endif

    switch (ctx->pc) {
        case 0x27d040u: goto label_27d040;
        case 0x27d044u: goto label_27d044;
        case 0x27d048u: goto label_27d048;
        case 0x27d04cu: goto label_27d04c;
        case 0x27d050u: goto label_27d050;
        case 0x27d054u: goto label_27d054;
        case 0x27d058u: goto label_27d058;
        case 0x27d05cu: goto label_27d05c;
        case 0x27d060u: goto label_27d060;
        case 0x27d064u: goto label_27d064;
        case 0x27d068u: goto label_27d068;
        case 0x27d06cu: goto label_27d06c;
        case 0x27d070u: goto label_27d070;
        case 0x27d074u: goto label_27d074;
        case 0x27d078u: goto label_27d078;
        case 0x27d07cu: goto label_27d07c;
        case 0x27d080u: goto label_27d080;
        case 0x27d084u: goto label_27d084;
        case 0x27d088u: goto label_27d088;
        case 0x27d08cu: goto label_27d08c;
        case 0x27d090u: goto label_27d090;
        case 0x27d094u: goto label_27d094;
        case 0x27d098u: goto label_27d098;
        case 0x27d09cu: goto label_27d09c;
        case 0x27d0a0u: goto label_27d0a0;
        case 0x27d0a4u: goto label_27d0a4;
        case 0x27d0a8u: goto label_27d0a8;
        case 0x27d0acu: goto label_27d0ac;
        case 0x27d0b0u: goto label_27d0b0;
        case 0x27d0b4u: goto label_27d0b4;
        case 0x27d0b8u: goto label_27d0b8;
        case 0x27d0bcu: goto label_27d0bc;
        case 0x27d0c0u: goto label_27d0c0;
        case 0x27d0c4u: goto label_27d0c4;
        case 0x27d0c8u: goto label_27d0c8;
        case 0x27d0ccu: goto label_27d0cc;
        case 0x27d0d0u: goto label_27d0d0;
        case 0x27d0d4u: goto label_27d0d4;
        case 0x27d0d8u: goto label_27d0d8;
        case 0x27d0dcu: goto label_27d0dc;
        case 0x27d0e0u: goto label_27d0e0;
        case 0x27d0e4u: goto label_27d0e4;
        case 0x27d0e8u: goto label_27d0e8;
        case 0x27d0ecu: goto label_27d0ec;
        case 0x27d0f0u: goto label_27d0f0;
        case 0x27d0f4u: goto label_27d0f4;
        case 0x27d0f8u: goto label_27d0f8;
        case 0x27d0fcu: goto label_27d0fc;
        case 0x27d100u: goto label_27d100;
        case 0x27d104u: goto label_27d104;
        case 0x27d108u: goto label_27d108;
        case 0x27d10cu: goto label_27d10c;
        case 0x27d110u: goto label_27d110;
        case 0x27d114u: goto label_27d114;
        case 0x27d118u: goto label_27d118;
        case 0x27d11cu: goto label_27d11c;
        case 0x27d120u: goto label_27d120;
        case 0x27d124u: goto label_27d124;
        case 0x27d128u: goto label_27d128;
        case 0x27d12cu: goto label_27d12c;
        case 0x27d130u: goto label_27d130;
        case 0x27d134u: goto label_27d134;
        case 0x27d138u: goto label_27d138;
        case 0x27d13cu: goto label_27d13c;
        case 0x27d140u: goto label_27d140;
        case 0x27d144u: goto label_27d144;
        case 0x27d148u: goto label_27d148;
        case 0x27d14cu: goto label_27d14c;
        case 0x27d150u: goto label_27d150;
        case 0x27d154u: goto label_27d154;
        case 0x27d158u: goto label_27d158;
        case 0x27d15cu: goto label_27d15c;
        case 0x27d160u: goto label_27d160;
        case 0x27d164u: goto label_27d164;
        case 0x27d168u: goto label_27d168;
        case 0x27d16cu: goto label_27d16c;
        case 0x27d170u: goto label_27d170;
        case 0x27d174u: goto label_27d174;
        case 0x27d178u: goto label_27d178;
        case 0x27d17cu: goto label_27d17c;
        case 0x27d180u: goto label_27d180;
        case 0x27d184u: goto label_27d184;
        case 0x27d188u: goto label_27d188;
        case 0x27d18cu: goto label_27d18c;
        case 0x27d190u: goto label_27d190;
        case 0x27d194u: goto label_27d194;
        case 0x27d198u: goto label_27d198;
        case 0x27d19cu: goto label_27d19c;
        case 0x27d1a0u: goto label_27d1a0;
        case 0x27d1a4u: goto label_27d1a4;
        case 0x27d1a8u: goto label_27d1a8;
        case 0x27d1acu: goto label_27d1ac;
        case 0x27d1b0u: goto label_27d1b0;
        case 0x27d1b4u: goto label_27d1b4;
        case 0x27d1b8u: goto label_27d1b8;
        case 0x27d1bcu: goto label_27d1bc;
        case 0x27d1c0u: goto label_27d1c0;
        case 0x27d1c4u: goto label_27d1c4;
        case 0x27d1c8u: goto label_27d1c8;
        case 0x27d1ccu: goto label_27d1cc;
        case 0x27d1d0u: goto label_27d1d0;
        case 0x27d1d4u: goto label_27d1d4;
        case 0x27d1d8u: goto label_27d1d8;
        case 0x27d1dcu: goto label_27d1dc;
        case 0x27d1e0u: goto label_27d1e0;
        case 0x27d1e4u: goto label_27d1e4;
        case 0x27d1e8u: goto label_27d1e8;
        case 0x27d1ecu: goto label_27d1ec;
        case 0x27d1f0u: goto label_27d1f0;
        case 0x27d1f4u: goto label_27d1f4;
        case 0x27d1f8u: goto label_27d1f8;
        case 0x27d1fcu: goto label_27d1fc;
        default: break;
    }

    ctx->pc = 0x27d040u;

label_27d040:
    // 0x27d040: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x27d040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_27d044:
    // 0x27d044: 0x3c080060  lui         $t0, 0x60
    ctx->pc = 0x27d044u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)96 << 16));
label_27d048:
    // 0x27d048: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x27d048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_27d04c:
    // 0x27d04c: 0x2508d568  addiu       $t0, $t0, -0x2A98
    ctx->pc = 0x27d04cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956392));
label_27d050:
    // 0x27d050: 0xc08de64  jal         func_237990
label_27d054:
    if (ctx->pc == 0x27D054u) {
        ctx->pc = 0x27D054u;
            // 0x27d054: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27D058u;
        goto label_27d058;
    }
    ctx->pc = 0x27D050u;
    SET_GPR_U32(ctx, 31, 0x27D058u);
    ctx->pc = 0x27D054u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D050u;
            // 0x27d054: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x237990u;
    if (runtime->hasFunction(0x237990u)) {
        auto targetFn = runtime->lookupFunction(0x237990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D058u; }
        if (ctx->pc != 0x27D058u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00237990_0x237990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D058u; }
        if (ctx->pc != 0x27D058u) { return; }
    }
    ctx->pc = 0x27D058u;
label_27d058:
    // 0x27d058: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x27d058u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_27d05c:
    // 0x27d05c: 0x3e00008  jr          $ra
label_27d060:
    if (ctx->pc == 0x27D060u) {
        ctx->pc = 0x27D060u;
            // 0x27d060: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x27D064u;
        goto label_27d064;
    }
    ctx->pc = 0x27D05Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D05Cu;
            // 0x27d060: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D064u;
label_27d064:
    // 0x27d064: 0x0  nop
    ctx->pc = 0x27d064u;
    // NOP
label_27d068:
    // 0x27d068: 0x0  nop
    ctx->pc = 0x27d068u;
    // NOP
label_27d06c:
    // 0x27d06c: 0x0  nop
    ctx->pc = 0x27d06cu;
    // NOP
label_27d070:
    // 0x27d070: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x27d070u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_27d074:
    // 0x27d074: 0x3c027f7f  lui         $v0, 0x7F7F
    ctx->pc = 0x27d074u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32639 << 16));
label_27d078:
    // 0x27d078: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x27d078u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_27d07c:
    // 0x27d07c: 0x3442ffee  ori         $v0, $v0, 0xFFEE
    ctx->pc = 0x27d07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65518);
label_27d080:
    // 0x27d080: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x27d080u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_27d084:
    // 0x27d084: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x27d084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_27d088:
    // 0x27d088: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x27d088u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_27d08c:
    // 0x27d08c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x27d08cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_27d090:
    // 0x27d090: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x27d090u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_27d094:
    // 0x27d094: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x27d094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_27d098:
    // 0x27d098: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x27d098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_27d09c:
    // 0x27d09c: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x27d09cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_27d0a0:
    // 0x27d0a0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x27d0a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_27d0a4:
    // 0x27d0a4: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x27d0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_27d0a8:
    // 0x27d0a8: 0xace30000  sw          $v1, 0x0($a3)
    ctx->pc = 0x27d0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 3));
label_27d0ac:
    // 0x27d0ac: 0xace23030  sw          $v0, 0x3030($a3)
    ctx->pc = 0x27d0acu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12336), GPR_U32(ctx, 2));
label_27d0b0:
    // 0x27d0b0: 0x27a3005c  addiu       $v1, $sp, 0x5C
    ctx->pc = 0x27d0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_27d0b4:
    // 0x27d0b4: 0xace03050  sw          $zero, 0x3050($a3)
    ctx->pc = 0x27d0b4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12368), GPR_U32(ctx, 0));
label_27d0b8:
    // 0x27d0b8: 0x80a80010  lb          $t0, 0x10($a1)
    ctx->pc = 0x27d0b8u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 16)));
label_27d0bc:
    // 0x27d0bc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x27d0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_27d0c0:
    // 0x27d0c0: 0x83900  sll         $a3, $t0, 4
    ctx->pc = 0x27d0c0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 8), 4));
label_27d0c4:
    // 0x27d0c4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x27d0c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27d0c8:
    // 0x27d0c8: 0xe83823  subu        $a3, $a3, $t0
    ctx->pc = 0x27d0c8u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 8)));
label_27d0cc:
    // 0x27d0cc: 0x73880  sll         $a3, $a3, 2
    ctx->pc = 0x27d0ccu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
label_27d0d0:
    // 0x27d0d0: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x27d0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
label_27d0d4:
    // 0x27d0d4: 0x24421a50  addiu       $v0, $v0, 0x1A50
    ctx->pc = 0x27d0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 6736));
label_27d0d8:
    // 0x27d0d8: 0xacc20030  sw          $v0, 0x30($a2)
    ctx->pc = 0x27d0d8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 48), GPR_U32(ctx, 2));
label_27d0dc:
    // 0x27d0dc: 0x8cc20030  lw          $v0, 0x30($a2)
    ctx->pc = 0x27d0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 48)));
label_27d0e0:
    // 0x27d0e0: 0x90420010  lbu         $v0, 0x10($v0)
    ctx->pc = 0x27d0e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 16)));
label_27d0e4:
    // 0x27d0e4: 0xa0620000  sb          $v0, 0x0($v1)
    ctx->pc = 0x27d0e4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 2));
label_27d0e8:
    // 0x27d0e8: 0x83a2005c  lb          $v0, 0x5C($sp)
    ctx->pc = 0x27d0e8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 92)));
label_27d0ec:
    // 0x27d0ec: 0xa0c20010  sb          $v0, 0x10($a2)
    ctx->pc = 0x27d0ecu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 16), (uint8_t)GPR_U32(ctx, 2));
label_27d0f0:
    // 0x27d0f0: 0x8e47000c  lw          $a3, 0xC($s2)
    ctx->pc = 0x27d0f0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_27d0f4:
    // 0x27d0f4: 0xc092544  jal         func_249510
label_27d0f8:
    if (ctx->pc == 0x27D0F8u) {
        ctx->pc = 0x27D0F8u;
            // 0x27d0f8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27D0FCu;
        goto label_27d0fc;
    }
    ctx->pc = 0x27D0F4u;
    SET_GPR_U32(ctx, 31, 0x27D0FCu);
    ctx->pc = 0x27D0F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D0F4u;
            // 0x27d0f8: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x249510u;
    if (runtime->hasFunction(0x249510u)) {
        auto targetFn = runtime->lookupFunction(0x249510u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D0FCu; }
        if (ctx->pc != 0x27D0FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00249510_0x249510(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D0FCu; }
        if (ctx->pc != 0x27D0FCu) { return; }
    }
    ctx->pc = 0x27D0FCu;
label_27d0fc:
    // 0x27d0fc: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27d0fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27d100:
    // 0x27d100: 0x8c26ea20  lw          $a2, -0x15E0($at)
    ctx->pc = 0x27d100u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961696)));
label_27d104:
    // 0x27d104: 0x8cc50028  lw          $a1, 0x28($a2)
    ctx->pc = 0x27d104u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 40)));
label_27d108:
    // 0x27d108: 0x8cc40014  lw          $a0, 0x14($a2)
    ctx->pc = 0x27d108u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 20)));
label_27d10c:
    // 0x27d10c: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x27d10cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
label_27d110:
    // 0x27d110: 0xa42021  addu        $a0, $a1, $a0
    ctx->pc = 0x27d110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
label_27d114:
    // 0x27d114: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x27d114u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
label_27d118:
    // 0x27d118: 0x14200003  bnez        $at, . + 4 + (0x3 << 2)
label_27d11c:
    if (ctx->pc == 0x27D11Cu) {
        ctx->pc = 0x27D120u;
        goto label_27d120;
    }
    ctx->pc = 0x27D118u;
    {
        const bool branch_taken_0x27d118 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d118) {
            ctx->pc = 0x27D128u;
            goto label_27d128;
        }
    }
    ctx->pc = 0x27D120u;
label_27d120:
    // 0x27d120: 0x10000002  b           . + 4 + (0x2 << 2)
label_27d124:
    if (ctx->pc == 0x27D124u) {
        ctx->pc = 0x27D124u;
            // 0x27d124: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27D128u;
        goto label_27d128;
    }
    ctx->pc = 0x27D120u;
    {
        const bool branch_taken_0x27d120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27D124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D120u;
            // 0x27d124: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d120) {
            ctx->pc = 0x27D12Cu;
            goto label_27d12c;
        }
    }
    ctx->pc = 0x27D128u;
label_27d128:
    // 0x27d128: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x27d128u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_27d12c:
    // 0x27d12c: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
label_27d130:
    if (ctx->pc == 0x27D130u) {
        ctx->pc = 0x27D134u;
        goto label_27d134;
    }
    ctx->pc = 0x27D12Cu;
    {
        const bool branch_taken_0x27d12c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d12c) {
            ctx->pc = 0x27D140u;
            goto label_27d140;
        }
    }
    ctx->pc = 0x27D134u;
label_27d134:
    // 0x27d134: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27d134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d138:
    // 0x27d138: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x27d138u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
label_27d13c:
    // 0x27d13c: 0x0  nop
    ctx->pc = 0x27d13cu;
    // NOP
label_27d140:
    // 0x27d140: 0x3c01006f  lui         $at, 0x6F
    ctx->pc = 0x27d140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)111 << 16));
label_27d144:
    // 0x27d144: 0x8c24ea20  lw          $a0, -0x15E0($at)
    ctx->pc = 0x27d144u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294961696)));
label_27d148:
    // 0x27d148: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x27d148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_27d14c:
    // 0x27d14c: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x27d14cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_27d150:
    // 0x27d150: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
label_27d154:
    if (ctx->pc == 0x27D154u) {
        ctx->pc = 0x27D158u;
        goto label_27d158;
    }
    ctx->pc = 0x27D150u;
    {
        const bool branch_taken_0x27d150 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x27d150) {
            ctx->pc = 0x27D1D8u;
            goto label_27d1d8;
        }
    }
    ctx->pc = 0x27D158u;
label_27d158:
    // 0x27d158: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x27d158u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_27d15c:
    // 0x27d15c: 0x26030010  addiu       $v1, $s0, 0x10
    ctx->pc = 0x27d15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
label_27d160:
    // 0x27d160: 0x831826  xor         $v1, $a0, $v1
    ctx->pc = 0x27d160u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 3));
label_27d164:
    // 0x27d164: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x27d164u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_27d168:
    // 0x27d168: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
label_27d16c:
    if (ctx->pc == 0x27D16Cu) {
        ctx->pc = 0x27D170u;
        goto label_27d170;
    }
    ctx->pc = 0x27D168u;
    {
        const bool branch_taken_0x27d168 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27d168) {
            ctx->pc = 0x27D190u;
            goto label_27d190;
        }
    }
    ctx->pc = 0x27D170u;
label_27d170:
    // 0x27d170: 0x8e44000c  lw          $a0, 0xC($s2)
    ctx->pc = 0x27d170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_27d174:
    // 0x27d174: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x27d174u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_27d178:
    // 0x27d178: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x27d178u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_27d17c:
    // 0x27d17c: 0x8e460018  lw          $a2, 0x18($s2)
    ctx->pc = 0x27d17cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_27d180:
    // 0x27d180: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x27d180u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_27d184:
    // 0x27d184: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x27d184u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_27d188:
    // 0x27d188: 0x320f809  jalr        $t9
label_27d18c:
    if (ctx->pc == 0x27D18Cu) {
        ctx->pc = 0x27D18Cu;
            // 0x27d18c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27D190u;
        goto label_27d190;
    }
    ctx->pc = 0x27D188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x27D190u);
        ctx->pc = 0x27D18Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D188u;
            // 0x27d18c: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x27D190u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x27D190u; }
            if (ctx->pc != 0x27D190u) { return; }
        }
        }
    }
    ctx->pc = 0x27D190u;
label_27d190:
    // 0x27d190: 0x3c037f7f  lui         $v1, 0x7F7F
    ctx->pc = 0x27d190u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32639 << 16));
label_27d194:
    // 0x27d194: 0xc6013030  lwc1        $f1, 0x3030($s0)
    ctx->pc = 0x27d194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 12336)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_27d198:
    // 0x27d198: 0x3463ffee  ori         $v1, $v1, 0xFFEE
    ctx->pc = 0x27d198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65518);
label_27d19c:
    // 0x27d19c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x27d19cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_27d1a0:
    // 0x27d1a0: 0x0  nop
    ctx->pc = 0x27d1a0u;
    // NOP
label_27d1a4:
    // 0x27d1a4: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x27d1a4u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
label_27d1a8:
    // 0x27d1a8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
label_27d1ac:
    if (ctx->pc == 0x27D1ACu) {
        ctx->pc = 0x27D1ACu;
            // 0x27d1ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x27D1B0u;
        goto label_27d1b0;
    }
    ctx->pc = 0x27D1A8u;
    {
        const bool branch_taken_0x27d1a8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x27D1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D1A8u;
            // 0x27d1ac: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27d1a8) {
            ctx->pc = 0x27D1B4u;
            goto label_27d1b4;
        }
    }
    ctx->pc = 0x27D1B0u;
label_27d1b0:
    // 0x27d1b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x27d1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27d1b4:
    // 0x27d1b4: 0x41e3c  dsll32      $v1, $a0, 24
    ctx->pc = 0x27d1b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 24));
label_27d1b8:
    // 0x27d1b8: 0x31e3f  dsra32      $v1, $v1, 24
    ctx->pc = 0x27d1b8u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 24));
label_27d1bc:
    // 0x27d1bc: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
label_27d1c0:
    if (ctx->pc == 0x27D1C0u) {
        ctx->pc = 0x27D1C4u;
        goto label_27d1c4;
    }
    ctx->pc = 0x27D1BCu;
    {
        const bool branch_taken_0x27d1bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x27d1bc) {
            ctx->pc = 0x27D1D8u;
            goto label_27d1d8;
        }
    }
    ctx->pc = 0x27D1C4u;
label_27d1c4:
    // 0x27d1c4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x27d1c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_27d1c8:
    // 0x27d1c8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x27d1c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_27d1cc:
    // 0x27d1cc: 0xc09f480  jal         func_27D200
label_27d1d0:
    if (ctx->pc == 0x27D1D0u) {
        ctx->pc = 0x27D1D0u;
            // 0x27d1d0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x27D1D4u;
        goto label_27d1d4;
    }
    ctx->pc = 0x27D1CCu;
    SET_GPR_U32(ctx, 31, 0x27D1D4u);
    ctx->pc = 0x27D1D0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x27D1CCu;
            // 0x27d1d0: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x27D200u;
    if (runtime->hasFunction(0x27D200u)) {
        auto targetFn = runtime->lookupFunction(0x27D200u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D1D4u; }
        if (ctx->pc != 0x27D1D4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0027D200_0x27d200(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x27D1D4u; }
        if (ctx->pc != 0x27D1D4u) { return; }
    }
    ctx->pc = 0x27D1D4u;
label_27d1d4:
    // 0x27d1d4: 0x0  nop
    ctx->pc = 0x27d1d4u;
    // NOP
label_27d1d8:
    // 0x27d1d8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x27d1d8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_27d1dc:
    // 0x27d1dc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27d1dcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_27d1e0:
    // 0x27d1e0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27d1e0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_27d1e4:
    // 0x27d1e4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27d1e4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_27d1e8:
    // 0x27d1e8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27d1e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_27d1ec:
    // 0x27d1ec: 0x3e00008  jr          $ra
label_27d1f0:
    if (ctx->pc == 0x27D1F0u) {
        ctx->pc = 0x27D1F0u;
            // 0x27d1f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->pc = 0x27D1F4u;
        goto label_27d1f4;
    }
    ctx->pc = 0x27D1ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27D1F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x27D1ECu;
            // 0x27d1f0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x27D1F4u;
label_27d1f4:
    // 0x27d1f4: 0x0  nop
    ctx->pc = 0x27d1f4u;
    // NOP
label_27d1f8:
    // 0x27d1f8: 0x0  nop
    ctx->pc = 0x27d1f8u;
    // NOP
label_27d1fc:
    // 0x27d1fc: 0x0  nop
    ctx->pc = 0x27d1fcu;
    // NOP
}
