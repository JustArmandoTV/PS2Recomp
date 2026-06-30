#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003F5640
// Address: 0x3f5640 - 0x3f56d0
void sub_003F5640_0x3f5640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F5640_0x3f5640");
#endif

    switch (ctx->pc) {
        case 0x3f5640u: goto label_3f5640;
        case 0x3f5644u: goto label_3f5644;
        case 0x3f5648u: goto label_3f5648;
        case 0x3f564cu: goto label_3f564c;
        case 0x3f5650u: goto label_3f5650;
        case 0x3f5654u: goto label_3f5654;
        case 0x3f5658u: goto label_3f5658;
        case 0x3f565cu: goto label_3f565c;
        case 0x3f5660u: goto label_3f5660;
        case 0x3f5664u: goto label_3f5664;
        case 0x3f5668u: goto label_3f5668;
        case 0x3f566cu: goto label_3f566c;
        case 0x3f5670u: goto label_3f5670;
        case 0x3f5674u: goto label_3f5674;
        case 0x3f5678u: goto label_3f5678;
        case 0x3f567cu: goto label_3f567c;
        case 0x3f5680u: goto label_3f5680;
        case 0x3f5684u: goto label_3f5684;
        case 0x3f5688u: goto label_3f5688;
        case 0x3f568cu: goto label_3f568c;
        case 0x3f5690u: goto label_3f5690;
        case 0x3f5694u: goto label_3f5694;
        case 0x3f5698u: goto label_3f5698;
        case 0x3f569cu: goto label_3f569c;
        case 0x3f56a0u: goto label_3f56a0;
        case 0x3f56a4u: goto label_3f56a4;
        case 0x3f56a8u: goto label_3f56a8;
        case 0x3f56acu: goto label_3f56ac;
        case 0x3f56b0u: goto label_3f56b0;
        case 0x3f56b4u: goto label_3f56b4;
        case 0x3f56b8u: goto label_3f56b8;
        case 0x3f56bcu: goto label_3f56bc;
        case 0x3f56c0u: goto label_3f56c0;
        case 0x3f56c4u: goto label_3f56c4;
        case 0x3f56c8u: goto label_3f56c8;
        case 0x3f56ccu: goto label_3f56cc;
        default: break;
    }

    ctx->pc = 0x3f5640u;

label_3f5640:
    // 0x3f5640: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x3f5640u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_3f5644:
    // 0x3f5644: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x3f5644u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_3f5648:
    // 0x3f5648: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x3f5648u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_3f564c:
    // 0x3f564c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x3f564cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_3f5650:
    // 0x3f5650: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f5650u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3f5654:
    // 0x3f5654: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x3f5654u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_3f5658:
    // 0x3f5658: 0xac800064  sw          $zero, 0x64($a0)
    ctx->pc = 0x3f5658u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 100), GPR_U32(ctx, 0));
label_3f565c:
    // 0x3f565c: 0x8c820078  lw          $v0, 0x78($a0)
    ctx->pc = 0x3f565cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 120)));
label_3f5660:
    // 0x3f5660: 0xac820060  sw          $v0, 0x60($a0)
    ctx->pc = 0x3f5660u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 96), GPR_U32(ctx, 2));
label_3f5664:
    // 0x3f5664: 0x9082007c  lbu         $v0, 0x7C($a0)
    ctx->pc = 0x3f5664u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 124)));
label_3f5668:
    // 0x3f5668: 0xa082005c  sb          $v0, 0x5C($a0)
    ctx->pc = 0x3f5668u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 92), (uint8_t)GPR_U32(ctx, 2));
label_3f566c:
    // 0x3f566c: 0x8c840084  lw          $a0, 0x84($a0)
    ctx->pc = 0x3f566cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 132)));
label_3f5670:
    // 0x3f5670: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_3f5674:
    if (ctx->pc == 0x3F5674u) {
        ctx->pc = 0x3F5674u;
            // 0x3f5674: 0xae400084  sw          $zero, 0x84($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 0));
        ctx->pc = 0x3F5678u;
        goto label_3f5678;
    }
    ctx->pc = 0x3F5670u;
    {
        const bool branch_taken_0x3f5670 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f5670) {
            ctx->pc = 0x3F5674u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5670u;
            // 0x3f5674: 0xae400084  sw          $zero, 0x84($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3F568Cu;
            goto label_3f568c;
        }
    }
    ctx->pc = 0x3F5678u;
