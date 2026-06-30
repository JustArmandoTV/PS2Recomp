#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003181D0
// Address: 0x3181d0 - 0x3182d0
void sub_003181D0_0x3181d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003181D0_0x3181d0");
#endif

    switch (ctx->pc) {
        case 0x318208u: goto label_318208;
        case 0x318228u: goto label_318228;
        case 0x31824cu: goto label_31824c;
        case 0x318278u: goto label_318278;
        default: break;
    }

    ctx->pc = 0x3181d0u;

    // 0x3181d0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x3181d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x3181d4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3181d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x3181d8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3181d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3181dc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3181dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x3181e0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3181e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x3181e4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3181e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x3181e8: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x3181e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3181ec: 0x10600030  beqz        $v1, . + 4 + (0x30 << 2)
    ctx->pc = 0x3181ECu;
    {
        const bool branch_taken_0x3181ec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3181F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3181ECu;
            // 0x3181f0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3181ec) {
            ctx->pc = 0x3182B0u;
            goto label_3182b0;
        }
    }
    ctx->pc = 0x3181F4u;
    // 0x3181f4: 0x8c630020  lw          $v1, 0x20($v1)
    ctx->pc = 0x3181f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x3181f8: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x3181f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x3181fc: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3181fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x318200: 0xc040138  jal         func_1004E0
    ctx->pc = 0x318200u;
    SET_GPR_U32(ctx, 31, 0x318208u);
    ctx->pc = 0x318204u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318200u;
            // 0x318204: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318208u; }
        if (ctx->pc != 0x318208u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318208u; }
        if (ctx->pc != 0x318208u) { return; }
    }
    ctx->pc = 0x318208u;
label_318208:
    // 0x318208: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x318208u;
    {
        const bool branch_taken_0x318208 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31820Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318208u;
            // 0x31820c: 0xae62000c  sw          $v0, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318208) {
            ctx->pc = 0x3182B0u;
            goto label_3182b0;
        }
    }
    ctx->pc = 0x318210u;
    // 0x318210: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x318210u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x318214: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x318214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x318218: 0x10600025  beqz        $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x318218u;
    {
        const bool branch_taken_0x318218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x31821Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x318218u;
            // 0x31821c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x318218) {
            ctx->pc = 0x3182B0u;
            goto label_3182b0;
        }
    }
    ctx->pc = 0x318220u;
    // 0x318220: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x318220u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x318224: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x318224u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_318228:
    // 0x318228: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x318228u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x31822c: 0x8e64000c  lw          $a0, 0xC($s3)
    ctx->pc = 0x31822cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x318230: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x318230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x318234: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x318234u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x318238: 0x94630000  lhu         $v1, 0x0($v1)
    ctx->pc = 0x318238u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x31823c: 0x902021  addu        $a0, $a0, $s0
    ctx->pc = 0x31823cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x318240: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x318240u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x318244: 0xc04cb1c  jal         func_132C70
    ctx->pc = 0x318244u;
    SET_GPR_U32(ctx, 31, 0x31824Cu);
    ctx->pc = 0x318248u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318244u;
            // 0x318248: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31824Cu; }
        if (ctx->pc != 0x31824Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x31824Cu; }
        if (ctx->pc != 0x31824Cu) { return; }
    }
    ctx->pc = 0x31824Cu;
label_31824c:
    // 0x31824c: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x31824cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x318250: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x318250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x318254: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x318254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x318258: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x318258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x31825c: 0x8ca20008  lw          $v0, 0x8($a1)
    ctx->pc = 0x31825cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x318260: 0x2484000c  addiu       $a0, $a0, 0xC
    ctx->pc = 0x318260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 12));
    // 0x318264: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x318264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x318268: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x318268u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x31826c: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x31826cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x318270: 0xc04cb1c  jal         func_132C70
    ctx->pc = 0x318270u;
    SET_GPR_U32(ctx, 31, 0x318278u);
    ctx->pc = 0x318274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x318270u;
            // 0x318274: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132C70u;
    if (runtime->hasFunction(0x132C70u)) {
        auto targetFn = runtime->lookupFunction(0x132C70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318278u; }
        if (ctx->pc != 0x318278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132C70_0x132c70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x318278u; }
        if (ctx->pc != 0x318278u) { return; }
    }
    ctx->pc = 0x318278u;
label_318278:
    // 0x318278: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x318278u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x31827c: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x31827cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x318280: 0x8e63000c  lw          $v1, 0xC($s3)
    ctx->pc = 0x318280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x318284: 0x8c84000c  lw          $a0, 0xC($a0)
    ctx->pc = 0x318284u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x318288: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x318288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x31828c: 0x2610001c  addiu       $s0, $s0, 0x1C
    ctx->pc = 0x31828cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 28));
    // 0x318290: 0x912021  addu        $a0, $a0, $s1
    ctx->pc = 0x318290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x318294: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x318294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x318298: 0xe4600018  swc1        $f0, 0x18($v1)
    ctx->pc = 0x318298u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 24), bits); }
    // 0x31829c: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x31829cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3182a0: 0x8ca30020  lw          $v1, 0x20($a1)
    ctx->pc = 0x3182a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x3182a4: 0x1643ffe0  bne         $s2, $v1, . + 4 + (-0x20 << 2)
    ctx->pc = 0x3182A4u;
    {
        const bool branch_taken_0x3182a4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 3));
        ctx->pc = 0x3182A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3182A4u;
            // 0x3182a8: 0x26310040  addiu       $s1, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3182a4) {
            ctx->pc = 0x318228u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_318228;
        }
    }
    ctx->pc = 0x3182ACu;
    // 0x3182ac: 0x0  nop
    ctx->pc = 0x3182acu;
    // NOP
label_3182b0:
    // 0x3182b0: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3182b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3182b4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3182b4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3182b8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3182b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3182bc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3182bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3182c0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3182c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3182c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3182C4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3182C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3182C4u;
            // 0x3182c8: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3182CCu;
    // 0x3182cc: 0x0  nop
    ctx->pc = 0x3182ccu;
    // NOP
}
