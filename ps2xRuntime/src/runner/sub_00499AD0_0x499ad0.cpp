#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00499AD0
// Address: 0x499ad0 - 0x49a010
void sub_00499AD0_0x499ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00499AD0_0x499ad0");
#endif

    switch (ctx->pc) {
        case 0x499b1cu: goto label_499b1c;
        case 0x499b38u: goto label_499b38;
        case 0x499b94u: goto label_499b94;
        case 0x499bb4u: goto label_499bb4;
        case 0x499bc4u: goto label_499bc4;
        case 0x499c30u: goto label_499c30;
        case 0x499c44u: goto label_499c44;
        case 0x499c70u: goto label_499c70;
        case 0x499c94u: goto label_499c94;
        case 0x499ca4u: goto label_499ca4;
        case 0x499cd0u: goto label_499cd0;
        case 0x499d00u: goto label_499d00;
        case 0x499d10u: goto label_499d10;
        case 0x499d20u: goto label_499d20;
        case 0x499d64u: goto label_499d64;
        case 0x499d70u: goto label_499d70;
        case 0x499d84u: goto label_499d84;
        case 0x499da8u: goto label_499da8;
        case 0x499db8u: goto label_499db8;
        case 0x499df8u: goto label_499df8;
        case 0x499e1cu: goto label_499e1c;
        case 0x499e88u: goto label_499e88;
        case 0x499e94u: goto label_499e94;
        case 0x499ea4u: goto label_499ea4;
        case 0x499ee8u: goto label_499ee8;
        case 0x499ef4u: goto label_499ef4;
        case 0x499f04u: goto label_499f04;
        case 0x499f48u: goto label_499f48;
        case 0x499f80u: goto label_499f80;
        case 0x499fd8u: goto label_499fd8;
        case 0x499ff0u: goto label_499ff0;
        default: break;
    }

    ctx->pc = 0x499ad0u;

    // 0x499ad0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x499ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x499ad4: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x499ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x499ad8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x499ad8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x499adc: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x499adcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x499ae0: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x499ae0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x499ae4: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x499ae4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x499ae8: 0xa0b82d  daddu       $s7, $a1, $zero
    ctx->pc = 0x499ae8u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499aec: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x499aecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x499af0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x499af0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499af4: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x499af4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x499af8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x499af8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x499afc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x499afcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x499b00: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x499b00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x499b04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x499b04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x499b08: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x499b08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499b0c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x499b0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x499b10: 0xac507bb0  sw          $s0, 0x7BB0($v0)
    ctx->pc = 0x499b10u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 31664), GPR_U32(ctx, 16));
    // 0x499b14: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x499B14u;
    SET_GPR_U32(ctx, 31, 0x499B1Cu);
    ctx->pc = 0x499B18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499B14u;
            // 0x499b18: 0x24847bd0  addiu       $a0, $a0, 0x7BD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31696));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499B1Cu; }
        if (ctx->pc != 0x499B1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499B1Cu; }
        if (ctx->pc != 0x499B1Cu) { return; }
    }
    ctx->pc = 0x499B1Cu;
label_499b1c:
    // 0x499b1c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x499b1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x499b20: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x499b20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x499b24: 0x24847bf0  addiu       $a0, $a0, 0x7BF0
    ctx->pc = 0x499b24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31728));
    // 0x499b28: 0xa0407bd0  sb          $zero, 0x7BD0($v0)
    ctx->pc = 0x499b28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 31696), (uint8_t)GPR_U32(ctx, 0));
    // 0x499b2c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x499b2cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499b30: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x499B30u;
    SET_GPR_U32(ctx, 31, 0x499B38u);
    ctx->pc = 0x499B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499B30u;
            // 0x499b34: 0x24060014  addiu       $a2, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499B38u; }
        if (ctx->pc != 0x499B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499B38u; }
        if (ctx->pc != 0x499B38u) { return; }
    }
    ctx->pc = 0x499B38u;
