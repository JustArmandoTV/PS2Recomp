#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0049F950
// Address: 0x49f950 - 0x49f9f0
void sub_0049F950_0x49f950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0049F950_0x49f950");
#endif

    ctx->pc = 0x49f950u;

    // 0x49f950: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49f950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x49f954: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x49f954u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
    // 0x49f958: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x49f958u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x49f95c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49f95cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x49f960: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x49f960u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x49f964: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x49f964u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
    // 0x49f968: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49f968u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x49f96c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x49f96cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
    // 0x49f970: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49f970u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x49f974: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x49f974u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
    // 0x49f978: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x49f978u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x49f97c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x49f97cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x49f980: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x49f980u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x49f984: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x49f984u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x49f988: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x49f988u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
    // 0x49f98c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49f98cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x49f990: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x49f990u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x49f994: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x49f994u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x49f998: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x49f998u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
    // 0x49f99c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x49f99cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x49f9a0: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x49f9a0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
    // 0x49f9a4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x49f9a4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x49f9a8: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x49f9a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
    // 0x49f9ac: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x49f9acu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x49f9b0: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x49f9b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x49f9b4: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x49f9b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x49f9b8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x49f9b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x49f9bc: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x49f9bcu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x49f9c0: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x49f9c0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x49f9c4: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x49f9c4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x49f9c8: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x49f9c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
    // 0x49f9cc: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x49f9ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
    // 0x49f9d0: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x49f9d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x49f9d4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x49f9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x49f9d8: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x49f9d8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
    // 0x49f9dc: 0x3e00008  jr          $ra
    ctx->pc = 0x49F9DCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49F9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49F9DCu;
            // 0x49f9e0: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49F9E4u;
    // 0x49f9e4: 0x0  nop
    ctx->pc = 0x49f9e4u;
    // NOP
    // 0x49f9e8: 0x0  nop
    ctx->pc = 0x49f9e8u;
    // NOP
    // 0x49f9ec: 0x0  nop
    ctx->pc = 0x49f9ecu;
    // NOP
}
