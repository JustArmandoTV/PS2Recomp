#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00162100
// Address: 0x162100 - 0x162198
void sub_00162100_0x162100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00162100_0x162100");
#endif

    ctx->pc = 0x162100u;

    // 0x162100: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x162100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x162104: 0x14800006  bnez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x162104u;
    {
        const bool branch_taken_0x162104 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x162108u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162104u;
            // 0x162108: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162104) {
            ctx->pc = 0x162120u;
            goto label_162120;
        }
    }
    ctx->pc = 0x16210Cu;
    // 0x16210c: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x16210cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x162110: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x162110u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162114: 0x24842950  addiu       $a0, $a0, 0x2950
    ctx->pc = 0x162114u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10576));
    // 0x162118: 0x805856c  j           func_1615B0
    ctx->pc = 0x162118u;
    ctx->pc = 0x16211Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162118u;
            // 0x16211c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1615B0u;
    if (runtime->hasFunction(0x1615B0u)) {
        auto targetFn = runtime->lookupFunction(0x1615B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001615B0_0x1615b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x162120u;
label_162120:
    // 0x162120: 0x1ca00007  bgtz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x162120u;
    {
        const bool branch_taken_0x162120 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x162124u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162120u;
            // 0x162124: 0x51040  sll         $v0, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x162120) {
            ctx->pc = 0x162140u;
            goto label_162140;
        }
    }
    ctx->pc = 0x162128u;
    // 0x162128: 0x3c040063  lui         $a0, 0x63
    ctx->pc = 0x162128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)99 << 16));
    // 0x16212c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16212cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162130: 0x24842978  addiu       $a0, $a0, 0x2978
    ctx->pc = 0x162130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 10616));
    // 0x162134: 0x805856c  j           func_1615B0
    ctx->pc = 0x162134u;
    ctx->pc = 0x162138u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x162134u;
            // 0x162138: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1615B0u;
    if (runtime->hasFunction(0x1615B0u)) {
        auto targetFn = runtime->lookupFunction(0x1615B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001615B0_0x1615b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x16213Cu;
    // 0x16213c: 0x0  nop
    ctx->pc = 0x16213cu;
    // NOP
label_162140:
    // 0x162140: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x162140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x162144: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x162144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x162148: 0x34633280  ori         $v1, $v1, 0x3280
    ctx->pc = 0x162148u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12928);
    // 0x16214c: 0x21240  sll         $v0, $v0, 9
    ctx->pc = 0x16214cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 9));
    // 0x162150: 0x62001a  div         $zero, $v1, $v0
    ctx->pc = 0x162150u;
    { int32_t divisor = GPR_S32(ctx, 2);    int32_t dividend = GPR_S32(ctx, 3);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x162154: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x162154u;
    {
        const bool branch_taken_0x162154 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x162154) {
            ctx->pc = 0x162158u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x162154u;
            // 0x162158: 0x1cd  break       0, 7 (Delay Slot)
        runtime->handleBreak(rdram, ctx);
        ctx->in_delay_slot = false;
            ctx->pc = 0x16215Cu;
            goto label_16215c;
        }
    }
    ctx->pc = 0x16215Cu;
label_16215c:
    // 0x16215c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16215cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x162160: 0x1812  mflo        $v1
    ctx->pc = 0x162160u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x162164: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x162164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x162168: 0xac830018  sw          $v1, 0x18($a0)
    ctx->pc = 0x162168u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 3));
    // 0x16216c: 0x3e00008  jr          $ra
    ctx->pc = 0x16216Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x16216Cu;
            // 0x162170: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162174u;
    // 0x162174: 0x0  nop
    ctx->pc = 0x162174u;
    // NOP
    // 0x162178: 0x3e00008  jr          $ra
    ctx->pc = 0x162178u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16217Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162178u;
            // 0x16217c: 0x8c820028  lw          $v0, 0x28($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162180u;
    // 0x162180: 0x3e00008  jr          $ra
    ctx->pc = 0x162180u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162180u;
            // 0x162184: 0x8c82002c  lw          $v0, 0x2C($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 44)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162188u;
    // 0x162188: 0x3e00008  jr          $ra
    ctx->pc = 0x162188u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16218Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162188u;
            // 0x16218c: 0x8c820030  lw          $v0, 0x30($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162190u;
    // 0x162190: 0x3e00008  jr          $ra
    ctx->pc = 0x162190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x162194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x162190u;
            // 0x162194: 0x8c820034  lw          $v0, 0x34($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x162198u;
}