label_499b38:
    // 0x499b38: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x499b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x499b3c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x499b3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x499b40: 0xa0407bf0  sb          $zero, 0x7BF0($v0)
    ctx->pc = 0x499b40u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 31728), (uint8_t)GPR_U32(ctx, 0));
    // 0x499b44: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x499b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x499b48: 0xa0437bf1  sb          $v1, 0x7BF1($v0)
    ctx->pc = 0x499b48u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 31729), (uint8_t)GPR_U32(ctx, 3));
    // 0x499b4c: 0x92040000  lbu         $a0, 0x0($s0)
    ctx->pc = 0x499b4cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x499b50: 0x92030001  lbu         $v1, 0x1($s0)
    ctx->pc = 0x499b50u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x499b54: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x499b54u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x499b58: 0x38840046  xori        $a0, $a0, 0x46
    ctx->pc = 0x499b58u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)70);
    // 0x499b5c: 0x38630047  xori        $v1, $v1, 0x47
    ctx->pc = 0x499b5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)71);
    // 0x499b60: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x499b60u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x499b64: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x499b64u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x499b68: 0x38420042  xori        $v0, $v0, 0x42
    ctx->pc = 0x499b68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)66);
    // 0x499b6c: 0x831825  or          $v1, $a0, $v1
    ctx->pc = 0x499b6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x499b70: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x499b70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x499b74: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x499b74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x499b78: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x499B78u;
    {
        const bool branch_taken_0x499b78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x499b78) {
            ctx->pc = 0x499B7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x499B78u;
            // 0x499b7c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x499B88u;
            goto label_499b88;
        }
    }
    ctx->pc = 0x499B80u;
    // 0x499b80: 0x100000f2  b           . + 4 + (0xF2 << 2)
    ctx->pc = 0x499B80u;
    {
        const bool branch_taken_0x499b80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499B84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x499B80u;
            // 0x499b84: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499b80) {
            ctx->pc = 0x499F4Cu;
            goto label_499f4c;
        }
    }
    ctx->pc = 0x499B88u;
label_499b88:
    // 0x499b88: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x499b88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x499b8c: 0xc04a508  jal         func_129420
    ctx->pc = 0x499B8Cu;
    SET_GPR_U32(ctx, 31, 0x499B94u);
    ctx->pc = 0x499B90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499B8Cu;
            // 0x499b90: 0x24060034  addiu       $a2, $zero, 0x34 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499B94u; }
        if (ctx->pc != 0x499B94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499B94u; }
        if (ctx->pc != 0x499B94u) { return; }
    }
    ctx->pc = 0x499B94u;
label_499b94:
    // 0x499b94: 0x8ee20020  lw          $v0, 0x20($s7)
    ctx->pc = 0x499b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 32)));
    // 0x499b98: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x499b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x499b9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x499b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x499ba0: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x499ba0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499ba4: 0x26100038  addiu       $s0, $s0, 0x38
    ctx->pc = 0x499ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 56));
    // 0x499ba8: 0x26f60020  addiu       $s6, $s7, 0x20
    ctx->pc = 0x499ba8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
    // 0x499bac: 0xc0400c4  jal         func_100310
    ctx->pc = 0x499BACu;
    SET_GPR_U32(ctx, 31, 0x499BB4u);
    ctx->pc = 0x499BB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499BACu;
            // 0x499bb0: 0x220c0  sll         $a0, $v0, 3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100310u;
    if (runtime->hasFunction(0x100310u)) {
        auto targetFn = runtime->lookupFunction(0x100310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499BB4u; }
        if (ctx->pc != 0x499BB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100310_0x100310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499BB4u; }
        if (ctx->pc != 0x499BB4u) { return; }
    }
    ctx->pc = 0x499BB4u;
label_499bb4:
    // 0x499bb4: 0xaee20034  sw          $v0, 0x34($s7)
    ctx->pc = 0x499bb4u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 52), GPR_U32(ctx, 2));
    // 0x499bb8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x499bb8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499bbc: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x499bbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499bc0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x499bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_499bc4:
    // 0x499bc4: 0x24020053  addiu       $v0, $zero, 0x53
    ctx->pc = 0x499bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 83));
    // 0x499bc8: 0x1062003b  beq         $v1, $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x499BC8u;
    {
        const bool branch_taken_0x499bc8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x499BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x499BC8u;
            // 0x499bcc: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499bc8) {
            ctx->pc = 0x499CB8u;
            goto label_499cb8;
        }
    }
    ctx->pc = 0x499BD0u;
    // 0x499bd0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x499bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x499bd4: 0x10620020  beq         $v1, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x499BD4u;
    {
        const bool branch_taken_0x499bd4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x499bd4) {
            ctx->pc = 0x499C58u;
            goto label_499c58;
        }
    }
    ctx->pc = 0x499BDCu;
    // 0x499bdc: 0x24020016  addiu       $v0, $zero, 0x16
    ctx->pc = 0x499bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
    // 0x499be0: 0x1062001d  beq         $v1, $v0, . + 4 + (0x1D << 2)
    ctx->pc = 0x499BE0u;
    {
        const bool branch_taken_0x499be0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x499be0) {
            ctx->pc = 0x499C58u;
            goto label_499c58;
        }
    }
    ctx->pc = 0x499BE8u;
    // 0x499be8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x499be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x499bec: 0x1062001a  beq         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x499BECu;
    {
        const bool branch_taken_0x499bec = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x499bec) {
            ctx->pc = 0x499C58u;
            goto label_499c58;
        }
    }
    ctx->pc = 0x499BF4u;
    // 0x499bf4: 0x24020024  addiu       $v0, $zero, 0x24
    ctx->pc = 0x499bf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    // 0x499bf8: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x499BF8u;
    {
        const bool branch_taken_0x499bf8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x499bf8) {
            ctx->pc = 0x499C18u;
            goto label_499c18;
        }
    }
    ctx->pc = 0x499C00u;
    // 0x499c00: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x499c00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x499c04: 0x1062004a  beq         $v1, $v0, . + 4 + (0x4A << 2)
    ctx->pc = 0x499C04u;
    {
        const bool branch_taken_0x499c04 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x499c04) {
            ctx->pc = 0x499D30u;
            goto label_499d30;
        }
    }
    ctx->pc = 0x499C0Cu;
    // 0x499c0c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x499C0Cu;
    {
        const bool branch_taken_0x499c0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x499c0c) {
            ctx->pc = 0x499D30u;
            goto label_499d30;
        }
    }
    ctx->pc = 0x499C14u;
    // 0x499c14: 0x0  nop
    ctx->pc = 0x499c14u;
    // NOP
