#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015A030
// Address: 0x15a030 - 0x15a1c0
void sub_0015A030_0x15a030(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015A030_0x15a030");
#endif

    switch (ctx->pc) {
        case 0x15a070u: goto label_15a070;
        case 0x15a0b4u: goto label_15a0b4;
        case 0x15a0d0u: goto label_15a0d0;
        case 0x15a0ecu: goto label_15a0ec;
        case 0x15a0f4u: goto label_15a0f4;
        case 0x15a108u: goto label_15a108;
        case 0x15a118u: goto label_15a118;
        case 0x15a130u: goto label_15a130;
        case 0x15a14cu: goto label_15a14c;
        case 0x15a16cu: goto label_15a16c;
        case 0x15a184u: goto label_15a184;
        case 0x15a18cu: goto label_15a18c;
        case 0x15a194u: goto label_15a194;
        default: break;
    }

    ctx->pc = 0x15a030u;

    // 0x15a030: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x15a030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x15a034: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x15a034u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x15a038: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x15a038u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x15a03c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x15a03cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x15a040: 0x120b02d  daddu       $s6, $t1, $zero
    ctx->pc = 0x15a040u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a044: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x15a044u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15a048: 0xe0a82d  daddu       $s5, $a3, $zero
    ctx->pc = 0x15a048u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a04c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15a04cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x15a050: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x15a050u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a054: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x15a054u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x15a058: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15a058u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15a05c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x15a05cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a060: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x15a060u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x15a064: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x15a064u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a068: 0xc056420  jal         func_159080
    ctx->pc = 0x15A068u;
    SET_GPR_U32(ctx, 31, 0x15A070u);
    ctx->pc = 0x15A06Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A068u;
            // 0x15a06c: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159080u;
    if (runtime->hasFunction(0x159080u)) {
        auto targetFn = runtime->lookupFunction(0x159080u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A070u; }
        if (ctx->pc != 0x15A070u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00159080_0x159080(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A070u; }
        if (ctx->pc != 0x15A070u) { return; }
    }
    ctx->pc = 0x15A070u;
label_15a070:
    // 0x15a070: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x15a070u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a074: 0x16600002  bnez        $s3, . + 4 + (0x2 << 2)
    ctx->pc = 0x15A074u;
    {
        const bool branch_taken_0x15a074 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a074) {
            ctx->pc = 0x15A080u;
            goto label_15a080;
        }
    }
    ctx->pc = 0x15A07Cu;
    // 0x15a07c: 0x240982d  daddu       $s3, $s2, $zero
    ctx->pc = 0x15a07cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_15a080:
    // 0x15a080: 0x5220000a  beql        $s1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x15A080u;
    {
        const bool branch_taken_0x15a080 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a080) {
            ctx->pc = 0x15A084u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A080u;
            // 0x15a084: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A0ACu;
            goto label_15a0ac;
        }
    }
    ctx->pc = 0x15A088u;
    // 0x15a088: 0x96220000  lhu         $v0, 0x0($s1)
    ctx->pc = 0x15a088u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x15a08c: 0xa6020008  sh          $v0, 0x8($s0)
    ctx->pc = 0x15a08cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x15a090: 0x96220004  lhu         $v0, 0x4($s1)
    ctx->pc = 0x15a090u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x15a094: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x15a094u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x15a098: 0x96220006  lhu         $v0, 0x6($s1)
    ctx->pc = 0x15a098u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x15a09c: 0xa602000e  sh          $v0, 0xE($s0)
    ctx->pc = 0x15a09cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 14), (uint16_t)GPR_U32(ctx, 2));
    // 0x15a0a0: 0x96220002  lhu         $v0, 0x2($s1)
    ctx->pc = 0x15a0a0u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x15a0a4: 0xa602000a  sh          $v0, 0xA($s0)
    ctx->pc = 0x15a0a4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 10), (uint16_t)GPR_U32(ctx, 2));
    // 0x15a0a8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a0a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15a0ac:
    // 0x15a0ac: 0xc056584  jal         func_159610
    ctx->pc = 0x15A0ACu;
    SET_GPR_U32(ctx, 31, 0x15A0B4u);
    ctx->pc = 0x159610u;
    if (runtime->hasFunction(0x159610u)) {
        auto targetFn = runtime->lookupFunction(0x159610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A0B4u; }
        if (ctx->pc != 0x15A0B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00159610_0x159610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A0B4u; }
        if (ctx->pc != 0x15A0B4u) { return; }
    }
    ctx->pc = 0x15A0B4u;
label_15a0b4:
    // 0x15a0b4: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x15a0b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x15a0b8: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x15a0b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15a0bc: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x15a0bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x15a0c0: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x15a0c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x15a0c4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x15a0c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x15a0c8: 0xc04a1c2  jal         func_128708
    ctx->pc = 0x15A0C8u;
    SET_GPR_U32(ctx, 31, 0x15A0D0u);
    ctx->pc = 0x15A0CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A0C8u;
            // 0x15a0cc: 0x244500b0  addiu       $a1, $v0, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128708u;
    if (runtime->hasFunction(0x128708u)) {
        auto targetFn = runtime->lookupFunction(0x128708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A0D0u; }
        if (ctx->pc != 0x15A0D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128708_0x128708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A0D0u; }
        if (ctx->pc != 0x15A0D0u) { return; }
    }
    ctx->pc = 0x15A0D0u;
