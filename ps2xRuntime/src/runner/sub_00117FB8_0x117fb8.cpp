#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00117FB8
// Address: 0x117fb8 - 0x1180e0
void sub_00117FB8_0x117fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00117FB8_0x117fb8");
#endif

    switch (ctx->pc) {
        case 0x117fe8u: goto label_117fe8;
        case 0x118000u: goto label_118000;
        case 0x118010u: goto label_118010;
        case 0x118060u: goto label_118060;
        case 0x1180bcu: goto label_1180bc;
        default: break;
    }

    ctx->pc = 0x117fb8u;

    // 0x117fb8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x117fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x117fbc: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x117fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x117fc0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x117fc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x117fc4: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x117fc4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117fc8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x117fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x117fcc: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x117fccu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117fd0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x117fd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x117fd4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x117fd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117fd8: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x117fd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x117fdc: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x117fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x117fe0: 0xc045968  jal         func_1165A0
    ctx->pc = 0x117FE0u;
    SET_GPR_U32(ctx, 31, 0x117FE8u);
    ctx->pc = 0x117FE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117FE0u;
            // 0x117fe4: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1165A0u;
    if (runtime->hasFunction(0x1165A0u)) {
        auto targetFn = runtime->lookupFunction(0x1165A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117FE8u; }
        if (ctx->pc != 0x117FE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165A0_0x1165a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x117FE8u; }
        if (ctx->pc != 0x117FE8u) { return; }
    }
    ctx->pc = 0x117FE8u;
label_117fe8:
    // 0x117fe8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x117fe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117fec: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x117fecu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ff0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x117ff0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ff4: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x117ff4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x117ff8: 0xc045faa  jal         func_117EA8
    ctx->pc = 0x117FF8u;
    SET_GPR_U32(ctx, 31, 0x118000u);
    ctx->pc = 0x117FFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x117FF8u;
            // 0x117ffc: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x117EA8u;
    if (runtime->hasFunction(0x117EA8u)) {
        auto targetFn = runtime->lookupFunction(0x117EA8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118000u; }
        if (ctx->pc != 0x118000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00117EA8_0x117ea8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118000u; }
        if (ctx->pc != 0x118000u) { return; }
    }
    ctx->pc = 0x118000u;
label_118000:
    // 0x118000: 0x12800003  beqz        $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x118000u;
    {
        const bool branch_taken_0x118000 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x118004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118000u;
            // 0x118004: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118000) {
            ctx->pc = 0x118010u;
            goto label_118010;
        }
    }
    ctx->pc = 0x118008u;
    // 0x118008: 0xc04597c  jal         func_1165F0
    ctx->pc = 0x118008u;
    SET_GPR_U32(ctx, 31, 0x118010u);
    ctx->pc = 0x1165F0u;
    if (runtime->hasFunction(0x1165F0u)) {
        auto targetFn = runtime->lookupFunction(0x1165F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118010u; }
        if (ctx->pc != 0x118010u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001165F0_0x1165f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118010u; }
        if (ctx->pc != 0x118010u) { return; }
    }
    ctx->pc = 0x118010u;
label_118010:
    // 0x118010: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x118010u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118014: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x118014u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x118018: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x118018u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11801c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11801cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x118020: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x118020u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x118024: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x118024u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x118028: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x118028u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11802c: 0x3e00008  jr          $ra
    ctx->pc = 0x11802Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x118030u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x11802Cu;
            // 0x118030: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x118034u;
    // 0x118034: 0x0  nop
    ctx->pc = 0x118034u;
    // NOP
    // 0x118038: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x118038u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11803c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11803cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x118040: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x118040u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x118044: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x118044u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118048: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x118048u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11804c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11804cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118050: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x118050u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x118054: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x118054u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x118058: 0xc04916a  jal         func_1245A8
    ctx->pc = 0x118058u;
    SET_GPR_U32(ctx, 31, 0x118060u);
    ctx->pc = 0x11805Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x118058u;
            // 0x11805c: 0x3c0508ca  lui         $a1, 0x8CA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2250 << 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1245A8u;
    if (runtime->hasFunction(0x1245A8u)) {
        auto targetFn = runtime->lookupFunction(0x1245A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118060u; }
        if (ctx->pc != 0x118060u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001245A8_0x1245a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x118060u; }
        if (ctx->pc != 0x118060u) { return; }
    }
    ctx->pc = 0x118060u;
