#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00565960
// Address: 0x565960 - 0x5659f0
void sub_00565960_0x565960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00565960_0x565960");
#endif

    switch (ctx->pc) {
        case 0x565988u: goto label_565988;
        case 0x565998u: goto label_565998;
        default: break;
    }

    ctx->pc = 0x565960u;

    // 0x565960: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x565960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x565964: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x565964u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x565968: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x565968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x56596c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x56596cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x565970: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x565970u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x565974: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x565974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x565978: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x565978u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x56597c: 0x2624006c  addiu       $a0, $s1, 0x6C
    ctx->pc = 0x56597cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 108));
    // 0x565980: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x565980u;
    SET_GPR_U32(ctx, 31, 0x565988u);
    ctx->pc = 0x565984u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x565980u;
            // 0x565984: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565988u; }
        if (ctx->pc != 0x565988u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x565988u; }
        if (ctx->pc != 0x565988u) { return; }
    }
    ctx->pc = 0x565988u;
label_565988:
    // 0x565988: 0xa220007c  sb          $zero, 0x7C($s1)
    ctx->pc = 0x565988u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 124), (uint8_t)GPR_U32(ctx, 0));
    // 0x56598c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x56598cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x565990: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x565990u;
    {
        const bool branch_taken_0x565990 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x565994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x565990u;
            // 0x565994: 0xae300068  sw          $s0, 0x68($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x565990) {
            ctx->pc = 0x5659D0u;
            goto label_5659d0;
        }
    }
    ctx->pc = 0x565998u;
label_565998:
    // 0x565998: 0x32030001  andi        $v1, $s0, 0x1
    ctx->pc = 0x565998u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x56599c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x56599Cu;
    {
        const bool branch_taken_0x56599c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x56599c) {
            ctx->pc = 0x5659C0u;
            goto label_5659c0;
        }
    }
    ctx->pc = 0x5659A4u;
    // 0x5659a4: 0x8223007c  lb          $v1, 0x7C($s1)
    ctx->pc = 0x5659a4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 124)));
    // 0x5659a8: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x5659a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x5659ac: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x5659acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x5659b0: 0xa224007c  sb          $a0, 0x7C($s1)
    ctx->pc = 0x5659b0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 124), (uint8_t)GPR_U32(ctx, 4));
    // 0x5659b4: 0x2231821  addu        $v1, $s1, $v1
    ctx->pc = 0x5659b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 3)));
    // 0x5659b8: 0xac65006c  sw          $a1, 0x6C($v1)
    ctx->pc = 0x5659b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 108), GPR_U32(ctx, 5));
    // 0x5659bc: 0x0  nop
    ctx->pc = 0x5659bcu;
    // NOP
label_5659c0:
    // 0x5659c0: 0x108042  srl         $s0, $s0, 1
    ctx->pc = 0x5659c0u;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 1));
    // 0x5659c4: 0x1600fff4  bnez        $s0, . + 4 + (-0xC << 2)
    ctx->pc = 0x5659C4u;
    {
        const bool branch_taken_0x5659c4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x5659C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5659C4u;
            // 0x5659c8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x5659c4) {
            ctx->pc = 0x565998u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_565998;
        }
    }
    ctx->pc = 0x5659CCu;
    // 0x5659cc: 0x0  nop
    ctx->pc = 0x5659ccu;
    // NOP
label_5659d0:
    // 0x5659d0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x5659d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x5659d4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x5659d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x5659d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x5659d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x5659dc: 0x3e00008  jr          $ra
    ctx->pc = 0x5659DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x5659E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x5659DCu;
            // 0x5659e0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x5659E4u;
    // 0x5659e4: 0x0  nop
    ctx->pc = 0x5659e4u;
    // NOP
    // 0x5659e8: 0x0  nop
    ctx->pc = 0x5659e8u;
    // NOP
    // 0x5659ec: 0x0  nop
    ctx->pc = 0x5659ecu;
    // NOP
}
