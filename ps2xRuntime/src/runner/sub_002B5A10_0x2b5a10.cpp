#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002B5A10
// Address: 0x2b5a10 - 0x2b5b10
void sub_002B5A10_0x2b5a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B5A10_0x2b5a10");
#endif

    switch (ctx->pc) {
        case 0x2b5a4cu: goto label_2b5a4c;
        case 0x2b5a78u: goto label_2b5a78;
        case 0x2b5accu: goto label_2b5acc;
        case 0x2b5af8u: goto label_2b5af8;
        default: break;
    }

    ctx->pc = 0x2b5a10u;

    // 0x2b5a10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b5a10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b5a14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b5a14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b5a18: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b5a18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b5a1c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b5a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b5a20: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b5a20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5a24: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B5A24u;
    {
        const bool branch_taken_0x2b5a24 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5A28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5A24u;
            // 0x2b5a28: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5a24) {
            ctx->pc = 0x2B5A78u;
            goto label_2b5a78;
        }
    }
    ctx->pc = 0x2B5A2Cu;
    // 0x2b5a2c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b5a2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b5a30: 0x24422a30  addiu       $v0, $v0, 0x2A30
    ctx->pc = 0x2b5a30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10800));
    // 0x2b5a34: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2B5A34u;
    {
        const bool branch_taken_0x2b5a34 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5A34u;
            // 0x2b5a38: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5a34) {
            ctx->pc = 0x2B5A60u;
            goto label_2b5a60;
        }
    }
    ctx->pc = 0x2B5A3Cu;
    // 0x2b5a3c: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b5a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b5a40: 0x24422a20  addiu       $v0, $v0, 0x2A20
    ctx->pc = 0x2b5a40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10784));
    // 0x2b5a44: 0xc0c6064  jal         func_318190
    ctx->pc = 0x2B5A44u;
    SET_GPR_U32(ctx, 31, 0x2B5A4Cu);
    ctx->pc = 0x2B5A48u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5A44u;
            // 0x2b5a48: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318190u;
    if (runtime->hasFunction(0x318190u)) {
        auto targetFn = runtime->lookupFunction(0x318190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5A4Cu; }
        if (ctx->pc != 0x2B5A4Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318190_0x318190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5A4Cu; }
        if (ctx->pc != 0x2B5A4Cu) { return; }
    }
    ctx->pc = 0x2B5A4Cu;
label_2b5a4c:
    // 0x2b5a4c: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5A4Cu;
    {
        const bool branch_taken_0x2b5a4c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5a4c) {
            ctx->pc = 0x2B5A50u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5A4Cu;
            // 0x2b5a50: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B5A64u;
            goto label_2b5a64;
        }
    }
    ctx->pc = 0x2B5A54u;
    // 0x2b5a54: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b5a54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b5a58: 0x24422a10  addiu       $v0, $v0, 0x2A10
    ctx->pc = 0x2b5a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10768));
    // 0x2b5a5c: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2b5a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2b5a60:
    // 0x2b5a60: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2b5a60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2b5a64:
    // 0x2b5a64: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b5a64u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2b5a68: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5A68u;
    {
        const bool branch_taken_0x2b5a68 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b5a68) {
            ctx->pc = 0x2B5A6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5A68u;
            // 0x2b5a6c: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B5A7Cu;
            goto label_2b5a7c;
        }
    }
    ctx->pc = 0x2B5A70u;
    // 0x2b5a70: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2B5A70u;
    SET_GPR_U32(ctx, 31, 0x2B5A78u);
    ctx->pc = 0x2B5A74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5A70u;
            // 0x2b5a74: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5A78u; }
        if (ctx->pc != 0x2B5A78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5A78u; }
        if (ctx->pc != 0x2B5A78u) { return; }
    }
    ctx->pc = 0x2B5A78u;
