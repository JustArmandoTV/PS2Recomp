#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0016A2E8
// Address: 0x16a2e8 - 0x16a378
void sub_0016A2E8_0x16a2e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A2E8_0x16a2e8");
#endif

    switch (ctx->pc) {
        case 0x16a340u: goto label_16a340;
        case 0x16a35cu: goto label_16a35c;
        default: break;
    }

    ctx->pc = 0x16a2e8u;

    // 0x16a2e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x16a2e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x16a2ec: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x16a2ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a2f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x16a2f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x16a2f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x16a2f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a2f8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x16a2f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x16a2fc: 0x16000004  bnez        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A2FCu;
    {
        const bool branch_taken_0x16a2fc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x16A300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A2FCu;
            // 0x16a300: 0xc0182d  daddu       $v1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a2fc) {
            ctx->pc = 0x16A310u;
            goto label_16a310;
        }
    }
    ctx->pc = 0x16A304u;
    // 0x16a304: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16a304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x16a308: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x16A308u;
    {
        const bool branch_taken_0x16a308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A30Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A308u;
            // 0x16a30c: 0x24843738  addiu       $a0, $a0, 0x3738 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14136));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a308) {
            ctx->pc = 0x16A338u;
            goto label_16a338;
        }
    }
    ctx->pc = 0x16A310u;
label_16a310:
    // 0x16a310: 0x4410005  bgez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x16A310u;
    {
        const bool branch_taken_0x16a310 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x16a310) {
            ctx->pc = 0x16A328u;
            goto label_16a328;
        }
    }
    ctx->pc = 0x16A318u;
    // 0x16a318: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16a318u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x16a31c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x16A31Cu;
    {
        const bool branch_taken_0x16a31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A31Cu;
            // 0x16a320: 0x24843760  addiu       $a0, $a0, 0x3760 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a31c) {
            ctx->pc = 0x16A338u;
            goto label_16a338;
        }
    }
    ctx->pc = 0x16A324u;
    // 0x16a324: 0x0  nop
    ctx->pc = 0x16a324u;
    // NOP
label_16a328:
    // 0x16a328: 0x54600007  bnel        $v1, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x16A328u;
    {
        const bool branch_taken_0x16a328 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x16a328) {
            ctx->pc = 0x16A32Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16A328u;
            // 0x16a32c: 0x82070001  lb          $a3, 0x1($s0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x16A348u;
            goto label_16a348;
        }
    }
    ctx->pc = 0x16A330u;
    // 0x16a330: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16a330u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x16a334: 0x24843790  addiu       $a0, $a0, 0x3790
    ctx->pc = 0x16a334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 14224));
label_16a338:
    // 0x16a338: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x16A338u;
    SET_GPR_U32(ctx, 31, 0x16A340u);
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A340u; }
        if (ctx->pc != 0x16A340u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A340u; }
        if (ctx->pc != 0x16A340u) { return; }
    }
    ctx->pc = 0x16A340u;
label_16a340:
    // 0x16a340: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x16A340u;
    {
        const bool branch_taken_0x16a340 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A340u;
            // 0x16a344: 0x2402fffd  addiu       $v0, $zero, -0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a340) {
            ctx->pc = 0x16A364u;
            goto label_16a364;
        }
    }
    ctx->pc = 0x16A348u;
label_16a348:
    // 0x16a348: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x16a348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x16a34c: 0x10e30005  beq         $a3, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x16A34Cu;
    {
        const bool branch_taken_0x16a34c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        ctx->pc = 0x16A350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A34Cu;
            // 0x16a350: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a34c) {
            ctx->pc = 0x16A364u;
            goto label_16a364;
        }
    }
    ctx->pc = 0x16A354u;
    // 0x16a354: 0xc05a864  jal         func_16A190
    ctx->pc = 0x16A354u;
    SET_GPR_U32(ctx, 31, 0x16A35Cu);
    ctx->pc = 0x16A190u;
    if (runtime->hasFunction(0x16A190u)) {
        auto targetFn = runtime->lookupFunction(0x16A190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A35Cu; }
        if (ctx->pc != 0x16A35Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A190_0x16a190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x16A35Cu; }
        if (ctx->pc != 0x16A35Cu) { return; }
    }
    ctx->pc = 0x16A35Cu;
label_16a35c:
    // 0x16a35c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x16a35cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16a360: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x16a360u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
label_16a364:
    // 0x16a364: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16a364u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a368: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x16a368u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x16a36c: 0x3e00008  jr          $ra
    ctx->pc = 0x16A36Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A370u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16A36Cu;
            // 0x16a370: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16A374u;
    // 0x16a374: 0x0  nop
    ctx->pc = 0x16a374u;
    // NOP
}
