#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004CA130
// Address: 0x4ca130 - 0x4ca1d0
void sub_004CA130_0x4ca130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004CA130_0x4ca130");
#endif

    ctx->pc = 0x4ca130u;

    // 0x4ca130: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ca130u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4ca134: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x4ca134u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
    // 0x4ca138: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x4ca138u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x4ca13c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ca13cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4ca140: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x4ca140u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4ca144: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x4ca144u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
    // 0x4ca148: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ca148u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4ca14c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x4ca14cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
    // 0x4ca150: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ca150u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4ca154: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x4ca154u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
    // 0x4ca158: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x4ca158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x4ca15c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x4ca15cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x4ca160: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x4ca160u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x4ca164: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4ca164u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x4ca168: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x4ca168u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
    // 0x4ca16c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ca16cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4ca170: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x4ca170u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x4ca174: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x4ca174u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x4ca178: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x4ca178u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
    // 0x4ca17c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x4ca17cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x4ca180: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x4ca180u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
    // 0x4ca184: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x4ca184u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x4ca188: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x4ca188u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
    // 0x4ca18c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x4ca18cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x4ca190: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x4ca190u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x4ca194: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x4ca194u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x4ca198: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4ca198u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4ca19c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x4ca19cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x4ca1a0: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x4ca1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x4ca1a4: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x4ca1a4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x4ca1a8: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x4ca1a8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
    // 0x4ca1ac: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x4ca1acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
    // 0x4ca1b0: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x4ca1b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x4ca1b4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x4ca1b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x4ca1b8: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x4ca1b8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
    // 0x4ca1bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4CA1BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4CA1C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4CA1BCu;
            // 0x4ca1c0: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4CA1C4u;
    // 0x4ca1c4: 0x0  nop
    ctx->pc = 0x4ca1c4u;
    // NOP
    // 0x4ca1c8: 0x0  nop
    ctx->pc = 0x4ca1c8u;
    // NOP
    // 0x4ca1cc: 0x0  nop
    ctx->pc = 0x4ca1ccu;
    // NOP
}
