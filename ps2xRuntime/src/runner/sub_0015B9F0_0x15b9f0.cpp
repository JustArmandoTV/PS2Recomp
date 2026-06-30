#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015B9F0
// Address: 0x15b9f0 - 0x15bad0
void sub_0015B9F0_0x15b9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015B9F0_0x15b9f0");
#endif

    ctx->pc = 0x15b9f0u;

    // 0x15b9f0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x15b9f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x15b9f4: 0x502d  daddu       $t2, $zero, $zero
    ctx->pc = 0x15b9f4u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15b9f8: 0x10830015  beq         $a0, $v1, . + 4 + (0x15 << 2)
    ctx->pc = 0x15B9F8u;
    {
        const bool branch_taken_0x15b9f8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        ctx->pc = 0x15B9FCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15B9F8u;
            // 0x15b9fc: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15b9f8) {
            ctx->pc = 0x15BA50u;
            goto label_15ba50;
        }
    }
    ctx->pc = 0x15BA00u;
    // 0x15ba00: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x15ba00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x15ba04: 0x50830013  beql        $a0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x15BA04u;
    {
        const bool branch_taken_0x15ba04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15ba04) {
            ctx->pc = 0x15BA08u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA04u;
            // 0x15ba08: 0x240a0040  addiu       $t2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BA54u;
            goto label_15ba54;
        }
    }
    ctx->pc = 0x15BA0Cu;
    // 0x15ba0c: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x15ba0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x15ba10: 0x5083000d  beql        $a0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x15BA10u;
    {
        const bool branch_taken_0x15ba10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15ba10) {
            ctx->pc = 0x15BA14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA10u;
            // 0x15ba14: 0x240a0040  addiu       $t2, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BA48u;
            goto label_15ba48;
        }
    }
    ctx->pc = 0x15BA18u;
    // 0x15ba18: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x15ba18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x15ba1c: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x15BA1Cu;
    {
        const bool branch_taken_0x15ba1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15ba1c) {
            ctx->pc = 0x15BA20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA1Cu;
            // 0x15ba20: 0x240a0080  addiu       $t2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BA40u;
            goto label_15ba40;
        }
    }
    ctx->pc = 0x15BA24u;
    // 0x15ba24: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x15ba24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x15ba28: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15BA28u;
    {
        const bool branch_taken_0x15ba28 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x15ba28) {
            ctx->pc = 0x15BA2Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA28u;
            // 0x15ba2c: 0x240a0080  addiu       $t2, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BA38u;
            goto label_15ba38;
        }
    }
    ctx->pc = 0x15BA30u;
    // 0x15ba30: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x15BA30u;
    {
        const bool branch_taken_0x15ba30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ba30) {
            ctx->pc = 0x15BA58u;
            goto label_15ba58;
        }
    }
    ctx->pc = 0x15BA38u;
label_15ba38:
    // 0x15ba38: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15BA38u;
    {
        const bool branch_taken_0x15ba38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BA3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA38u;
            // 0x15ba3c: 0x140482d  daddu       $t1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba38) {
            ctx->pc = 0x15BA58u;
            goto label_15ba58;
        }
    }
    ctx->pc = 0x15BA40u;
label_15ba40:
    // 0x15ba40: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15BA40u;
    {
        const bool branch_taken_0x15ba40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BA44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA40u;
            // 0x15ba44: 0x24090040  addiu       $t1, $zero, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba40) {
            ctx->pc = 0x15BA58u;
            goto label_15ba58;
        }
    }
    ctx->pc = 0x15BA48u;
label_15ba48:
    // 0x15ba48: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x15BA48u;
    {
        const bool branch_taken_0x15ba48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA48u;
            // 0x15ba4c: 0x140482d  daddu       $t1, $t2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba48) {
            ctx->pc = 0x15BA58u;
            goto label_15ba58;
        }
    }
    ctx->pc = 0x15BA50u;
label_15ba50:
    // 0x15ba50: 0x240a0040  addiu       $t2, $zero, 0x40
    ctx->pc = 0x15ba50u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_15ba54:
    // 0x15ba54: 0x24090020  addiu       $t1, $zero, 0x20
    ctx->pc = 0x15ba54u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_15ba58:
    // 0x15ba58: 0x54a60004  bnel        $a1, $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x15BA58u;
    {
        const bool branch_taken_0x15ba58 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 6));
        if (branch_taken_0x15ba58) {
            ctx->pc = 0x15BA5Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA58u;
            // 0x15ba5c: 0xa6082b  sltu        $at, $a1, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BA6Cu;
            goto label_15ba6c;
        }
    }
    ctx->pc = 0x15BA60u;
    // 0x15ba60: 0xace50000  sw          $a1, 0x0($a3)
    ctx->pc = 0x15ba60u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
    // 0x15ba64: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x15BA64u;
    {
        const bool branch_taken_0x15ba64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BA68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA64u;
            // 0x15ba68: 0xad060000  sw          $a2, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba64) {
            ctx->pc = 0x15BABCu;
            goto label_15babc;
        }
    }
    ctx->pc = 0x15BA6Cu;