label_499c18:
    // 0x499c18: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x499c18u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x499c1c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x499c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x499c20: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x499c20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x499c24: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x499c24u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x499c28: 0xc040140  jal         func_100500
    ctx->pc = 0x499C28u;
    SET_GPR_U32(ctx, 31, 0x499C30u);
    ctx->pc = 0x499C2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499C28u;
            // 0x499c2c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499C30u; }
        if (ctx->pc != 0x499C30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499C30u; }
        if (ctx->pc != 0x499C30u) { return; }
    }
    ctx->pc = 0x499C30u;
label_499c30:
    // 0x499c30: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x499c30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x499c34: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x499c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499c38: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x499c38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499c3c: 0xc04a508  jal         func_129420
    ctx->pc = 0x499C3Cu;
    SET_GPR_U32(ctx, 31, 0x499C44u);
    ctx->pc = 0x499C40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499C3Cu;
            // 0x499c40: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499C44u; }
        if (ctx->pc != 0x499C44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499C44u; }
        if (ctx->pc != 0x499C44u) { return; }
    }
    ctx->pc = 0x499C44u;
label_499c44:
    // 0x499c44: 0x26020008  addiu       $v0, $s0, 0x8
    ctx->pc = 0x499c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x499c48: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x499c48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x499c4c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x499c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x499c50: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x499C50u;
    {
        const bool branch_taken_0x499c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499C54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x499C50u;
            // 0x499c54: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499c50) {
            ctx->pc = 0x499D30u;
            goto label_499d30;
        }
    }
    ctx->pc = 0x499C58u;
label_499c58:
    // 0x499c58: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x499c58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x499c5c: 0x24040054  addiu       $a0, $zero, 0x54
    ctx->pc = 0x499c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
    // 0x499c60: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x499c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x499c64: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x499c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x499c68: 0xc040140  jal         func_100500
    ctx->pc = 0x499C68u;
    SET_GPR_U32(ctx, 31, 0x499C70u);
    ctx->pc = 0x499C6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499C68u;
            // 0x499c6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499C70u; }
        if (ctx->pc != 0x499C70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499C70u; }
        if (ctx->pc != 0x499C70u) { return; }
    }
    ctx->pc = 0x499C70u;
label_499c70:
    // 0x499c70: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x499c70u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499c74: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x499c74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x499c78: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x499c78u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x499c7c: 0x26640004  addiu       $a0, $s3, 0x4
    ctx->pc = 0x499c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x499c80: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x499c80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x499c84: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x499c84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x499c88: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x499c88u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x499c8c: 0xc04a508  jal         func_129420
    ctx->pc = 0x499C8Cu;
    SET_GPR_U32(ctx, 31, 0x499C94u);
    ctx->pc = 0x499C90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499C8Cu;
            // 0x499c90: 0xa6600002  sh          $zero, 0x2($s3) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 19), 2), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499C94u; }
        if (ctx->pc != 0x499C94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499C94u; }
        if (ctx->pc != 0x499C94u) { return; }
    }
    ctx->pc = 0x499C94u;
label_499c94:
    // 0x499c94: 0x26650014  addiu       $a1, $s3, 0x14
    ctx->pc = 0x499c94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x499c98: 0x26130014  addiu       $s3, $s0, 0x14
    ctx->pc = 0x499c98u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x499c9c: 0xc126650  jal         func_499940
    ctx->pc = 0x499C9Cu;
    SET_GPR_U32(ctx, 31, 0x499CA4u);
    ctx->pc = 0x499CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499C9Cu;
            // 0x499ca0: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x499940u;
    if (runtime->hasFunction(0x499940u)) {
        auto targetFn = runtime->lookupFunction(0x499940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499CA4u; }
        if (ctx->pc != 0x499CA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00499940_0x499940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499CA4u; }
        if (ctx->pc != 0x499CA4u) { return; }
    }
    ctx->pc = 0x499CA4u;
