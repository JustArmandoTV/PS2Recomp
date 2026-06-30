#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00481930
// Address: 0x481930 - 0x481ac0
void sub_00481930_0x481930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00481930_0x481930");
#endif

    switch (ctx->pc) {
        case 0x481944u: goto label_481944;
        case 0x4819b8u: goto label_4819b8;
        case 0x4819f8u: goto label_4819f8;
        case 0x481a38u: goto label_481a38;
        case 0x481a9cu: goto label_481a9c;
        default: break;
    }

    ctx->pc = 0x481930u;

    // 0x481930: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x481930u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x481934: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x481934u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481938: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x481938u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48193c: 0x24a5fa80  addiu       $a1, $a1, -0x580
    ctx->pc = 0x48193cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294965888));
    // 0x481940: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x481940u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_481944:
    // 0x481944: 0x8c8a0004  lw          $t2, 0x4($a0)
    ctx->pc = 0x481944u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x481948: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x481948u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x48194c: 0x8cac0000  lw          $t4, 0x0($a1)
    ctx->pc = 0x48194cu;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x481950: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x481950u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481954: 0x8cab0004  lw          $t3, 0x4($a1)
    ctx->pc = 0x481954u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x481958: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x481958u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x48195c: 0xad400008  sw          $zero, 0x8($t2)
    ctx->pc = 0x48195cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 8), GPR_U32(ctx, 0));
    // 0x481960: 0x8c8a0004  lw          $t2, 0x4($a0)
    ctx->pc = 0x481960u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x481964: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x481964u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x481968: 0xad400048  sw          $zero, 0x48($t2)
    ctx->pc = 0x481968u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 72), GPR_U32(ctx, 0));
    // 0x48196c: 0x8c8a0004  lw          $t2, 0x4($a0)
    ctx->pc = 0x48196cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x481970: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x481970u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x481974: 0xad4c0088  sw          $t4, 0x88($t2)
    ctx->pc = 0x481974u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 136), GPR_U32(ctx, 12));
    // 0x481978: 0x8c8a0004  lw          $t2, 0x4($a0)
    ctx->pc = 0x481978u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x48197c: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x48197cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x481980: 0xad4000c8  sw          $zero, 0xC8($t2)
    ctx->pc = 0x481980u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 200), GPR_U32(ctx, 0));
    // 0x481984: 0x8c8a0004  lw          $t2, 0x4($a0)
    ctx->pc = 0x481984u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x481988: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x481988u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x48198c: 0xad400108  sw          $zero, 0x108($t2)
    ctx->pc = 0x48198cu;
    WRITE32(ADD32(GPR_U32(ctx, 10), 264), GPR_U32(ctx, 0));
    // 0x481990: 0x8c8a0004  lw          $t2, 0x4($a0)
    ctx->pc = 0x481990u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x481994: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x481994u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x481998: 0xad400148  sw          $zero, 0x148($t2)
    ctx->pc = 0x481998u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 328), GPR_U32(ctx, 0));
    // 0x48199c: 0x8c8a0004  lw          $t2, 0x4($a0)
    ctx->pc = 0x48199cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4819a0: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x4819a0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x4819a4: 0xad4b0188  sw          $t3, 0x188($t2)
    ctx->pc = 0x4819a4u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 392), GPR_U32(ctx, 11));
    // 0x4819a8: 0x8c8a0004  lw          $t2, 0x4($a0)
    ctx->pc = 0x4819a8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4819ac: 0x1465021  addu        $t2, $t2, $a2
    ctx->pc = 0x4819acu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x4819b0: 0xad4001c8  sw          $zero, 0x1C8($t2)
    ctx->pc = 0x4819b0u;
    WRITE32(ADD32(GPR_U32(ctx, 10), 456), GPR_U32(ctx, 0));
    // 0x4819b4: 0x0  nop
    ctx->pc = 0x4819b4u;
    // NOP
