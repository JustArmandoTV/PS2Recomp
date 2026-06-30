#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00350210
// Address: 0x350210 - 0x3502b0
void sub_00350210_0x350210(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00350210_0x350210");
#endif

    ctx->pc = 0x350210u;

    // 0x350210: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x350210u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x350214: 0x3c0a006f  lui         $t2, 0x6F
    ctx->pc = 0x350214u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)111 << 16));
    // 0x350218: 0x8c67e3c0  lw          $a3, -0x1C40($v1)
    ctx->pc = 0x350218u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960064)));
    // 0x35021c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x35021cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x350220: 0x76080  sll         $t4, $a3, 2
    ctx->pc = 0x350220u;
    SET_GPR_S32(ctx, 12, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x350224: 0x8c69e3d8  lw          $t1, -0x1C28($v1)
    ctx->pc = 0x350224u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960088)));
    // 0x350228: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x350228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x35022c: 0x8c68e360  lw          $t0, -0x1CA0($v1)
    ctx->pc = 0x35022cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
    // 0x350230: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x350230u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x350234: 0x8c67e3b0  lw          $a3, -0x1C50($v1)
    ctx->pc = 0x350234u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294960048)));
    // 0x350238: 0x91980  sll         $v1, $t1, 6
    ctx->pc = 0x350238u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 9), 6));
    // 0x35023c: 0xec3821  addu        $a3, $a3, $t4
    ctx->pc = 0x35023cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 12)));
    // 0x350240: 0x1035821  addu        $t3, $t0, $v1
    ctx->pc = 0x350240u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
    // 0x350244: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x350244u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x350248: 0xaceb0000  sw          $t3, 0x0($a3)
    ctx->pc = 0x350248u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 11));
    // 0x35024c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x35024cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x350250: 0xacab0000  sw          $t3, 0x0($a1)
    ctx->pc = 0x350250u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 11));
    // 0x350254: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x350254u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x350258: 0x8d4be3d8  lw          $t3, -0x1C28($t2)
    ctx->pc = 0x350258u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294960088)));
    // 0x35025c: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x35025cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x350260: 0x8d29e3b8  lw          $t1, -0x1C48($t1)
    ctx->pc = 0x350260u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294960056)));
    // 0x350264: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x350264u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x350268: 0x8c6ae378  lw          $t2, -0x1C88($v1)
    ctx->pc = 0x350268u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959992)));
    // 0x35026c: 0xb5880  sll         $t3, $t3, 2
    ctx->pc = 0x35026cu;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 11), 2));
    // 0x350270: 0x12c4821  addu        $t1, $t1, $t4
    ctx->pc = 0x350270u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 12)));
    // 0x350274: 0x14b5021  addu        $t2, $t2, $t3
    ctx->pc = 0x350274u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 11)));
    // 0x350278: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x350278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x35027c: 0xad2a0000  sw          $t2, 0x0($t1)
    ctx->pc = 0x35027cu;
    WRITE32(ADD32(GPR_U32(ctx, 9), 0), GPR_U32(ctx, 10));
    // 0x350280: 0xacca0000  sw          $t2, 0x0($a2)
    ctx->pc = 0x350280u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 10));
    // 0x350284: 0x8c890028  lw          $t1, 0x28($a0)
    ctx->pc = 0x350284u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x350288: 0x8d06e3d8  lw          $a2, -0x1C28($t0)
    ctx->pc = 0x350288u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294960088)));
    // 0x35028c: 0x8ca4e3c0  lw          $a0, -0x1C40($a1)
    ctx->pc = 0x35028cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294960064)));
    // 0x350290: 0xc92821  addu        $a1, $a2, $t1
    ctx->pc = 0x350290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x350294: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x350294u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x350298: 0xace5e3d8  sw          $a1, -0x1C28($a3)
    ctx->pc = 0x350298u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294960088), GPR_U32(ctx, 5));
    // 0x35029c: 0x3e00008  jr          $ra
    ctx->pc = 0x35029Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3502A0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x35029Cu;
            // 0x3502a0: 0xac64e3c0  sw          $a0, -0x1C40($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294960064), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3502A4u;
    // 0x3502a4: 0x0  nop
    ctx->pc = 0x3502a4u;
    // NOP
    // 0x3502a8: 0x0  nop
    ctx->pc = 0x3502a8u;
    // NOP
    // 0x3502ac: 0x0  nop
    ctx->pc = 0x3502acu;
    // NOP
}
