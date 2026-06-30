#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018FDD0
// Address: 0x18fdd0 - 0x18fe70
void sub_0018FDD0_0x18fdd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018FDD0_0x18fdd0");
#endif

    switch (ctx->pc) {
        case 0x18fe10u: goto label_18fe10;
        case 0x18fe4cu: goto label_18fe4c;
        default: break;
    }

    ctx->pc = 0x18fdd0u;

    // 0x18fdd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18fdd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18fdd4: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x18fdd4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fdd8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x18fdd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18fddc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x18fddcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fde0: 0x1030c0  sll         $a2, $s0, 3
    ctx->pc = 0x18fde0u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x18fde4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x18fde4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x18fde8: 0xd01023  subu        $v0, $a2, $s0
    ctx->pc = 0x18fde8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x18fdec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x18fdecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x18fdf0: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x18fdf0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x18fdf4: 0x24420040  addiu       $v0, $v0, 0x40
    ctx->pc = 0x18fdf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x18fdf8: 0xe2182b  sltu        $v1, $a3, $v0
    ctx->pc = 0x18fdf8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x18fdfc: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x18FDFCu;
    {
        const bool branch_taken_0x18fdfc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x18FE00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FDFCu;
            // 0x18fe00: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fdfc) {
            ctx->pc = 0x18FE2Cu;
            goto label_18fe2c;
        }
    }
    ctx->pc = 0x18FE04u;
    // 0x18fe04: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x18fe04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fe08: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x18fe08u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fe0c: 0x0  nop
    ctx->pc = 0x18fe0cu;
    // NOP
label_18fe10:
    // 0x18fe10: 0x2484f900  addiu       $a0, $a0, -0x700
    ctx->pc = 0x18fe10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965504));
    // 0x18fe14: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x18fe14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x18fe18: 0xe4102b  sltu        $v0, $a3, $a0
    ctx->pc = 0x18fe18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x18fe1c: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x18fe1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x18fe20: 0x0  nop
    ctx->pc = 0x18fe20u;
    // NOP
    // 0x18fe24: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x18FE24u;
    {
        const bool branch_taken_0x18fe24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x18FE28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FE24u;
            // 0x18fe28: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18fe24) {
            ctx->pc = 0x18FE10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18fe10;
        }
    }
    ctx->pc = 0x18FE2Cu;
label_18fe2c:
    // 0x18fe2c: 0x2623003f  addiu       $v1, $s1, 0x3F
    ctx->pc = 0x18fe2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 63));
    // 0x18fe30: 0x2402ffc0  addiu       $v0, $zero, -0x40
    ctx->pc = 0x18fe30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967232));
    // 0x18fe34: 0x628824  and         $s1, $v1, $v0
    ctx->pc = 0x18fe34u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18fe38: 0xd03023  subu        $a2, $a2, $s0
    ctx->pc = 0x18fe38u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 16)));
    // 0x18fe3c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x18fe3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18fe40: 0x63200  sll         $a2, $a2, 8
    ctx->pc = 0x18fe40u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 8));
    // 0x18fe44: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x18FE44u;
    SET_GPR_U32(ctx, 31, 0x18FE4Cu);
    ctx->pc = 0x18FE48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18FE44u;
            // 0x18fe48: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FE4Cu; }
        if (ctx->pc != 0x18FE4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18FE4Cu; }
        if (ctx->pc != 0x18FE4Cu) { return; }
    }
    ctx->pc = 0x18FE4Cu;
label_18fe4c:
    // 0x18fe4c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x18fe4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x18fe50: 0x2463fe60  addiu       $v1, $v1, -0x1A0
    ctx->pc = 0x18fe50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966880));
    // 0x18fe54: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18fe54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18fe58: 0xac710044  sw          $s1, 0x44($v1)
    ctx->pc = 0x18fe58u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 68), GPR_U32(ctx, 17));
    // 0x18fe5c: 0xac700040  sw          $s0, 0x40($v1)
    ctx->pc = 0x18fe5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 16));
    // 0x18fe60: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x18fe60u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x18fe64: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18fe64u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18fe68: 0x3e00008  jr          $ra
    ctx->pc = 0x18FE68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18FE6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18FE68u;
            // 0x18fe6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18FE70u;
}