label_4819b8:
    // 0x4819b8: 0x8c8b0004  lw          $t3, 0x4($a0)
    ctx->pc = 0x4819b8u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4819bc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x4819bcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x4819c0: 0x2d0a0003  sltiu       $t2, $t0, 0x3
    ctx->pc = 0x4819c0u;
    SET_GPR_U64(ctx, 10, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x4819c4: 0xcb5821  addu        $t3, $a2, $t3
    ctx->pc = 0x4819c4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x4819c8: 0x1675821  addu        $t3, $t3, $a3
    ctx->pc = 0x4819c8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x4819cc: 0xad60051c  sw          $zero, 0x51C($t3)
    ctx->pc = 0x4819ccu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1308), GPR_U32(ctx, 0));
    // 0x4819d0: 0x8c8b0004  lw          $t3, 0x4($a0)
    ctx->pc = 0x4819d0u;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4819d4: 0xcb5821  addu        $t3, $a2, $t3
    ctx->pc = 0x4819d4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 11)));
    // 0x4819d8: 0x1675821  addu        $t3, $t3, $a3
    ctx->pc = 0x4819d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x4819dc: 0xad6005dc  sw          $zero, 0x5DC($t3)
    ctx->pc = 0x4819dcu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 1500), GPR_U32(ctx, 0));
    // 0x4819e0: 0x1540fff5  bnez        $t2, . + 4 + (-0xB << 2)
    ctx->pc = 0x4819E0u;
    {
        const bool branch_taken_0x4819e0 = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x4819E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4819E0u;
            // 0x4819e4: 0x24e70040  addiu       $a3, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4819e0) {
            ctx->pc = 0x4819B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4819b8;
        }
    }
    ctx->pc = 0x4819E8u;
    // 0x4819e8: 0x582d  daddu       $t3, $zero, $zero
    ctx->pc = 0x4819e8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4819ec: 0x602d  daddu       $t4, $zero, $zero
    ctx->pc = 0x4819ecu;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4819f0: 0x35080  sll         $t2, $v1, 2
    ctx->pc = 0x4819f0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x4819f4: 0x0  nop
    ctx->pc = 0x4819f4u;
    // NOP