label_15a0d0:
    // 0x15a0d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x15a0d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a0d4: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x15A0D4u;
    {
        const bool branch_taken_0x15a0d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x15A0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A0D4u;
            // 0x15a0d8: 0xafa2008c  sw          $v0, 0x8C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 140), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a0d4) {
            ctx->pc = 0x15A0E4u;
            goto label_15a0e4;
        }
    }
    ctx->pc = 0x15A0DCu;
    // 0x15a0dc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x15A0DCu;
    {
        const bool branch_taken_0x15a0dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A0E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A0DCu;
            // 0x15a0e0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a0dc) {
            ctx->pc = 0x15A198u;
            goto label_15a198;
        }
    }
    ctx->pc = 0x15A0E4u;
label_15a0e4:
    // 0x15a0e4: 0xc05646c  jal         func_1591B0
    ctx->pc = 0x15A0E4u;
    SET_GPR_U32(ctx, 31, 0x15A0ECu);
    ctx->pc = 0x15A0E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A0E4u;
            // 0x15a0e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1591B0u;
    if (runtime->hasFunction(0x1591B0u)) {
        auto targetFn = runtime->lookupFunction(0x1591B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A0ECu; }
        if (ctx->pc != 0x15A0ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001591B0_0x1591b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A0ECu; }
        if (ctx->pc != 0x15A0ECu) { return; }
    }
    ctx->pc = 0x15A0ECu;
label_15a0ec:
    // 0x15a0ec: 0xc0562e0  jal         func_158B80
    ctx->pc = 0x15A0ECu;
    SET_GPR_U32(ctx, 31, 0x15A0F4u);
    ctx->pc = 0x15A0F0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A0ECu;
            // 0x15a0f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x158B80u;
    if (runtime->hasFunction(0x158B80u)) {
        auto targetFn = runtime->lookupFunction(0x158B80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A0F4u; }
        if (ctx->pc != 0x15A0F4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00158B80_0x158b80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A0F4u; }
        if (ctx->pc != 0x15A0F4u) { return; }
    }
    ctx->pc = 0x15A0F4u;
label_15a0f4:
    // 0x15a0f4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x15a0f4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a0f8: 0x56200005  bnel        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x15A0F8u;
    {
        const bool branch_taken_0x15a0f8 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x15a0f8) {
            ctx->pc = 0x15A0FCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A0F8u;
            // 0x15a0fc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A110u;
            goto label_15a110;
        }
    }
    ctx->pc = 0x15A100u;
    // 0x15a100: 0xc04a246  jal         func_128918
    ctx->pc = 0x15A100u;
    SET_GPR_U32(ctx, 31, 0x15A108u);
    ctx->pc = 0x15A104u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A100u;
            // 0x15a104: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128918u;
    if (runtime->hasFunction(0x128918u)) {
        auto targetFn = runtime->lookupFunction(0x128918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A108u; }
        if (ctx->pc != 0x15A108u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128918_0x128918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A108u; }
        if (ctx->pc != 0x15A108u) { return; }
    }
    ctx->pc = 0x15A108u;
label_15a108:
    // 0x15a108: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x15A108u;
    {
        const bool branch_taken_0x15a108 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A10Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A108u;
            // 0x15a10c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a108) {
            ctx->pc = 0x15A198u;
            goto label_15a198;
        }
    }
    ctx->pc = 0x15A110u;
label_15a110:
    // 0x15a110: 0xc056964  jal         func_15A590
    ctx->pc = 0x15A110u;
    SET_GPR_U32(ctx, 31, 0x15A118u);
    ctx->pc = 0x15A590u;
    if (runtime->hasFunction(0x15A590u)) {
        auto targetFn = runtime->lookupFunction(0x15A590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A118u; }
        if (ctx->pc != 0x15A118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015A590_0x15a590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A118u; }
        if (ctx->pc != 0x15A118u) { return; }
    }
    ctx->pc = 0x15A118u;
label_15a118:
    // 0x15a118: 0x5040000e  beql        $v0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x15A118u;
    {
        const bool branch_taken_0x15a118 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x15a118) {
            ctx->pc = 0x15A11Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15A118u;
            // 0x15a11c: 0x2a0402d  daddu       $t0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15A154u;
            goto label_15a154;
        }
    }
    ctx->pc = 0x15A120u;
    // 0x15a120: 0x2c0302d  daddu       $a2, $s6, $zero
    ctx->pc = 0x15a120u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a124: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x15a124u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x15a128: 0xc056978  jal         func_15A5E0
    ctx->pc = 0x15A128u;
    SET_GPR_U32(ctx, 31, 0x15A130u);
    ctx->pc = 0x15A12Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A128u;
            // 0x15a12c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15A5E0u;
    if (runtime->hasFunction(0x15A5E0u)) {
        auto targetFn = runtime->lookupFunction(0x15A5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A130u; }
        if (ctx->pc != 0x15A130u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015A5E0_0x15a5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A130u; }
        if (ctx->pc != 0x15A130u) { return; }
    }
    ctx->pc = 0x15A130u;
