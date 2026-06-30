#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004D77F0
// Address: 0x4d77f0 - 0x4d7890
void sub_004D77F0_0x4d77f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004D77F0_0x4d77f0");
#endif

    ctx->pc = 0x4d77f0u;

    // 0x4d77f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d77f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4d77f4: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x4d77f4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
    // 0x4d77f8: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x4d77f8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x4d77fc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d77fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4d7800: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x4d7800u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4d7804: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x4d7804u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
    // 0x4d7808: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d7808u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4d780c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x4d780cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
    // 0x4d7810: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d7810u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4d7814: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x4d7814u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
    // 0x4d7818: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x4d7818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x4d781c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x4d781cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x4d7820: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x4d7820u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x4d7824: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4d7824u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x4d7828: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x4d7828u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
    // 0x4d782c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d782cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4d7830: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x4d7830u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x4d7834: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4d7834u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x4d7838: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x4d7838u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
    // 0x4d783c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4d783cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x4d7840: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x4d7840u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
    // 0x4d7844: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4d7844u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x4d7848: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x4d7848u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
    // 0x4d784c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x4d784cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x4d7850: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x4d7850u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x4d7854: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x4d7854u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x4d7858: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4d7858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4d785c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x4d785cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x4d7860: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x4d7860u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x4d7864: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x4d7864u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x4d7868: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x4d7868u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
    // 0x4d786c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x4d786cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
    // 0x4d7870: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x4d7870u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x4d7874: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4d7874u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4d7878: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x4d7878u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
    // 0x4d787c: 0x3e00008  jr          $ra
    ctx->pc = 0x4D787Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4D7880u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4D787Cu;
            // 0x4d7880: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4D7884u;
    // 0x4d7884: 0x0  nop
    ctx->pc = 0x4d7884u;
    // NOP
    // 0x4d7888: 0x0  nop
    ctx->pc = 0x4d7888u;
    // NOP
    // 0x4d788c: 0x0  nop
    ctx->pc = 0x4d788cu;
    // NOP
}
