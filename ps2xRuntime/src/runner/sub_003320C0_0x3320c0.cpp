#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003320C0
// Address: 0x3320c0 - 0x3321d0
void sub_003320C0_0x3320c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003320C0_0x3320c0");
#endif

    switch (ctx->pc) {
        case 0x332108u: goto label_332108;
        default: break;
    }

    ctx->pc = 0x3320c0u;

    // 0x3320c0: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x3320c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x3320c4: 0x8c463e60  lw          $a2, 0x3E60($v0)
    ctx->pc = 0x3320c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15968)));
    // 0x3320c8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x3320c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x3320cc: 0x8c4289d0  lw          $v0, -0x7630($v0)
    ctx->pc = 0x3320ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294937040)));
    // 0x3320d0: 0x8042008d  lb          $v0, 0x8D($v0)
    ctx->pc = 0x3320d0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 141)));
    // 0x3320d4: 0x401027  not         $v0, $v0
    ctx->pc = 0x3320d4u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 2) | GPR_U64(ctx, 0)));
    // 0x3320d8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3320d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3320dc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3320DCu;
    {
        const bool branch_taken_0x3320dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3320dc) {
            ctx->pc = 0x3320ECu;
            goto label_3320ec;
        }
    }
    ctx->pc = 0x3320E4u;
    // 0x3320e4: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x3320E4u;
    {
        const bool branch_taken_0x3320e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3320E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3320E4u;
            // 0x3320e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3320e4) {
            ctx->pc = 0x3321BCu;
            goto label_3321bc;
        }
    }
    ctx->pc = 0x3320ECu;
label_3320ec:
    // 0x3320ec: 0x3c0700af  lui         $a3, 0xAF
    ctx->pc = 0x3320ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)175 << 16));
    // 0x3320f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3320f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3320f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3320f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3320f8: 0x24e70e80  addiu       $a3, $a3, 0xE80
    ctx->pc = 0x3320f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 3712));
    // 0x3320fc: 0x24639760  addiu       $v1, $v1, -0x68A0
    ctx->pc = 0x3320fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294940512));
    // 0x332100: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x332100u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x332104: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x332104u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
label_332108:
    // 0x332108: 0x8c8a0780  lw          $t2, 0x780($a0)
    ctx->pc = 0x332108u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 1920)));
    // 0x33210c: 0x10a082b  sltu        $at, $t0, $t2
    ctx->pc = 0x33210cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x332110: 0x10200029  beqz        $at, . + 4 + (0x29 << 2)
    ctx->pc = 0x332110u;
    {
        const bool branch_taken_0x332110 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x332110) {
            ctx->pc = 0x3321B8u;
            goto label_3321b8;
        }
    }
    ctx->pc = 0x332118u;
    // 0x332118: 0x8cea0004  lw          $t2, 0x4($a3)
    ctx->pc = 0x332118u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x33211c: 0x8d4a0d68  lw          $t2, 0xD68($t2)
    ctx->pc = 0x33211cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 3432)));
    // 0x332120: 0x8d4c0034  lw          $t4, 0x34($t2)
    ctx->pc = 0x332120u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 52)));
    // 0x332124: 0xc5040  sll         $t2, $t4, 1
    ctx->pc = 0x332124u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 1));
    // 0x332128: 0x14c5021  addu        $t2, $t2, $t4
    ctx->pc = 0x332128u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 12)));
    // 0x33212c: 0xa5100  sll         $t2, $t2, 4
    ctx->pc = 0x33212cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 4));
    // 0x332130: 0x6a5021  addu        $t2, $v1, $t2
    ctx->pc = 0x332130u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x332134: 0x914a001e  lbu         $t2, 0x1E($t2)
    ctx->pc = 0x332134u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 30)));
    // 0x332138: 0x11420013  beq         $t2, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x332138u;
    {
        const bool branch_taken_0x332138 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 2));
        if (branch_taken_0x332138) {
            ctx->pc = 0x332188u;
            goto label_332188;
        }
    }
    ctx->pc = 0x332140u;
    // 0x332140: 0xcc5021  addu        $t2, $a2, $t4
    ctx->pc = 0x332140u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x332144: 0x254b0014  addiu       $t3, $t2, 0x14
    ctx->pc = 0x332144u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 20));
    // 0x332148: 0x914a0014  lbu         $t2, 0x14($t2)
    ctx->pc = 0x332148u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 10), 20)));
    // 0x33214c: 0x2d4a000a  sltiu       $t2, $t2, 0xA
    ctx->pc = 0x33214cu;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 10) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x332150: 0x55400006  bnel        $t2, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x332150u;
    {
        const bool branch_taken_0x332150 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        if (branch_taken_0x332150) {
            ctx->pc = 0x332154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x332150u;
            // 0x332154: 0xc5080  sll         $t2, $t4, 2 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33216Cu;
            goto label_33216c;
        }
    }
    ctx->pc = 0x332158u;
    // 0x332158: 0xc1880  sll         $v1, $t4, 2
    ctx->pc = 0x332158u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x33215c: 0xacac0000  sw          $t4, 0x0($a1)
    ctx->pc = 0x33215cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
    // 0x332160: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x332160u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x332164: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x332164u;
    {
        const bool branch_taken_0x332164 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332168u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x332164u;
            // 0x332168: 0xac620004  sw          $v0, 0x4($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x332164) {
            ctx->pc = 0x3321BCu;
            goto label_3321bc;
        }
    }
    ctx->pc = 0x33216Cu;
