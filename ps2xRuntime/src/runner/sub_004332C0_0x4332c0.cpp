#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004332C0
// Address: 0x4332c0 - 0x433360
void sub_004332C0_0x4332c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004332C0_0x4332c0");
#endif

    ctx->pc = 0x4332c0u;

    // 0x4332c0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4332c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4332c4: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x4332c4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
    // 0x4332c8: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x4332c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x4332cc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4332ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4332d0: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x4332d0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x4332d4: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x4332d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
    // 0x4332d8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4332d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4332dc: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x4332dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
    // 0x4332e0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4332e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x4332e4: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x4332e4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
    // 0x4332e8: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x4332e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x4332ec: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x4332ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x4332f0: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x4332f0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x4332f4: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x4332f4u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x4332f8: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x4332f8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
    // 0x4332fc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x4332fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x433300: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x433300u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x433304: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x433304u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x433308: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x433308u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
    // 0x43330c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x43330cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x433310: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x433310u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
    // 0x433314: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x433314u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x433318: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x433318u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
    // 0x43331c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x43331cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x433320: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x433320u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x433324: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x433324u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x433328: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x433328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x43332c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x43332cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x433330: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x433330u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x433334: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x433334u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x433338: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x433338u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
    // 0x43333c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x43333cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
    // 0x433340: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x433340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x433344: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x433344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x433348: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x433348u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
    // 0x43334c: 0x3e00008  jr          $ra
    ctx->pc = 0x43334Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x433350u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x43334Cu;
            // 0x433350: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x433354u;
    // 0x433354: 0x0  nop
    ctx->pc = 0x433354u;
    // NOP
    // 0x433358: 0x0  nop
    ctx->pc = 0x433358u;
    // NOP
    // 0x43335c: 0x0  nop
    ctx->pc = 0x43335cu;
    // NOP
}