label_118060:
    // 0x118060: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x118060u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x118064: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x118064u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x118068: 0x56000001  bnel        $s0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x118068u;
    {
        const bool branch_taken_0x118068 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x118068) {
            ctx->pc = 0x11806Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x118068u;
            // 0x11806c: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x118070u;
            goto label_118070;
        }
    }
    ctx->pc = 0x118070u;
label_118070:
    // 0x118070: 0x12400015  beqz        $s2, . + 4 + (0x15 << 2)
    ctx->pc = 0x118070u;
    {
        const bool branch_taken_0x118070 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x118074u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x118070u;
            // 0x118074: 0x3c0308ca  lui         $v1, 0x8CA (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2250 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118070) {
            ctx->pc = 0x1180C8u;
            goto label_1180c8;
        }
    }
    ctx->pc = 0x118078u;
    // 0x118078: 0x3c0508ca  lui         $a1, 0x8CA
    ctx->pc = 0x118078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2250 << 16));
    // 0x11807c: 0x430019  multu       $v0, $v1
    ctx->pc = 0x11807cu;
    { uint64_t result = (uint64_t)GPR_U32(ctx, 2) * (uint64_t)GPR_U32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x118080: 0x3012  mflo        $a2
    ctx->pc = 0x118080u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x118084: 0x1810  mfhi        $v1
    ctx->pc = 0x118084u;
    SET_GPR_U64(ctx, 3, ctx->hi);
    // 0x118088: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x118088u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x11808c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x11808cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x118090: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x118090u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x118094: 0x661825  or          $v1, $v1, $a2
    ctx->pc = 0x118094u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x118098: 0x223182f  dsubu       $v1, $s1, $v1
    ctx->pc = 0x118098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) - GPR_U64(ctx, 3));
    // 0x11809c: 0x31178  dsll        $v0, $v1, 5
    ctx->pc = 0x11809cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) << 5);
    // 0x1180a0: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x1180a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x1180a4: 0x221b8  dsll        $a0, $v0, 6
    ctx->pc = 0x1180a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << 6);
    // 0x1180a8: 0x82202f  dsubu       $a0, $a0, $v0
    ctx->pc = 0x1180a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 2));
    // 0x1180ac: 0x420f8  dsll        $a0, $a0, 3
    ctx->pc = 0x1180acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 3);
    // 0x1180b0: 0x83202d  daddu       $a0, $a0, $v1
    ctx->pc = 0x1180b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 3));
    // 0x1180b4: 0xc04916a  jal         func_1245A8
    ctx->pc = 0x1180B4u;
    SET_GPR_U32(ctx, 31, 0x1180BCu);
    ctx->pc = 0x1180B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1180B4u;
            // 0x1180b8: 0x421b8  dsll        $a0, $a0, 6 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 6);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1245A8u;
    if (runtime->hasFunction(0x1245A8u)) {
        auto targetFn = runtime->lookupFunction(0x1245A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1180BCu; }
        if (ctx->pc != 0x1180BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001245A8_0x1245a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1180BCu; }
        if (ctx->pc != 0x1180BCu) { return; }
    }
    ctx->pc = 0x1180BCu;
label_1180bc:
    // 0x1180bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1180bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1180c0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1180c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1180c4: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x1180c4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_1180c8:
    // 0x1180c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1180c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1180cc: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1180ccu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1180d0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1180d0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1180d4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1180d4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1180d8: 0x3e00008  jr          $ra
    ctx->pc = 0x1180D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1180DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1180D8u;
            // 0x1180dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1180E0u;
}
