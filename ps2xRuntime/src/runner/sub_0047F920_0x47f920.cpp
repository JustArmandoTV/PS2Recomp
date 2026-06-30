#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047F920
// Address: 0x47f920 - 0x47f9c0
void sub_0047F920_0x47f920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047F920_0x47f920");
#endif

    ctx->pc = 0x47f920u;

    // 0x47f920: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x47f920u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x47f924: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x47f924u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
    // 0x47f928: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x47f928u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x47f92c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x47f92cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x47f930: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x47f930u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x47f934: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x47f934u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
    // 0x47f938: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x47f938u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x47f93c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x47f93cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
    // 0x47f940: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x47f940u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x47f944: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x47f944u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
    // 0x47f948: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x47f948u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x47f94c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x47f94cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x47f950: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x47f950u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x47f954: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x47f954u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x47f958: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x47f958u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
    // 0x47f95c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x47f95cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x47f960: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x47f960u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x47f964: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x47f964u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x47f968: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x47f968u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
    // 0x47f96c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x47f96cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x47f970: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x47f970u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
    // 0x47f974: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x47f974u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x47f978: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x47f978u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
    // 0x47f97c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x47f97cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x47f980: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x47f980u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x47f984: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x47f984u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x47f988: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x47f988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x47f98c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x47f98cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x47f990: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x47f990u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x47f994: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x47f994u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x47f998: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x47f998u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
    // 0x47f99c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x47f99cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
    // 0x47f9a0: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x47f9a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x47f9a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x47f9a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x47f9a8: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x47f9a8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
    // 0x47f9ac: 0x3e00008  jr          $ra
    ctx->pc = 0x47F9ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47F9B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47F9ACu;
            // 0x47f9b0: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47F9B4u;
    // 0x47f9b4: 0x0  nop
    ctx->pc = 0x47f9b4u;
    // NOP
    // 0x47f9b8: 0x0  nop
    ctx->pc = 0x47f9b8u;
    // NOP
    // 0x47f9bc: 0x0  nop
    ctx->pc = 0x47f9bcu;
    // NOP
}
