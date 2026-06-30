#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0042B3E0
// Address: 0x42b3e0 - 0x42b480
void sub_0042B3E0_0x42b3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042B3E0_0x42b3e0");
#endif

    ctx->pc = 0x42b3e0u;

    // 0x42b3e0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x42b3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x42b3e4: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x42b3e4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
    // 0x42b3e8: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x42b3e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x42b3ec: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x42b3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x42b3f0: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x42b3f0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x42b3f4: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x42b3f4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
    // 0x42b3f8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x42b3f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x42b3fc: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x42b3fcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
    // 0x42b400: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x42b400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x42b404: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x42b404u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
    // 0x42b408: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x42b408u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x42b40c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x42b40cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x42b410: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x42b410u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x42b414: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x42b414u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x42b418: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x42b418u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
    // 0x42b41c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x42b41cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x42b420: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x42b420u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x42b424: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x42b424u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x42b428: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x42b428u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
    // 0x42b42c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x42b42cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x42b430: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x42b430u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
    // 0x42b434: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x42b434u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x42b438: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x42b438u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
    // 0x42b43c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x42b43cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x42b440: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x42b440u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x42b444: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x42b444u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x42b448: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x42b448u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x42b44c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x42b44cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x42b450: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x42b450u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x42b454: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x42b454u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x42b458: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x42b458u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
    // 0x42b45c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x42b45cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
    // 0x42b460: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x42b460u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x42b464: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x42b464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x42b468: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x42b468u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
    // 0x42b46c: 0x3e00008  jr          $ra
    ctx->pc = 0x42B46Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42B470u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x42B46Cu;
            // 0x42b470: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x42B474u;
    // 0x42b474: 0x0  nop
    ctx->pc = 0x42b474u;
    // NOP
    // 0x42b478: 0x0  nop
    ctx->pc = 0x42b478u;
    // NOP
    // 0x42b47c: 0x0  nop
    ctx->pc = 0x42b47cu;
    // NOP
}