label_15ba6c:
    // 0x15ba6c: 0x50200009  beql        $at, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x15BA6Cu;
    {
        const bool branch_taken_0x15ba6c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ba6c) {
            ctx->pc = 0x15BA70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA6Cu;
            // 0x15ba70: 0xc5082b  sltu        $at, $a2, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BA94u;
            goto label_15ba94;
        }
    }
    ctx->pc = 0x15BA74u;
    // 0x15ba74: 0xaa082b  sltu        $at, $a1, $t2
    ctx->pc = 0x15ba74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x15ba78: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15BA78u;
    {
        const bool branch_taken_0x15ba78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ba78) {
            ctx->pc = 0x15BA7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA78u;
            // 0x15ba7c: 0xace50000  sw          $a1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BA8Cu;
            goto label_15ba8c;
        }
    }
    ctx->pc = 0x15BA80u;
    // 0x15ba80: 0xacea0000  sw          $t2, 0x0($a3)
    ctx->pc = 0x15ba80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
    // 0x15ba84: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x15BA84u;
    {
        const bool branch_taken_0x15ba84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BA88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA84u;
            // 0x15ba88: 0xad060000  sw          $a2, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba84) {
            ctx->pc = 0x15BABCu;
            goto label_15babc;
        }
    }
    ctx->pc = 0x15BA8Cu;
label_15ba8c:
    // 0x15ba8c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x15BA8Cu;
    {
        const bool branch_taken_0x15ba8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15BA90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15BA8Cu;
            // 0x15ba90: 0xad060000  sw          $a2, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ba8c) {
            ctx->pc = 0x15BABCu;
            goto label_15babc;
        }
    }
    ctx->pc = 0x15BA94u;
label_15ba94:
    // 0x15ba94: 0x10200009  beqz        $at, . + 4 + (0x9 << 2)
    ctx->pc = 0x15BA94u;
    {
        const bool branch_taken_0x15ba94 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15ba94) {
            ctx->pc = 0x15BABCu;
            goto label_15babc;
        }
    }
    ctx->pc = 0x15BA9Cu;
    // 0x15ba9c: 0xaa082b  sltu        $at, $a1, $t2
    ctx->pc = 0x15ba9cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 10)) ? 1 : 0);
    // 0x15baa0: 0x50200002  beql        $at, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x15BAA0u;
    {
        const bool branch_taken_0x15baa0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15baa0) {
            ctx->pc = 0x15BAA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BAA0u;
            // 0x15baa4: 0xace50000  sw          $a1, 0x0($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BAACu;
            goto label_15baac;
        }
    }
    ctx->pc = 0x15BAA8u;
    // 0x15baa8: 0xacea0000  sw          $t2, 0x0($a3)
    ctx->pc = 0x15baa8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 10));
label_15baac:
    // 0x15baac: 0xc9082b  sltu        $at, $a2, $t1
    ctx->pc = 0x15baacu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 9)) ? 1 : 0);
    // 0x15bab0: 0x50200002  beql        $at, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x15BAB0u;
    {
        const bool branch_taken_0x15bab0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x15bab0) {
            ctx->pc = 0x15BAB4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15BAB0u;
            // 0x15bab4: 0xad060000  sw          $a2, 0x0($t0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15BABCu;
            goto label_15babc;
        }
    }
    ctx->pc = 0x15BAB8u;
    // 0x15bab8: 0xad090000  sw          $t1, 0x0($t0)
    ctx->pc = 0x15bab8u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 9));
label_15babc:
    // 0x15babc: 0x3e00008  jr          $ra
    ctx->pc = 0x15BABCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15BAC4u;
    // 0x15bac4: 0x0  nop
    ctx->pc = 0x15bac4u;
    // NOP
    // 0x15bac8: 0x0  nop
    ctx->pc = 0x15bac8u;
    // NOP
    // 0x15bacc: 0x0  nop
    ctx->pc = 0x15baccu;
    // NOP
}