label_3f5678:
    // 0x3f5678: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x3f5678u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_3f567c:
    // 0x3f567c: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x3f567cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_3f5680:
    // 0x3f5680: 0x320f809  jalr        $t9
label_3f5684:
    if (ctx->pc == 0x3F5684u) {
        ctx->pc = 0x3F5684u;
            // 0x3f5684: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x3F5688u;
        goto label_3f5688;
    }
    ctx->pc = 0x3F5680u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x3F5688u);
        ctx->pc = 0x3F5684u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F5680u;
            // 0x3f5684: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x3F5688u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x3F5688u; }
            if (ctx->pc != 0x3F5688u) { return; }
        }
        }
    }
    ctx->pc = 0x3F5688u;
label_3f5688:
    // 0x3f5688: 0xae400084  sw          $zero, 0x84($s2)
    ctx->pc = 0x3f5688u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 132), GPR_U32(ctx, 0));
label_3f568c:
    // 0x3f568c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3f568cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f5690:
    // 0x3f5690: 0x26500090  addiu       $s0, $s2, 0x90
    ctx->pc = 0x3f5690u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 144));
label_3f5694:
    // 0x3f5694: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3f5694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3f5698:
    // 0x3f5698: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f5698u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3f569c:
    // 0x3f569c: 0xc04a576  jal         func_1295D8
label_3f56a0:
    if (ctx->pc == 0x3F56A0u) {
        ctx->pc = 0x3F56A0u;
            // 0x3f56a0: 0x24060160  addiu       $a2, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->pc = 0x3F56A4u;
        goto label_3f56a4;
    }
    ctx->pc = 0x3F569Cu;
    SET_GPR_U32(ctx, 31, 0x3F56A4u);
    ctx->pc = 0x3F56A0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3F569Cu;
            // 0x3f56a0: 0x24060160  addiu       $a2, $zero, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F56A4u; }
        if (ctx->pc != 0x3F56A4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3F56A4u; }
        if (ctx->pc != 0x3F56A4u) { return; }
    }
    ctx->pc = 0x3F56A4u;
label_3f56a4:
    // 0x3f56a4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x3f56a4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_3f56a8:
    // 0x3f56a8: 0xa6000000  sh          $zero, 0x0($s0)
    ctx->pc = 0x3f56a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 0), (uint16_t)GPR_U32(ctx, 0));
label_3f56ac:
    // 0x3f56ac: 0x2a23000a  slti        $v1, $s1, 0xA
    ctx->pc = 0x3f56acu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)10) ? 1 : 0);
label_3f56b0:
    // 0x3f56b0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_3f56b4:
    if (ctx->pc == 0x3F56B4u) {
        ctx->pc = 0x3F56B4u;
            // 0x3f56b4: 0x26520160  addiu       $s2, $s2, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
        ctx->pc = 0x3F56B8u;
        goto label_3f56b8;
    }
    ctx->pc = 0x3F56B0u;
    {
        const bool branch_taken_0x3f56b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F56B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F56B0u;
            // 0x3f56b4: 0x26520160  addiu       $s2, $s2, 0x160 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 352));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f56b0) {
            ctx->pc = 0x3F5690u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_3f5690;
        }
    }
    ctx->pc = 0x3F56B8u;
label_3f56b8:
    // 0x3f56b8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x3f56b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_3f56bc:
    // 0x3f56bc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3f56bcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3f56c0:
    // 0x3f56c0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3f56c0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3f56c4:
    // 0x3f56c4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3f56c4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3f56c8:
    // 0x3f56c8: 0x3e00008  jr          $ra
label_3f56cc:
    if (ctx->pc == 0x3F56CCu) {
        ctx->pc = 0x3F56CCu;
            // 0x3f56cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x3F56D0u;
        goto label_fallthrough_0x3f56c8;
    }
    ctx->pc = 0x3F56C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F56CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3F56C8u;
            // 0x3f56cc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x3f56c8:
    ctx->pc = 0x3F56D0u;
}
