#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001ACCD8
// Address: 0x1accd8 - 0x1ace58
void sub_001ACCD8_0x1accd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001ACCD8_0x1accd8");
#endif

    switch (ctx->pc) {
        case 0x1acd48u: goto label_1acd48;
        case 0x1acd80u: goto label_1acd80;
        case 0x1ace14u: goto label_1ace14;
        default: break;
    }

    ctx->pc = 0x1accd8u;

    // 0x1accd8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1accd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1accdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1accdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1acce0: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x1acce0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acce4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1acce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1acce8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1acce8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1accec: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1accecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1accf0: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x1accf0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1accf4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1accf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1accf8: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x1accf8u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1accfc: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x1accfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x1acd00: 0xffb70038  sd          $s7, 0x38($sp)
    ctx->pc = 0x1acd00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 23));
    // 0x1acd04: 0x100b82d  daddu       $s7, $t0, $zero
    ctx->pc = 0x1acd04u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acd08: 0xffbe0040  sd          $fp, 0x40($sp)
    ctx->pc = 0x1acd08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 30));
    // 0x1acd0c: 0x120f02d  daddu       $fp, $t1, $zero
    ctx->pc = 0x1acd0cu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acd10: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1acd10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x1acd14: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x1acd14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x1acd18: 0xffbf0048  sd          $ra, 0x48($sp)
    ctx->pc = 0x1acd18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 31));
    // 0x1acd1c: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x1acd1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x1acd20: 0xde230150  ld          $v1, 0x150($s1)
    ctx->pc = 0x1acd20u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 336)));
    // 0x1acd24: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1acd24u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x1acd28: 0x3c160064  lui         $s6, 0x64
    ctx->pc = 0x1acd28u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)100 << 16));
    // 0x1acd2c: 0x2c2b021  addu        $s6, $s6, $v0
    ctx->pc = 0x1acd2cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x1acd30: 0x8ed6ae40  lw          $s6, -0x51C0($s6)
    ctx->pc = 0x1acd30u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294946368)));
    // 0x1acd34: 0x4610009  bgez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ACD34u;
    {
        const bool branch_taken_0x1acd34 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x1ACD38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACD34u;
            // 0x1acd38: 0x8e750014  lw          $s5, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acd34) {
            ctx->pc = 0x1ACD5Cu;
            goto label_1acd5c;
        }
    }
    ctx->pc = 0x1ACD3Cu;
    // 0x1acd3c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1acd3cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acd40: 0xc06b396  jal         func_1ACE58
    ctx->pc = 0x1ACD40u;
    SET_GPR_U32(ctx, 31, 0x1ACD48u);
    ctx->pc = 0x1ACD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACD40u;
            // 0x1acd44: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ACE58u;
    if (runtime->hasFunction(0x1ACE58u)) {
        auto targetFn = runtime->lookupFunction(0x1ACE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACD48u; }
        if (ctx->pc != 0x1ACD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ACE58_0x1ace58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACD48u; }
        if (ctx->pc != 0x1ACD48u) { return; }
    }
    ctx->pc = 0x1ACD48u;
label_1acd48:
    // 0x1acd48: 0xde430000  ld          $v1, 0x0($s2)
    ctx->pc = 0x1acd48u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1acd4c: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x1acd4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x1acd50: 0x28620000  slti        $v0, $v1, 0x0
    ctx->pc = 0x1acd50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1acd54: 0x2180b  movn        $v1, $zero, $v0
    ctx->pc = 0x1acd54u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 0));
    // 0x1acd58: 0xfe230150  sd          $v1, 0x150($s1)
    ctx->pc = 0x1acd58u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 336), GPR_U64(ctx, 3));
label_1acd5c:
    // 0x1acd5c: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x1acd5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1acd60: 0x26140010  addiu       $s4, $s0, 0x10
    ctx->pc = 0x1acd60u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1acd64: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x1acd64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acd68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1acd68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acd6c: 0x43882f  dsubu       $s1, $v0, $v1
    ctx->pc = 0x1acd6cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x1acd70: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1acd70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1acd74: 0x2a220000  slti        $v0, $s1, 0x0
    ctx->pc = 0x1acd74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1acd78: 0xc04a4e2  jal         func_129388
    ctx->pc = 0x1ACD78u;
    SET_GPR_U32(ctx, 31, 0x1ACD80u);
    ctx->pc = 0x1ACD7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACD78u;
            // 0x1acd7c: 0x2880b  movn        $s1, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129388u;
    if (runtime->hasFunction(0x129388u)) {
        auto targetFn = runtime->lookupFunction(0x129388u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACD80u; }
        if (ctx->pc != 0x1ACD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129388_0x129388(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACD80u; }
        if (ctx->pc != 0x1ACD80u) { return; }
    }
    ctx->pc = 0x1ACD80u;
label_1acd80:
    // 0x1acd80: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x1ACD80u;
    {
        const bool branch_taken_0x1acd80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACD80u;
            // 0x1acd84: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acd80) {
            ctx->pc = 0x1ACDC8u;
            goto label_1acdc8;
        }
    }
    ctx->pc = 0x1ACD88u;
    // 0x1acd88: 0xde430000  ld          $v1, 0x0($s2)
    ctx->pc = 0x1acd88u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1acd8c: 0x8e640018  lw          $a0, 0x18($s3)
    ctx->pc = 0x1acd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x1acd90: 0xfe830000  sd          $v1, 0x0($s4)
    ctx->pc = 0x1acd90u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 0), GPR_U64(ctx, 3));
    // 0x1acd94: 0xde420008  ld          $v0, 0x8($s2)
    ctx->pc = 0x1acd94u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x1acd98: 0xae150000  sw          $s5, 0x0($s0)
    ctx->pc = 0x1acd98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 21));
    // 0x1acd9c: 0xfe020018  sd          $v0, 0x18($s0)
    ctx->pc = 0x1acd9cu;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x1acda0: 0x14850005  bne         $a0, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1ACDA0u;
    {
        const bool branch_taken_0x1acda0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1ACDA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACDA0u;
            // 0x1acda4: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acda0) {
            ctx->pc = 0x1ACDB8u;
            goto label_1acdb8;
        }
    }
    ctx->pc = 0x1ACDA8u;
    // 0x1acda8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1acda8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1acdac: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACDACu;
    {
        const bool branch_taken_0x1acdac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACDB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACDACu;
            // 0x1acdb0: 0xae020008  sw          $v0, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acdac) {
            ctx->pc = 0x1ACDBCu;
            goto label_1acdbc;
        }
    }
    ctx->pc = 0x1ACDB4u;
    // 0x1acdb4: 0x0  nop
    ctx->pc = 0x1acdb4u;
    // NOP
