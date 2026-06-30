#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001696E8
// Address: 0x1696e8 - 0x169780
void sub_001696E8_0x1696e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001696E8_0x1696e8");
#endif

    switch (ctx->pc) {
        case 0x1696fcu: goto label_1696fc;
        case 0x169718u: goto label_169718;
        case 0x169734u: goto label_169734;
        default: break;
    }

    ctx->pc = 0x1696e8u;

    // 0x1696e8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1696e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1696ec: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1696ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1696f0: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1696f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x1696f4: 0xc05a5a2  jal         func_169688
    ctx->pc = 0x1696F4u;
    SET_GPR_U32(ctx, 31, 0x1696FCu);
    ctx->pc = 0x169688u;
    if (runtime->hasFunction(0x169688u)) {
        auto targetFn = runtime->lookupFunction(0x169688u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1696FCu; }
        if (ctx->pc != 0x1696FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00169688_0x169688(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1696FCu; }
        if (ctx->pc != 0x1696FCu) { return; }
    }
    ctx->pc = 0x1696FCu;
label_1696fc:
    // 0x1696fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1696fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x169700: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x169700u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x169704: 0x248435e8  addiu       $a0, $a0, 0x35E8
    ctx->pc = 0x169704u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13800));
    // 0x169708: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x169708u;
    {
        const bool branch_taken_0x169708 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x16970Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169708u;
            // 0x16970c: 0x24050100  addiu       $a1, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169708) {
            ctx->pc = 0x16972Cu;
            goto label_16972c;
        }
    }
    ctx->pc = 0x169710u;
    // 0x169710: 0xc05c1e8  jal         func_1707A0
    ctx->pc = 0x169710u;
    SET_GPR_U32(ctx, 31, 0x169718u);
    ctx->pc = 0x169714u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x169710u;
            // 0x169714: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1707A0u;
    if (runtime->hasFunction(0x1707A0u)) {
        auto targetFn = runtime->lookupFunction(0x1707A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169718u; }
        if (ctx->pc != 0x169718u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001707A0_0x1707a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169718u; }
        if (ctx->pc != 0x169718u) { return; }
    }
    ctx->pc = 0x169718u;
label_169718:
    // 0x169718: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x169718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x16971c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16971cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x169720: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x169720u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x169724: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x169724u;
    {
        const bool branch_taken_0x169724 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x169728u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169724u;
            // 0x169728: 0x24843620  addiu       $a0, $a0, 0x3620 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 13856));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169724) {
            ctx->pc = 0x169740u;
            goto label_169740;
        }
    }
    ctx->pc = 0x16972Cu;
label_16972c:
    // 0x16972c: 0xc059f4e  jal         func_167D38
    ctx->pc = 0x16972Cu;
    SET_GPR_U32(ctx, 31, 0x169734u);
    ctx->pc = 0x167D38u;
    if (runtime->hasFunction(0x167D38u)) {
        auto targetFn = runtime->lookupFunction(0x167D38u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169734u; }
        if (ctx->pc != 0x169734u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00167D38_0x167d38(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x169734u; }
        if (ctx->pc != 0x169734u) { return; }
    }
    ctx->pc = 0x169734u;
label_169734:
    // 0x169734: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x169734u;
    {
        const bool branch_taken_0x169734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x169738u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169734u;
            // 0x169738: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x169734) {
            ctx->pc = 0x16976Cu;
            goto label_16976c;
        }
    }
    ctx->pc = 0x16973Cu;
    // 0x16973c: 0x0  nop
    ctx->pc = 0x16973cu;
    // NOP
label_169740:
    // 0x169740: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x169740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x169744: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x169744u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x169748: 0xa2030001  sb          $v1, 0x1($s0)
    ctx->pc = 0x169748u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x16974c: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x16974cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x169750: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x169750u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x169754: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x169754u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x169758: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x169758u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x16975c: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x16975cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x169760: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x169760u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x169764: 0xae020028  sw          $v0, 0x28($s0)
    ctx->pc = 0x169764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 40), GPR_U32(ctx, 2));
    // 0x169768: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x169768u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_16976c:
    // 0x16976c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x16976cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x169770: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x169770u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x169774: 0x3e00008  jr          $ra
    ctx->pc = 0x169774u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x169778u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x169774u;
            // 0x169778: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x16977Cu;
    // 0x16977c: 0x0  nop
    ctx->pc = 0x16977cu;
    // NOP
}