label_2b5a78:
    // 0x2b5a78: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b5a78u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b5a7c:
    // 0x2b5a7c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b5a7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5a80: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b5a80u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5a84: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b5a84u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5a88: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5A88u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5A8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5A88u;
            // 0x2b5a8c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B5A90u;
    // 0x2b5a90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b5a90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b5a94: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2b5a94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2b5a98: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2b5a98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2b5a9c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2b5a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2b5aa0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2b5aa0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2b5aa4: 0x12200014  beqz        $s1, . + 4 + (0x14 << 2)
    ctx->pc = 0x2B5AA4u;
    {
        const bool branch_taken_0x2b5aa4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5AA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5AA4u;
            // 0x2b5aa8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5aa4) {
            ctx->pc = 0x2B5AF8u;
            goto label_2b5af8;
        }
    }
    ctx->pc = 0x2B5AACu;
    // 0x2b5aac: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b5aacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b5ab0: 0x24424490  addiu       $v0, $v0, 0x4490
    ctx->pc = 0x2b5ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17552));
    // 0x2b5ab4: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2B5AB4u;
    {
        const bool branch_taken_0x2b5ab4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2B5AB8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5AB4u;
            // 0x2b5ab8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2b5ab4) {
            ctx->pc = 0x2B5AE0u;
            goto label_2b5ae0;
        }
    }
    ctx->pc = 0x2B5ABCu;
    // 0x2b5abc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b5abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b5ac0: 0x24422a20  addiu       $v0, $v0, 0x2A20
    ctx->pc = 0x2b5ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10784));
    // 0x2b5ac4: 0xc0c6064  jal         func_318190
    ctx->pc = 0x2B5AC4u;
    SET_GPR_U32(ctx, 31, 0x2B5ACCu);
    ctx->pc = 0x2B5AC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5AC4u;
            // 0x2b5ac8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x318190u;
    if (runtime->hasFunction(0x318190u)) {
        auto targetFn = runtime->lookupFunction(0x318190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5ACCu; }
        if (ctx->pc != 0x2B5ACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00318190_0x318190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5ACCu; }
        if (ctx->pc != 0x2B5ACCu) { return; }
    }
    ctx->pc = 0x2B5ACCu;
label_2b5acc:
    // 0x2b5acc: 0x52200005  beql        $s1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x2B5ACCu;
    {
        const bool branch_taken_0x2b5acc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b5acc) {
            ctx->pc = 0x2B5AD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5ACCu;
            // 0x2b5ad0: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B5AE4u;
            goto label_2b5ae4;
        }
    }
    ctx->pc = 0x2B5AD4u;
    // 0x2b5ad4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2b5ad4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2b5ad8: 0x24422a10  addiu       $v0, $v0, 0x2A10
    ctx->pc = 0x2b5ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 10768));
    // 0x2b5adc: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x2b5adcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
label_2b5ae0:
    // 0x2b5ae0: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2b5ae0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2b5ae4:
    // 0x2b5ae4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b5ae4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2b5ae8: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B5AE8u;
    {
        const bool branch_taken_0x2b5ae8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b5ae8) {
            ctx->pc = 0x2B5AECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5AE8u;
            // 0x2b5aec: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2B5AFCu;
            goto label_2b5afc;
        }
    }
    ctx->pc = 0x2B5AF0u;
    // 0x2b5af0: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2B5AF0u;
    SET_GPR_U32(ctx, 31, 0x2B5AF8u);
    ctx->pc = 0x2B5AF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5AF0u;
            // 0x2b5af4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5AF8u; }
        if (ctx->pc != 0x2B5AF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2B5AF8u; }
        if (ctx->pc != 0x2B5AF8u) { return; }
    }
    ctx->pc = 0x2B5AF8u;
label_2b5af8:
    // 0x2b5af8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2b5af8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2b5afc:
    // 0x2b5afc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2b5afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b5b00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2b5b00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b5b04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2b5b04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b5b08: 0x3e00008  jr          $ra
    ctx->pc = 0x2B5B08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2B5B0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2B5B08u;
            // 0x2b5b0c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2B5B10u;
}