label_33216c:
    // 0x33216c: 0xca5021  addu        $t2, $a2, $t2
    ctx->pc = 0x33216cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x332170: 0xad400004  sw          $zero, 0x4($t2)
    ctx->pc = 0x332170u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 4), GPR_U32(ctx, 0));
    // 0x332174: 0x916a0000  lbu         $t2, 0x0($t3)
    ctx->pc = 0x332174u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x332178: 0x254a0001  addiu       $t2, $t2, 0x1
    ctx->pc = 0x332178u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 1));
    // 0x33217c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33217Cu;
    {
        const bool branch_taken_0x33217c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x332180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33217Cu;
            // 0x332180: 0xa16a0000  sb          $t2, 0x0($t3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 11), 0), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33217c) {
            ctx->pc = 0x3321A0u;
            goto label_3321a0;
        }
    }
    ctx->pc = 0x332184u;
    // 0x332184: 0x0  nop
    ctx->pc = 0x332184u;
    // NOP
label_332188:
    // 0x332188: 0xc5080  sll         $t2, $t4, 2
    ctx->pc = 0x332188u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x33218c: 0xca5821  addu        $t3, $a2, $t2
    ctx->pc = 0x33218cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 10)));
    // 0x332190: 0xcc5021  addu        $t2, $a2, $t4
    ctx->pc = 0x332190u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 12)));
    // 0x332194: 0xad600004  sw          $zero, 0x4($t3)
    ctx->pc = 0x332194u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4), GPR_U32(ctx, 0));
    // 0x332198: 0xa1400014  sb          $zero, 0x14($t2)
    ctx->pc = 0x332198u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 20), (uint8_t)GPR_U32(ctx, 0));
    // 0x33219c: 0x0  nop
    ctx->pc = 0x33219cu;
    // NOP
label_3321a0:
    // 0x3321a0: 0x8d2aa140  lw          $t2, -0x5EC0($t1)
    ctx->pc = 0x3321a0u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4294943040)));
    // 0x3321a4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x3321a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x3321a8: 0x8d4a001c  lw          $t2, 0x1C($t2)
    ctx->pc = 0x3321a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 28)));
    // 0x3321ac: 0x10a502b  sltu        $t2, $t0, $t2
    ctx->pc = 0x3321acu;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x3321b0: 0x1540ffd5  bnez        $t2, . + 4 + (-0x2B << 2)
    ctx->pc = 0x3321B0u;
    {
        const bool branch_taken_0x3321b0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x3321B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3321B0u;
            // 0x3321b4: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3321b0) {
            ctx->pc = 0x332108u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_332108;
        }
    }
    ctx->pc = 0x3321B8u;
label_3321b8:
    // 0x3321b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3321b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3321bc:
    // 0x3321bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3321BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3321C4u;
    // 0x3321c4: 0x0  nop
    ctx->pc = 0x3321c4u;
    // NOP
    // 0x3321c8: 0x0  nop
    ctx->pc = 0x3321c8u;
    // NOP
    // 0x3321cc: 0x0  nop
    ctx->pc = 0x3321ccu;
    // NOP
}