label_4819f8:
    // 0x4819f8: 0x8c880004  lw          $t0, 0x4($a0)
    ctx->pc = 0x4819f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x4819fc: 0x256b0001  addiu       $t3, $t3, 0x1
    ctx->pc = 0x4819fcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 1));
    // 0x481a00: 0x2d670008  sltiu       $a3, $t3, 0x8
    ctx->pc = 0x481a00u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 11) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x481a04: 0x1484021  addu        $t0, $t2, $t0
    ctx->pc = 0x481a04u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 8)));
    // 0x481a08: 0x10c4021  addu        $t0, $t0, $t4
    ctx->pc = 0x481a08u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 12)));
    // 0x481a0c: 0xad000208  sw          $zero, 0x208($t0)
    ctx->pc = 0x481a0cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 520), GPR_U32(ctx, 0));
    // 0x481a10: 0x14e0fff9  bnez        $a3, . + 4 + (-0x7 << 2)
    ctx->pc = 0x481A10u;
    {
        const bool branch_taken_0x481a10 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x481A14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x481A10u;
            // 0x481a14: 0x258c0004  addiu       $t4, $t4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x481a10) {
            ctx->pc = 0x4819F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4819f8;
        }
    }
    ctx->pc = 0x481A18u;
    // 0x481a18: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x481a18u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x481a1c: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x481a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x481a20: 0x2d270010  sltiu       $a3, $t1, 0x10
    ctx->pc = 0x481a20u;
    SET_GPR_U64(ctx, 7, ((uint64_t)GPR_U64(ctx, 9) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x481a24: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x481a24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x481a28: 0x14e0ffc6  bnez        $a3, . + 4 + (-0x3A << 2)
    ctx->pc = 0x481A28u;
    {
        const bool branch_taken_0x481a28 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x481A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x481A28u;
            // 0x481a2c: 0x24630008  addiu       $v1, $v1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x481a28) {
            ctx->pc = 0x481944u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_481944;
        }
    }
    ctx->pc = 0x481A30u;
    // 0x481a30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x481a30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x481a34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x481a34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_481a38:
    // 0x481a38: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x481a38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x481a3c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x481a3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x481a40: 0x2cc30002  sltiu       $v1, $a2, 0x2
    ctx->pc = 0x481a40u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x481a44: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x481a44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x481a48: 0xaca00408  sw          $zero, 0x408($a1)
    ctx->pc = 0x481a48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 1032), GPR_U32(ctx, 0));
    // 0x481a4c: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x481A4Cu;
    {
        const bool branch_taken_0x481a4c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x481A50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x481A4Cu;
            // 0x481a50: 0x24e70004  addiu       $a3, $a3, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x481a4c) {
            ctx->pc = 0x481A38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_481a38;
        }
    }
    ctx->pc = 0x481A54u;
    // 0x481a54: 0x3e00008  jr          $ra
    ctx->pc = 0x481A54u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x481A5Cu;
    // 0x481a5c: 0x0  nop
    ctx->pc = 0x481a5cu;
    // NOP
    // 0x481a60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x481a60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x481a64: 0x24020066  addiu       $v0, $zero, 0x66
    ctx->pc = 0x481a64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 102));
    // 0x481a68: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x481a68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x481a6c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x481a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x481a70: 0x90830004  lbu         $v1, 0x4($a0)
    ctx->pc = 0x481a70u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x481a74: 0x10620003  beq         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x481A74u;
    {
        const bool branch_taken_0x481a74 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x481A78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x481A74u;
            // 0x481a78: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x481a74) {
            ctx->pc = 0x481A84u;
            goto label_481a84;
        }
    }
    ctx->pc = 0x481A7Cu;
    // 0x481a7c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x481A7Cu;
    {
        const bool branch_taken_0x481a7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x481A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x481A7Cu;
            // 0x481a80: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x481a7c) {
            ctx->pc = 0x481AACu;
            goto label_481aac;
        }
    }
    ctx->pc = 0x481A84u;
label_481a84:
    // 0x481a84: 0x3c0700af  lui         $a3, 0xAF
    ctx->pc = 0x481a84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)175 << 16));
    // 0x481a88: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x481a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x481a8c: 0x24053ffc  addiu       $a1, $zero, 0x3FFC
    ctx->pc = 0x481a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16380));
    // 0x481a90: 0x27a6002c  addiu       $a2, $sp, 0x2C
    ctx->pc = 0x481a90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x481a94: 0xc155a20  jal         func_556880
    ctx->pc = 0x481A94u;
    SET_GPR_U32(ctx, 31, 0x481A9Cu);
    ctx->pc = 0x481A98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x481A94u;
            // 0x481a98: 0x24e77790  addiu       $a3, $a3, 0x7790 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 30608));
        ctx->in_delay_slot = false;
    ctx->pc = 0x556880u;
    if (runtime->hasFunction(0x556880u)) {
        auto targetFn = runtime->lookupFunction(0x556880u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481A9Cu; }
        if (ctx->pc != 0x481A9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00556880_0x556880(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x481A9Cu; }
        if (ctx->pc != 0x481A9Cu) { return; }
    }
    ctx->pc = 0x481A9Cu;
label_481a9c:
    // 0x481a9c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x481a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x481aa0: 0x8fa2002c  lw          $v0, 0x2C($sp)
    ctx->pc = 0x481aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x481aa4: 0x621026  xor         $v0, $v1, $v0
    ctx->pc = 0x481aa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ GPR_U64(ctx, 2));
    // 0x481aa8: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x481aa8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_481aac:
    // 0x481aac: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x481aacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x481ab0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x481ab0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x481ab4: 0x3e00008  jr          $ra
    ctx->pc = 0x481AB4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x481AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x481AB4u;
            // 0x481ab8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x481ABCu;
    // 0x481abc: 0x0  nop
    ctx->pc = 0x481abcu;
    // NOP
}