label_499ca4:
    // 0x499ca4: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x499ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x499ca8: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x499ca8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x499cac: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x499cacu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x499cb0: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x499CB0u;
    {
        const bool branch_taken_0x499cb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x499CB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x499CB0u;
            // 0x499cb4: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499cb0) {
            ctx->pc = 0x499D30u;
            goto label_499d30;
        }
    }
    ctx->pc = 0x499CB8u;
label_499cb8:
    // 0x499cb8: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x499cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x499cbc: 0x24040064  addiu       $a0, $zero, 0x64
    ctx->pc = 0x499cbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x499cc0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x499cc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x499cc4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x499cc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x499cc8: 0xc040140  jal         func_100500
    ctx->pc = 0x499CC8u;
    SET_GPR_U32(ctx, 31, 0x499CD0u);
    ctx->pc = 0x499CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499CC8u;
            // 0x499ccc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499CD0u; }
        if (ctx->pc != 0x499CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499CD0u; }
        if (ctx->pc != 0x499CD0u) { return; }
    }
    ctx->pc = 0x499CD0u;
label_499cd0:
    // 0x499cd0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x499cd0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499cd4: 0xae220004  sw          $v0, 0x4($s1)
    ctx->pc = 0x499cd4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 2));
    // 0x499cd8: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x499cd8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x499cdc: 0x26640004  addiu       $a0, $s3, 0x4
    ctx->pc = 0x499cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x499ce0: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x499ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x499ce4: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x499ce4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x499ce8: 0xa6620000  sh          $v0, 0x0($s3)
    ctx->pc = 0x499ce8u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x499cec: 0x92020002  lbu         $v0, 0x2($s0)
    ctx->pc = 0x499cecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x499cf0: 0xa2620002  sb          $v0, 0x2($s3)
    ctx->pc = 0x499cf0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x499cf4: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x499cf4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x499cf8: 0xc04a508  jal         func_129420
    ctx->pc = 0x499CF8u;
    SET_GPR_U32(ctx, 31, 0x499D00u);
    ctx->pc = 0x499CFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499CF8u;
            // 0x499cfc: 0xa2620003  sb          $v0, 0x3($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 3), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499D00u; }
        if (ctx->pc != 0x499D00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499D00u; }
        if (ctx->pc != 0x499D00u) { return; }
    }
    ctx->pc = 0x499D00u;
label_499d00:
    // 0x499d00: 0x26640014  addiu       $a0, $s3, 0x14
    ctx->pc = 0x499d00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 20));
    // 0x499d04: 0x26050014  addiu       $a1, $s0, 0x14
    ctx->pc = 0x499d04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
    // 0x499d08: 0xc04a508  jal         func_129420
    ctx->pc = 0x499D08u;
    SET_GPR_U32(ctx, 31, 0x499D10u);
    ctx->pc = 0x499D0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499D08u;
            // 0x499d0c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499D10u; }
        if (ctx->pc != 0x499D10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499D10u; }
        if (ctx->pc != 0x499D10u) { return; }
    }
    ctx->pc = 0x499D10u;
label_499d10:
    // 0x499d10: 0x26650024  addiu       $a1, $s3, 0x24
    ctx->pc = 0x499d10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 36));
    // 0x499d14: 0x26130024  addiu       $s3, $s0, 0x24
    ctx->pc = 0x499d14u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x499d18: 0xc126650  jal         func_499940
    ctx->pc = 0x499D18u;
    SET_GPR_U32(ctx, 31, 0x499D20u);
    ctx->pc = 0x499D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499D18u;
            // 0x499d1c: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x499940u;
    if (runtime->hasFunction(0x499940u)) {
        auto targetFn = runtime->lookupFunction(0x499940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499D20u; }
        if (ctx->pc != 0x499D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00499940_0x499940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499D20u; }
        if (ctx->pc != 0x499D20u) { return; }
    }
    ctx->pc = 0x499D20u;
