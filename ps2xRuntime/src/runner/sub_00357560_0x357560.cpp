#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00357560
// Address: 0x357560 - 0x357600
void sub_00357560_0x357560(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00357560_0x357560");
#endif

    ctx->pc = 0x357560u;

    // 0x357560: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x357560u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x357564: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x357564u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
    // 0x357568: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x357568u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x35756c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x35756cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x357570: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x357570u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x357574: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x357574u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
    // 0x357578: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x357578u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x35757c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x35757cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
    // 0x357580: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x357580u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x357584: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x357584u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
    // 0x357588: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x357588u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x35758c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x35758cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x357590: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x357590u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x357594: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x357594u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x357598: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x357598u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
    // 0x35759c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x35759cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3575a0: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x3575a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x3575a4: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x3575a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x3575a8: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x3575a8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
    // 0x3575ac: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x3575acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x3575b0: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x3575b0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
    // 0x3575b4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x3575b4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x3575b8: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x3575b8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
    // 0x3575bc: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x3575bcu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x3575c0: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x3575c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x3575c4: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x3575c4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x3575c8: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3575c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3575cc: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x3575ccu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x3575d0: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x3575d0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x3575d4: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x3575d4u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x3575d8: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x3575d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
    // 0x3575dc: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x3575dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
    // 0x3575e0: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x3575e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x3575e4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3575e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3575e8: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x3575e8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
    // 0x3575ec: 0x3e00008  jr          $ra
    ctx->pc = 0x3575ECu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3575F0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3575ECu;
            // 0x3575f0: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3575F4u;
    // 0x3575f4: 0x0  nop
    ctx->pc = 0x3575f4u;
    // NOP
    // 0x3575f8: 0x0  nop
    ctx->pc = 0x3575f8u;
    // NOP
    // 0x3575fc: 0x0  nop
    ctx->pc = 0x3575fcu;
    // NOP
}
