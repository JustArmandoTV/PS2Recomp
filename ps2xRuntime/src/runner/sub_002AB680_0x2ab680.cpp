#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AB680
// Address: 0x2ab680 - 0x2ab730
void sub_002AB680_0x2ab680(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AB680_0x2ab680");
#endif

    ctx->pc = 0x2ab680u;

    // 0x2ab680: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x2ab680u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x2ab684: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2ab684u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2ab688: 0x8ca80004  lw          $t0, 0x4($a1)
    ctx->pc = 0x2ab688u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2ab68c: 0x8ca70008  lw          $a3, 0x8($a1)
    ctx->pc = 0x2ab68cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x2ab690: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2ab690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2ab694: 0x8ca3000c  lw          $v1, 0xC($a1)
    ctx->pc = 0x2ab694u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x2ab698: 0xafa70008  sw          $a3, 0x8($sp)
    ctx->pc = 0x2ab698u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 7));
    // 0x2ab69c: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x2ab69cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x2ab6a0: 0xafa3000c  sw          $v1, 0xC($sp)
    ctx->pc = 0x2ab6a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    // 0x2ab6a4: 0x681823  subu        $v1, $v1, $t0
    ctx->pc = 0x2ab6a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2ab6a8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AB6A8u;
    {
        const bool branch_taken_0x2ab6a8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x2AB6ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB6A8u;
            // 0x2ab6ac: 0x33883  sra         $a3, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab6a8) {
            ctx->pc = 0x2AB6B8u;
            goto label_2ab6b8;
        }
    }
    ctx->pc = 0x2AB6B0u;
    // 0x2ab6b0: 0x24630003  addiu       $v1, $v1, 0x3
    ctx->pc = 0x2ab6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2ab6b4: 0x33883  sra         $a3, $v1, 2
    ctx->pc = 0x2ab6b4u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 3), 2));
label_2ab6b8:
    // 0x2ab6b8: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2ab6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ab6bc: 0x682823  subu        $a1, $v1, $t0
    ctx->pc = 0x2ab6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 8)));
    // 0x2ab6c0: 0x4a10003  bgez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AB6C0u;
    {
        const bool branch_taken_0x2ab6c0 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x2AB6C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB6C0u;
            // 0x2ab6c4: 0x51883  sra         $v1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 5), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab6c0) {
            ctx->pc = 0x2AB6D0u;
            goto label_2ab6d0;
        }
    }
    ctx->pc = 0x2AB6C8u;
    // 0x2ab6c8: 0x24a30003  addiu       $v1, $a1, 0x3
    ctx->pc = 0x2ab6c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 3));
    // 0x2ab6cc: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x2ab6ccu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
label_2ab6d0:
    // 0x2ab6d0: 0xc32821  addu        $a1, $a2, $v1
    ctx->pc = 0x2ab6d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 3)));
    // 0x2ab6d4: 0x4a30003  bgezl       $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AB6D4u;
    {
        const bool branch_taken_0x2ab6d4 = (GPR_S32(ctx, 5) >= 0);
        if (branch_taken_0x2ab6d4) {
            ctx->pc = 0x2AB6D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB6D4u;
            // 0x2ab6d8: 0xa7182a  slt         $v1, $a1, $a3 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AB6E4u;
            goto label_2ab6e4;
        }
    }
    ctx->pc = 0x2AB6DCu;
    // 0x2ab6dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2AB6DCu;
    {
        const bool branch_taken_0x2ab6dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AB6E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB6DCu;
            // 0x2ab6e0: 0xa72821  addu        $a1, $a1, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ab6dc) {
            ctx->pc = 0x2AB6F0u;
            goto label_2ab6f0;
        }
    }
    ctx->pc = 0x2AB6E4u;
label_2ab6e4:
    // 0x2ab6e4: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x2AB6E4u;
    {
        const bool branch_taken_0x2ab6e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2ab6e4) {
            ctx->pc = 0x2AB6E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB6E4u;
            // 0x2ab6e8: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AB6F4u;
            goto label_2ab6f4;
        }
    }
    ctx->pc = 0x2AB6ECu;
    // 0x2ab6ec: 0xa72823  subu        $a1, $a1, $a3
    ctx->pc = 0x2ab6ecu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
label_2ab6f0:
    // 0x2ab6f0: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x2ab6f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
label_2ab6f4:
    // 0x2ab6f4: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x2ab6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2ab6f8: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2ab6f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2ab6fc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x2ab6fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x2ab700: 0x8fa60004  lw          $a2, 0x4($sp)
    ctx->pc = 0x2ab700u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x2ab704: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2ab704u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2ab708: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x2ab708u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2ab70c: 0xac860004  sw          $a2, 0x4($a0)
    ctx->pc = 0x2ab70cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 6));
    // 0x2ab710: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x2ab710u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x2ab714: 0xac850008  sw          $a1, 0x8($a0)
    ctx->pc = 0x2ab714u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
    // 0x2ab718: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x2ab718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x2ab71c: 0x3e00008  jr          $ra
    ctx->pc = 0x2AB71Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AB720u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AB71Cu;
            // 0x2ab720: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AB724u;
    // 0x2ab724: 0x0  nop
    ctx->pc = 0x2ab724u;
    // NOP
    // 0x2ab728: 0x0  nop
    ctx->pc = 0x2ab728u;
    // NOP
    // 0x2ab72c: 0x0  nop
    ctx->pc = 0x2ab72cu;
    // NOP
}