label_499d20:
    // 0x499d20: 0x2621021  addu        $v0, $s3, $v0
    ctx->pc = 0x499d20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
    // 0x499d24: 0x26310008  addiu       $s1, $s1, 0x8
    ctx->pc = 0x499d24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x499d28: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x499d28u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x499d2c: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x499d2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_499d30:
    // 0x499d30: 0x8ec20000  lw          $v0, 0x0($s6)
    ctx->pc = 0x499d30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x499d34: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x499d34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x499d38: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x499d38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x499d3c: 0x5440ffa1  bnel        $v0, $zero, . + 4 + (-0x5F << 2)
    ctx->pc = 0x499D3Cu;
    {
        const bool branch_taken_0x499d3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x499d3c) {
            ctx->pc = 0x499D40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x499D3Cu;
            // 0x499d40: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x499BC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_499bc4;
        }
    }
    ctx->pc = 0x499D44u;
    // 0x499d44: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x499d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x499d48: 0x10400045  beqz        $v0, . + 4 + (0x45 << 2)
    ctx->pc = 0x499D48u;
    {
        const bool branch_taken_0x499d48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x499d48) {
            ctx->pc = 0x499E60u;
            goto label_499e60;
        }
    }
    ctx->pc = 0x499D50u;
    // 0x499d50: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x499d50u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x499d54: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x499d54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x499d58: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x499d58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x499d5c: 0xc0400c4  jal         func_100310
    ctx->pc = 0x499D5Cu;
    SET_GPR_U32(ctx, 31, 0x499D64u);
    ctx->pc = 0x499D60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499D5Cu;
            // 0x499d60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100310u;
    if (runtime->hasFunction(0x100310u)) {
        auto targetFn = runtime->lookupFunction(0x100310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499D64u; }
        if (ctx->pc != 0x499D64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100310_0x100310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499D64u; }
        if (ctx->pc != 0x499D64u) { return; }
    }
    ctx->pc = 0x499D64u;
label_499d64:
    // 0x499d64: 0xaee20038  sw          $v0, 0x38($s7)
    ctx->pc = 0x499d64u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 56), GPR_U32(ctx, 2));
    // 0x499d68: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x499d68u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499d6c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x499d6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_499d70:
    // 0x499d70: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x499d70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x499d74: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x499d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499d78: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x499d78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499d7c: 0xc04a508  jal         func_129420
    ctx->pc = 0x499D7Cu;
    SET_GPR_U32(ctx, 31, 0x499D84u);
    ctx->pc = 0x499D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499D7Cu;
            // 0x499d80: 0x24060008  addiu       $a2, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499D84u; }
        if (ctx->pc != 0x499D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499D84u; }
        if (ctx->pc != 0x499D84u) { return; }
    }
    ctx->pc = 0x499D84u;
label_499d84:
    // 0x499d84: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x499d84u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x499d88: 0x1040002d  beqz        $v0, . + 4 + (0x2D << 2)
    ctx->pc = 0x499D88u;
    {
        const bool branch_taken_0x499d88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x499D8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x499D88u;
            // 0x499d8c: 0x26140004  addiu       $s4, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499d88) {
            ctx->pc = 0x499E40u;
            goto label_499e40;
        }
    }
    ctx->pc = 0x499D90u;
    // 0x499d90: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x499d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x499d94: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x499d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x499d98: 0x220c0  sll         $a0, $v0, 3
    ctx->pc = 0x499d98u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x499d9c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x499d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x499da0: 0xc0400c4  jal         func_100310
    ctx->pc = 0x499DA0u;
    SET_GPR_U32(ctx, 31, 0x499DA8u);
    ctx->pc = 0x499DA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499DA0u;
            // 0x499da4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100310u;
    if (runtime->hasFunction(0x100310u)) {
        auto targetFn = runtime->lookupFunction(0x100310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499DA8u; }
        if (ctx->pc != 0x499DA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100310_0x100310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499DA8u; }
        if (ctx->pc != 0x499DA8u) { return; }
    }
    ctx->pc = 0x499DA8u;
label_499da8:
    // 0x499da8: 0xaea20004  sw          $v0, 0x4($s5)
    ctx->pc = 0x499da8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 2));
    // 0x499dac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x499dacu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499db0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x499db0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499db4: 0x0  nop
    ctx->pc = 0x499db4u;
    // NOP
label_499db8:
    // 0x499db8: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x499db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x499dbc: 0x96830000  lhu         $v1, 0x0($s4)
    ctx->pc = 0x499dbcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x499dc0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x499dc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x499dc4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x499dc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x499dc8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x499dc8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499dcc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x499dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x499dd0: 0xa4430000  sh          $v1, 0x0($v0)
    ctx->pc = 0x499dd0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x499dd4: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x499dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x499dd8: 0x96830002  lhu         $v1, 0x2($s4)
    ctx->pc = 0x499dd8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 20), 2)));
    // 0x499ddc: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x499ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x499de0: 0xa4430002  sh          $v1, 0x2($v0)
    ctx->pc = 0x499de0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 2), (uint16_t)GPR_U32(ctx, 3));
    // 0x499de4: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x499de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x499de8: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x499de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x499dec: 0x94440002  lhu         $a0, 0x2($v0)
    ctx->pc = 0x499decu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x499df0: 0xc0400c4  jal         func_100310
    ctx->pc = 0x499DF0u;
    SET_GPR_U32(ctx, 31, 0x499DF8u);
    ctx->pc = 0x499DF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499DF0u;
            // 0x499df4: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100310u;
    if (runtime->hasFunction(0x100310u)) {
        auto targetFn = runtime->lookupFunction(0x100310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499DF8u; }
        if (ctx->pc != 0x499DF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100310_0x100310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499DF8u; }
        if (ctx->pc != 0x499DF8u) { return; }
    }
    ctx->pc = 0x499DF8u;