label_15a130:
    // 0x15a130: 0x8fa60080  lw          $a2, 0x80($sp)
    ctx->pc = 0x15a130u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x15a134: 0x2a0402d  daddu       $t0, $s5, $zero
    ctx->pc = 0x15a134u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a138: 0x8fa70084  lw          $a3, 0x84($sp)
    ctx->pc = 0x15a138u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x15a13c: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x15a13cu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a140: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a140u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a144: 0xc0564a4  jal         func_159290
    ctx->pc = 0x15A144u;
    SET_GPR_U32(ctx, 31, 0x15A14Cu);
    ctx->pc = 0x15A148u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A144u;
            // 0x15a148: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159290u;
    if (runtime->hasFunction(0x159290u)) {
        auto targetFn = runtime->lookupFunction(0x159290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A14Cu; }
        if (ctx->pc != 0x15A14Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00159290_0x159290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A14Cu; }
        if (ctx->pc != 0x15A14Cu) { return; }
    }
    ctx->pc = 0x15A14Cu;
label_15a14c:
    // 0x15a14c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x15A14Cu;
    {
        const bool branch_taken_0x15a14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15A150u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A14Cu;
            // 0x15a150: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15a14c) {
            ctx->pc = 0x15A170u;
            goto label_15a170;
        }
    }
    ctx->pc = 0x15A154u;
label_15a154:
    // 0x15a154: 0x280482d  daddu       $t1, $s4, $zero
    ctx->pc = 0x15a154u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a158: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15a158u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a15c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x15a15cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a160: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x15a160u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a164: 0xc0564a4  jal         func_159290
    ctx->pc = 0x15A164u;
    SET_GPR_U32(ctx, 31, 0x15A16Cu);
    ctx->pc = 0x15A168u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A164u;
            // 0x15a168: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159290u;
    if (runtime->hasFunction(0x159290u)) {
        auto targetFn = runtime->lookupFunction(0x159290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A16Cu; }
        if (ctx->pc != 0x15A16Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00159290_0x159290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A16Cu; }
        if (ctx->pc != 0x15A16Cu) { return; }
    }
    ctx->pc = 0x15A16Cu;
label_15a16c:
    // 0x15a16c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x15a16cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_15a170:
    // 0x15a170: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x15a170u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a174: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x15a174u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a178: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15a178u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15a17c: 0xc0565e4  jal         func_159790
    ctx->pc = 0x15A17Cu;
    SET_GPR_U32(ctx, 31, 0x15A184u);
    ctx->pc = 0x15A180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A17Cu;
            // 0x15a180: 0x27a5008c  addiu       $a1, $sp, 0x8C (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 140));
        ctx->in_delay_slot = false;
    ctx->pc = 0x159790u;
    if (runtime->hasFunction(0x159790u)) {
        auto targetFn = runtime->lookupFunction(0x159790u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A184u; }
        if (ctx->pc != 0x15A184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00159790_0x159790(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A184u; }
        if (ctx->pc != 0x15A184u) { return; }
    }
    ctx->pc = 0x15A184u;
label_15a184:
    // 0x15a184: 0xc0570ac  jal         func_15C2B0
    ctx->pc = 0x15A184u;
    SET_GPR_U32(ctx, 31, 0x15A18Cu);
    ctx->pc = 0x15A188u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A184u;
            // 0x15a188: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15C2B0u;
    if (runtime->hasFunction(0x15C2B0u)) {
        auto targetFn = runtime->lookupFunction(0x15C2B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A18Cu; }
        if (ctx->pc != 0x15A18Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015C2B0_0x15c2b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A18Cu; }
        if (ctx->pc != 0x15A18Cu) { return; }
    }
    ctx->pc = 0x15A18Cu;
label_15a18c:
    // 0x15a18c: 0xc04a246  jal         func_128918
    ctx->pc = 0x15A18Cu;
    SET_GPR_U32(ctx, 31, 0x15A194u);
    ctx->pc = 0x15A190u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15A18Cu;
            // 0x15a190: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x128918u;
    if (runtime->hasFunction(0x128918u)) {
        auto targetFn = runtime->lookupFunction(0x128918u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A194u; }
        if (ctx->pc != 0x15A194u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00128918_0x128918(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15A194u; }
        if (ctx->pc != 0x15A194u) { return; }
    }
    ctx->pc = 0x15A194u;
label_15a194:
    // 0x15a194: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15a194u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_15a198:
    // 0x15a198: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x15a198u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x15a19c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x15a19cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15a1a0: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x15a1a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15a1a4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x15a1a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15a1a8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x15a1a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15a1ac: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x15a1acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15a1b0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x15a1b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15a1b4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x15a1b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15a1b8: 0x3e00008  jr          $ra
    ctx->pc = 0x15A1B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15A1BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15A1B8u;
            // 0x15a1bc: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15A1C0u;
}