label_1acdb8:
    // 0x1acdb8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1acdb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
label_1acdbc:
    // 0x1acdbc: 0xde420000  ld          $v0, 0x0($s2)
    ctx->pc = 0x1acdbcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1acdc0: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1ACDC0u;
    {
        const bool branch_taken_0x1acdc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1ACDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACDC0u;
            // 0x1acdc4: 0xffc20000  sd          $v0, 0x0($fp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 30), 0), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1acdc0) {
            ctx->pc = 0x1ACE20u;
            goto label_1ace20;
        }
    }
    ctx->pc = 0x1ACDC8u;
label_1acdc8:
    // 0x1acdc8: 0x52e00009  beql        $s7, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1ACDC8u;
    {
        const bool branch_taken_0x1acdc8 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acdc8) {
            ctx->pc = 0x1ACDCCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACDC8u;
            // 0x1acdcc: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1ACDF0u;
            goto label_1acdf0;
        }
    }
    ctx->pc = 0x1ACDD0u;
    // 0x1acdd0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x1acdd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1acdd4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1acdd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1acdd8: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1acdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1acddc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1acddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1acde0: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x1acde0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x1acde4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1acde4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1acde8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1acde8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1acdec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x1acdecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1acdf0:
    // 0x1acdf0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x1acdf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1acdf4: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x1acdf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x1acdf8: 0x2a42023  subu        $a0, $s5, $a0
    ctx->pc = 0x1acdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 4)));
    // 0x1acdfc: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x1acdfcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1ace00: 0x83102a  slt         $v0, $a0, $v1
    ctx->pc = 0x1ace00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1ace04: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x1ace04u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 4));
    // 0x1ace08: 0xc42021  addu        $a0, $a2, $a0
    ctx->pc = 0x1ace08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 4)));
    // 0x1ace0c: 0xc06b396  jal         func_1ACE58
    ctx->pc = 0x1ACE0Cu;
    SET_GPR_U32(ctx, 31, 0x1ACE14u);
    ctx->pc = 0x1ACE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACE0Cu;
            // 0x1ace10: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ACE58u;
    if (runtime->hasFunction(0x1ACE58u)) {
        auto targetFn = runtime->lookupFunction(0x1ACE58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACE14u; }
        if (ctx->pc != 0x1ACE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ACE58_0x1ace58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1ACE14u; }
        if (ctx->pc != 0x1ACE14u) { return; }
    }
    ctx->pc = 0x1ACE14u;
label_1ace14:
    // 0x1ace14: 0x222882d  daddu       $s1, $s1, $v0
    ctx->pc = 0x1ace14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 2));
    // 0x1ace18: 0x2a220000  slti        $v0, $s1, 0x0
    ctx->pc = 0x1ace18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1ace1c: 0x2880b  movn        $s1, $zero, $v0
    ctx->pc = 0x1ace1cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 0));
label_1ace20:
    // 0x1ace20: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x1ace20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ace24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1ace24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ace28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1ace28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ace2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1ace2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ace30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1ace30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1ace34: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1ace34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ace38: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x1ace38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1ace3c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x1ace3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ace40: 0xdfb70038  ld          $s7, 0x38($sp)
    ctx->pc = 0x1ace40u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1ace44: 0xdfbe0040  ld          $fp, 0x40($sp)
    ctx->pc = 0x1ace44u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ace48: 0xdfbf0048  ld          $ra, 0x48($sp)
    ctx->pc = 0x1ace48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1ace4c: 0x3e00008  jr          $ra
    ctx->pc = 0x1ACE4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1ACE50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1ACE4Cu;
            // 0x1ace50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1ACE54u;
    // 0x1ace54: 0x0  nop
    ctx->pc = 0x1ace54u;
    // NOP
}