label_499df8:
    // 0x499df8: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x499df8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x499dfc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x499dfcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x499e00: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x499e00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x499e04: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x499e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x499e08: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x499e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x499e0c: 0x94460002  lhu         $a2, 0x2($v0)
    ctx->pc = 0x499e0cu;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x499e10: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x499e10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x499e14: 0xc04a508  jal         func_129420
    ctx->pc = 0x499E14u;
    SET_GPR_U32(ctx, 31, 0x499E1Cu);
    ctx->pc = 0x499E18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499E14u;
            // 0x499e18: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499E1Cu; }
        if (ctx->pc != 0x499E1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499E1Cu; }
        if (ctx->pc != 0x499E1Cu) { return; }
    }
    ctx->pc = 0x499E1Cu;
label_499e1c:
    // 0x499e1c: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x499e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x499e20: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x499e20u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x499e24: 0x96a20000  lhu         $v0, 0x0($s5)
    ctx->pc = 0x499e24u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x499e28: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x499e28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x499e2c: 0x94630002  lhu         $v1, 0x2($v1)
    ctx->pc = 0x499e2cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x499e30: 0x262102b  sltu        $v0, $s3, $v0
    ctx->pc = 0x499e30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x499e34: 0x26520008  addiu       $s2, $s2, 0x8
    ctx->pc = 0x499e34u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
    // 0x499e38: 0x1440ffdf  bnez        $v0, . + 4 + (-0x21 << 2)
    ctx->pc = 0x499E38u;
    {
        const bool branch_taken_0x499e38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x499E3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x499E38u;
            // 0x499e3c: 0x283a021  addu        $s4, $s4, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499e38) {
            ctx->pc = 0x499DB8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_499db8;
        }
    }
    ctx->pc = 0x499E40u;
label_499e40:
    // 0x499e40: 0x2901023  subu        $v0, $s4, $s0
    ctx->pc = 0x499e40u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 16)));
    // 0x499e44: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x499e44u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x499e48: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x499e48u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x499e4c: 0x8ec20004  lw          $v0, 0x4($s6)
    ctx->pc = 0x499e4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4)));
    // 0x499e50: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x499e50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x499e54: 0x1440ffc6  bnez        $v0, . + 4 + (-0x3A << 2)
    ctx->pc = 0x499E54u;
    {
        const bool branch_taken_0x499e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x499E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x499E54u;
            // 0x499e58: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499e54) {
            ctx->pc = 0x499D70u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_499d70;
        }
    }
    ctx->pc = 0x499E5Cu;
    // 0x499e5c: 0x0  nop
    ctx->pc = 0x499e5cu;
    // NOP
label_499e60:
    // 0x499e60: 0x8ec30008  lw          $v1, 0x8($s6)
    ctx->pc = 0x499e60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x499e64: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x499E64u;
    {
        const bool branch_taken_0x499e64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x499e64) {
            ctx->pc = 0x499EC0u;
            goto label_499ec0;
        }
    }
    ctx->pc = 0x499E6Cu;
    // 0x499e6c: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x499e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x499e70: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x499e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x499e74: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x499e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x499e78: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x499e78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x499e7c: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x499e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x499e80: 0xc0400c4  jal         func_100310
    ctx->pc = 0x499E80u;
    SET_GPR_U32(ctx, 31, 0x499E88u);
    ctx->pc = 0x499E84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499E80u;
            // 0x499e84: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100310u;
    if (runtime->hasFunction(0x100310u)) {
        auto targetFn = runtime->lookupFunction(0x100310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499E88u; }
        if (ctx->pc != 0x499E88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100310_0x100310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499E88u; }
        if (ctx->pc != 0x499E88u) { return; }
    }
    ctx->pc = 0x499E88u;
label_499e88:
    // 0x499e88: 0xaee2003c  sw          $v0, 0x3C($s7)
    ctx->pc = 0x499e88u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 60), GPR_U32(ctx, 2));
    // 0x499e8c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x499e8cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499e90: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x499e90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_499e94:
    // 0x499e94: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x499e94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x499e98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x499e98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499e9c: 0xc126010  jal         func_498040
    ctx->pc = 0x499E9Cu;
    SET_GPR_U32(ctx, 31, 0x499EA4u);
    ctx->pc = 0x499EA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499E9Cu;
            // 0x499ea0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x498040u;
    if (runtime->hasFunction(0x498040u)) {
        auto targetFn = runtime->lookupFunction(0x498040u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499EA4u; }
        if (ctx->pc != 0x499EA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00498040_0x498040(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499EA4u; }
        if (ctx->pc != 0x499EA4u) { return; }
    }
    ctx->pc = 0x499EA4u;
label_499ea4:
    // 0x499ea4: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x499ea4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x499ea8: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x499ea8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x499eac: 0x8ec20008  lw          $v0, 0x8($s6)
    ctx->pc = 0x499eacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 8)));
    // 0x499eb0: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x499eb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x499eb4: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x499EB4u;
    {
        const bool branch_taken_0x499eb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x499EB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x499EB4u;
            // 0x499eb8: 0x2652000c  addiu       $s2, $s2, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499eb4) {
            ctx->pc = 0x499E94u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_499e94;
        }
    }
    ctx->pc = 0x499EBCu;
    // 0x499ebc: 0x0  nop
    ctx->pc = 0x499ebcu;
    // NOP
