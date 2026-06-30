#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00161180
// Address: 0x161180 - 0x161200
void sub_00161180_0x161180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00161180_0x161180");
#endif

    ctx->pc = 0x161180u;

    // 0x161180: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x161180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x161184: 0x14640002  bne         $v1, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x161184u;
    {
        const bool branch_taken_0x161184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        ctx->pc = 0x161188u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x161184u;
            // 0x161188: 0x8c870000  lw          $a3, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x161184) {
            ctx->pc = 0x161190u;
            goto label_161190;
        }
    }
    ctx->pc = 0x16118Cu;
    // 0x16118c: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x16118cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
label_161190:
    // 0x161190: 0x8ce30004  lw          $v1, 0x4($a3)
    ctx->pc = 0x161190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x161194: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x161194u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x161198: 0x8ce50004  lw          $a1, 0x4($a3)
    ctx->pc = 0x161198u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x16119c: 0x50a00006  beql        $a1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x16119Cu;
    {
        const bool branch_taken_0x16119c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x16119c) {
            ctx->pc = 0x1611A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x16119Cu;
            // 0x1611a0: 0x8ce30008  lw          $v1, 0x8($a3) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1611B8u;
            goto label_1611b8;
        }
    }
    ctx->pc = 0x1611A4u;
    // 0x1611a4: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x1611a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x1611a8: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1611a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1611ac: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x1611acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1611b0: 0xaca30008  sw          $v1, 0x8($a1)
    ctx->pc = 0x1611b0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 3));
    // 0x1611b4: 0x8ce30008  lw          $v1, 0x8($a3)
    ctx->pc = 0x1611b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
label_1611b8:
    // 0x1611b8: 0x2406fffe  addiu       $a2, $zero, -0x2
    ctx->pc = 0x1611b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1611bc: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x1611bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1611c0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1611c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1611c4: 0xa62824  and         $a1, $a1, $a2
    ctx->pc = 0x1611c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 6));
    // 0x1611c8: 0xa31825  or          $v1, $a1, $v1
    ctx->pc = 0x1611c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x1611cc: 0xace30008  sw          $v1, 0x8($a3)
    ctx->pc = 0x1611ccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 3));
    // 0x1611d0: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1611d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1611d4: 0x662824  and         $a1, $v1, $a2
    ctx->pc = 0x1611d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x1611d8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x1611d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1611dc: 0x54830002  bnel        $a0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1611DCu;
    {
        const bool branch_taken_0x1611dc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1611dc) {
            ctx->pc = 0x1611E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1611DCu;
            // 0x1611e0: 0xaca70004  sw          $a3, 0x4($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1611E8u;
            goto label_1611e8;
        }
    }
    ctx->pc = 0x1611E4u;
    // 0x1611e4: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x1611e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
label_1611e8:
    // 0x1611e8: 0xace40004  sw          $a0, 0x4($a3)
    ctx->pc = 0x1611e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 4));
    // 0x1611ec: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x1611ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x1611f0: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x1611f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x1611f4: 0xe31825  or          $v1, $a3, $v1
    ctx->pc = 0x1611f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1611f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1611F8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1611FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1611F8u;
            // 0x1611fc: 0xac830008  sw          $v1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x161200u;
}
