#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00399ED0
// Address: 0x399ed0 - 0x399f70
void sub_00399ED0_0x399ed0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00399ED0_0x399ed0");
#endif

    ctx->pc = 0x399ed0u;

    // 0x399ed0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x399ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x399ed4: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x399ed4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
    // 0x399ed8: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x399ed8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x399edc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x399edcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x399ee0: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x399ee0u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x399ee4: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x399ee4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
    // 0x399ee8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x399ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x399eec: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x399eecu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
    // 0x399ef0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x399ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x399ef4: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x399ef4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
    // 0x399ef8: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x399ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x399efc: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x399efcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x399f00: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x399f00u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x399f04: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x399f04u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x399f08: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x399f08u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
    // 0x399f0c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x399f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x399f10: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x399f10u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x399f14: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x399f14u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x399f18: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x399f18u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
    // 0x399f1c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x399f1cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x399f20: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x399f20u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
    // 0x399f24: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x399f24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x399f28: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x399f28u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
    // 0x399f2c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x399f2cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x399f30: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x399f30u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x399f34: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x399f34u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x399f38: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x399f38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x399f3c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x399f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x399f40: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x399f40u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x399f44: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x399f44u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x399f48: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x399f48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
    // 0x399f4c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x399f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
    // 0x399f50: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x399f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x399f54: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x399f54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x399f58: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x399f58u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
    // 0x399f5c: 0x3e00008  jr          $ra
    ctx->pc = 0x399F5Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x399F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x399F5Cu;
            // 0x399f60: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x399F64u;
    // 0x399f64: 0x0  nop
    ctx->pc = 0x399f64u;
    // NOP
    // 0x399f68: 0x0  nop
    ctx->pc = 0x399f68u;
    // NOP
    // 0x399f6c: 0x0  nop
    ctx->pc = 0x399f6cu;
    // NOP
}