label_499ec0:
    // 0x499ec0: 0x8ec3000c  lw          $v1, 0xC($s6)
    ctx->pc = 0x499ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x499ec4: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x499EC4u;
    {
        const bool branch_taken_0x499ec4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x499ec4) {
            ctx->pc = 0x499F20u;
            goto label_499f20;
        }
    }
    ctx->pc = 0x499ECCu;
    // 0x499ecc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x499eccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x499ed0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x499ed0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x499ed4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x499ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x499ed8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x499ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x499edc: 0x22080  sll         $a0, $v0, 2
    ctx->pc = 0x499edcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x499ee0: 0xc0400c4  jal         func_100310
    ctx->pc = 0x499EE0u;
    SET_GPR_U32(ctx, 31, 0x499EE8u);
    ctx->pc = 0x499EE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499EE0u;
            // 0x499ee4: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100310u;
    if (runtime->hasFunction(0x100310u)) {
        auto targetFn = runtime->lookupFunction(0x100310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499EE8u; }
        if (ctx->pc != 0x499EE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100310_0x100310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499EE8u; }
        if (ctx->pc != 0x499EE8u) { return; }
    }
    ctx->pc = 0x499EE8u;
label_499ee8:
    // 0x499ee8: 0xaee20040  sw          $v0, 0x40($s7)
    ctx->pc = 0x499ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 64), GPR_U32(ctx, 2));
    // 0x499eec: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x499eecu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499ef0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x499ef0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_499ef4:
    // 0x499ef4: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x499ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x499ef8: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x499ef8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499efc: 0xc126414  jal         func_499050
    ctx->pc = 0x499EFCu;
    SET_GPR_U32(ctx, 31, 0x499F04u);
    ctx->pc = 0x499F00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499EFCu;
            // 0x499f00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x499050u;
    if (runtime->hasFunction(0x499050u)) {
        auto targetFn = runtime->lookupFunction(0x499050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499F04u; }
        if (ctx->pc != 0x499F04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00499050_0x499050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499F04u; }
        if (ctx->pc != 0x499F04u) { return; }
    }
    ctx->pc = 0x499F04u;
label_499f04:
    // 0x499f04: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x499f04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x499f08: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x499f08u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x499f0c: 0x8ec2000c  lw          $v0, 0xC($s6)
    ctx->pc = 0x499f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 12)));
    // 0x499f10: 0x222102b  sltu        $v0, $s1, $v0
    ctx->pc = 0x499f10u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x499f14: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x499F14u;
    {
        const bool branch_taken_0x499f14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x499F18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x499F14u;
            // 0x499f18: 0x26520014  addiu       $s2, $s2, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499f14) {
            ctx->pc = 0x499EF4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_499ef4;
        }
    }
    ctx->pc = 0x499F1Cu;
    // 0x499f1c: 0x0  nop
    ctx->pc = 0x499f1cu;
    // NOP
label_499f20:
    // 0x499f20: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x499f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x499f24: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x499F24u;
    {
        const bool branch_taken_0x499f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x499f24) {
            ctx->pc = 0x499F28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x499F24u;
            // 0x499f28: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x499F4Cu;
            goto label_499f4c;
        }
    }
    ctx->pc = 0x499F2Cu;
    // 0x499f2c: 0x8ee2001c  lw          $v0, 0x1C($s7)
    ctx->pc = 0x499f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 28)));
    // 0x499f30: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x499f30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499f34: 0x26e50044  addiu       $a1, $s7, 0x44
    ctx->pc = 0x499f34u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 23), 68));
    // 0x499f38: 0xaee2004c  sw          $v0, 0x4C($s7)
    ctx->pc = 0x499f38u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 76), GPR_U32(ctx, 2));
    // 0x499f3c: 0x8ec20010  lw          $v0, 0x10($s6)
    ctx->pc = 0x499f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 16)));
    // 0x499f40: 0xc126350  jal         func_498D40
    ctx->pc = 0x499F40u;
    SET_GPR_U32(ctx, 31, 0x499F48u);
    ctx->pc = 0x499F44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499F40u;
            // 0x499f44: 0xaee20050  sw          $v0, 0x50($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 80), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x498D40u;
    if (runtime->hasFunction(0x498D40u)) {
        auto targetFn = runtime->lookupFunction(0x498D40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499F48u; }
        if (ctx->pc != 0x499F48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00498D40_0x498d40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499F48u; }
        if (ctx->pc != 0x499F48u) { return; }
    }
    ctx->pc = 0x499F48u;
