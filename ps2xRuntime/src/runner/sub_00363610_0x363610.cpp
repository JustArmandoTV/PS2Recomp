#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00363610
// Address: 0x363610 - 0x3636b0
void sub_00363610_0x363610(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00363610_0x363610");
#endif

    ctx->pc = 0x363610u;

    // 0x363610: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x363610u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x363614: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x363614u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
    // 0x363618: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x363618u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x36361c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36361cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x363620: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x363620u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x363624: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x363624u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
    // 0x363628: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x363628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36362c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x36362cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
    // 0x363630: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x363630u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x363634: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x363634u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
    // 0x363638: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x363638u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x36363c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x36363cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x363640: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x363640u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x363644: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x363644u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x363648: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x363648u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
    // 0x36364c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x36364cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x363650: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x363650u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x363654: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x363654u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x363658: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x363658u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
    // 0x36365c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x36365cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x363660: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x363660u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
    // 0x363664: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x363664u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x363668: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x363668u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
    // 0x36366c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x36366cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x363670: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x363670u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x363674: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x363674u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x363678: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x363678u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x36367c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x36367cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x363680: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x363680u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x363684: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x363684u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x363688: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x363688u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
    // 0x36368c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x36368cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
    // 0x363690: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x363690u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x363694: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x363694u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x363698: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x363698u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
    // 0x36369c: 0x3e00008  jr          $ra
    ctx->pc = 0x36369Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3636A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x36369Cu;
            // 0x3636a0: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3636A4u;
    // 0x3636a4: 0x0  nop
    ctx->pc = 0x3636a4u;
    // NOP
    // 0x3636a8: 0x0  nop
    ctx->pc = 0x3636a8u;
    // NOP
    // 0x3636ac: 0x0  nop
    ctx->pc = 0x3636acu;
    // NOP
}