label_499f48:
    // 0x499f48: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x499f48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_499f4c:
    // 0x499f4c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x499f4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x499f50: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x499f50u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x499f54: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x499f54u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x499f58: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x499f58u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x499f5c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x499f5cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x499f60: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x499f60u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x499f64: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x499f64u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x499f68: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x499f68u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x499f6c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x499f6cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x499f70: 0x3e00008  jr          $ra
    ctx->pc = 0x499F70u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x499F74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x499F70u;
            // 0x499f74: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x499F78u;
    // 0x499f78: 0x0  nop
    ctx->pc = 0x499f78u;
    // NOP
    // 0x499f7c: 0x0  nop
    ctx->pc = 0x499f7cu;
    // NOP
label_499f80:
    // 0x499f80: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x499f80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x499f84: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x499f84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x499f88: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x499f88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x499f8c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x499f8cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x499f90: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x499f90u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499f94: 0x12000016  beqz        $s0, . + 4 + (0x16 << 2)
    ctx->pc = 0x499F94u;
    {
        const bool branch_taken_0x499f94 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x499F98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x499F94u;
            // 0x499f98: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499f94) {
            ctx->pc = 0x499FF0u;
            goto label_499ff0;
        }
    }
    ctx->pc = 0x499F9Cu;
    // 0x499f9c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x499f9cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x499fa0: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x499fa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x499fa4: 0x2463fae0  addiu       $v1, $v1, -0x520
    ctx->pc = 0x499fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965984));
    // 0x499fa8: 0x2442fb18  addiu       $v0, $v0, -0x4E8
    ctx->pc = 0x499fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966040));
    // 0x499fac: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x499facu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x499fb0: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x499FB0u;
    {
        const bool branch_taken_0x499fb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x499FB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x499FB0u;
            // 0x499fb4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x499fb0) {
            ctx->pc = 0x499FD8u;
            goto label_499fd8;
        }
    }
    ctx->pc = 0x499FB8u;
    // 0x499fb8: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x499fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x499fbc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x499fbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x499fc0: 0x2463fb90  addiu       $v1, $v1, -0x470
    ctx->pc = 0x499fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294966160));
    // 0x499fc4: 0x2442fbc8  addiu       $v0, $v0, -0x438
    ctx->pc = 0x499fc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966216));
    // 0x499fc8: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x499fc8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x499fcc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x499fccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x499fd0: 0xc126804  jal         func_49A010
    ctx->pc = 0x499FD0u;
    SET_GPR_U32(ctx, 31, 0x499FD8u);
    ctx->pc = 0x499FD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499FD0u;
            // 0x499fd4: 0xae020064  sw          $v0, 0x64($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 100), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x49A010u;
    if (runtime->hasFunction(0x49A010u)) {
        auto targetFn = runtime->lookupFunction(0x49A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499FD8u; }
        if (ctx->pc != 0x499FD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0049A010_0x49a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499FD8u; }
        if (ctx->pc != 0x499FD8u) { return; }
    }
    ctx->pc = 0x499FD8u;
label_499fd8:
    // 0x499fd8: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x499fd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
    // 0x499fdc: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x499fdcu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x499fe0: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x499FE0u;
    {
        const bool branch_taken_0x499fe0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x499fe0) {
            ctx->pc = 0x499FE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x499FE0u;
            // 0x499fe4: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x499FF4u;
            goto label_499ff4;
        }
    }
    ctx->pc = 0x499FE8u;
    // 0x499fe8: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x499FE8u;
    SET_GPR_U32(ctx, 31, 0x499FF0u);
    ctx->pc = 0x499FECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x499FE8u;
            // 0x499fec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499FF0u; }
        if (ctx->pc != 0x499FF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x499FF0u; }
        if (ctx->pc != 0x499FF0u) { return; }
    }
    ctx->pc = 0x499FF0u;
label_499ff0:
    // 0x499ff0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x499ff0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_499ff4:
    // 0x499ff4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x499ff4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x499ff8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x499ff8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x499ffc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x499ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x49a000: 0x3e00008  jr          $ra
    ctx->pc = 0x49A000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x49A004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x49A000u;
            // 0x49a004: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x49A008u;
    // 0x49a008: 0x0  nop
    ctx->pc = 0x49a008u;
    // NOP
    // 0x49a00c: 0x0  nop
    ctx->pc = 0x49a00cu;
    // NOP
}
