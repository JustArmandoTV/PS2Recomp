#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0047CB70
// Address: 0x47cb70 - 0x47cd60
void sub_0047CB70_0x47cb70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047CB70_0x47cb70");
#endif

    switch (ctx->pc) {
        case 0x47cb9cu: goto label_47cb9c;
        case 0x47cbbcu: goto label_47cbbc;
        case 0x47cbd0u: goto label_47cbd0;
        case 0x47cbecu: goto label_47cbec;
        case 0x47cc18u: goto label_47cc18;
        case 0x47cc7cu: goto label_47cc7c;
        case 0x47cc84u: goto label_47cc84;
        case 0x47cc8cu: goto label_47cc8c;
        case 0x47cca4u: goto label_47cca4;
        case 0x47ccacu: goto label_47ccac;
        case 0x47ccbcu: goto label_47ccbc;
        case 0x47ccf0u: goto label_47ccf0;
        case 0x47cd04u: goto label_47cd04;
        case 0x47cd18u: goto label_47cd18;
        case 0x47cd2cu: goto label_47cd2c;
        default: break;
    }

    ctx->pc = 0x47cb70u;

    // 0x47cb70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x47cb70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x47cb74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x47cb74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x47cb78: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47cb78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x47cb7c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47cb7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47cb80: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x47cb80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47cb84: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x47cb84u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47cb88: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x47cb88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x47cb8c: 0x501023  subu        $v0, $v0, $s0
    ctx->pc = 0x47cb8cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x47cb90: 0x21140  sll         $v0, $v0, 5
    ctx->pc = 0x47cb90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x47cb94: 0xc040138  jal         func_1004E0
    ctx->pc = 0x47CB94u;
    SET_GPR_U32(ctx, 31, 0x47CB9Cu);
    ctx->pc = 0x47CB98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47CB94u;
            // 0x47cb98: 0x24440010  addiu       $a0, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CB9Cu; }
        if (ctx->pc != 0x47CB9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CB9Cu; }
        if (ctx->pc != 0x47CB9Cu) { return; }
    }
    ctx->pc = 0x47CB9Cu;
label_47cb9c:
    // 0x47cb9c: 0x3c050048  lui         $a1, 0x48
    ctx->pc = 0x47cb9cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)72 << 16));
    // 0x47cba0: 0x3c06002e  lui         $a2, 0x2E
    ctx->pc = 0x47cba0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)46 << 16));
    // 0x47cba4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x47cba4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47cba8: 0x24a5cc30  addiu       $a1, $a1, -0x33D0
    ctx->pc = 0x47cba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954032));
    // 0x47cbac: 0x24c68460  addiu       $a2, $a2, -0x7BA0
    ctx->pc = 0x47cbacu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935648));
    // 0x47cbb0: 0x240701e0  addiu       $a3, $zero, 0x1E0
    ctx->pc = 0x47cbb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x47cbb4: 0xc040840  jal         func_102100
    ctx->pc = 0x47CBB4u;
    SET_GPR_U32(ctx, 31, 0x47CBBCu);
    ctx->pc = 0x47CBB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47CBB4u;
            // 0x47cbb8: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x102100u;
    if (runtime->hasFunction(0x102100u)) {
        auto targetFn = runtime->lookupFunction(0x102100u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CBBCu; }
        if (ctx->pc != 0x47CBBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00102100_0x102100(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CBBCu; }
        if (ctx->pc != 0x47CBBCu) { return; }
    }
    ctx->pc = 0x47CBBCu;
label_47cbbc:
    // 0x47cbbc: 0xae220010  sw          $v0, 0x10($s1)
    ctx->pc = 0x47cbbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 2));
    // 0x47cbc0: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x47cbc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x47cbc4: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x47cbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x47cbc8: 0xc040138  jal         func_1004E0
    ctx->pc = 0x47CBC8u;
    SET_GPR_U32(ctx, 31, 0x47CBD0u);
    ctx->pc = 0x47CBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47CBC8u;
            // 0x47cbcc: 0x22080  sll         $a0, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1004E0u;
    if (runtime->hasFunction(0x1004E0u)) {
        auto targetFn = runtime->lookupFunction(0x1004E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CBD0u; }
        if (ctx->pc != 0x47CBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001004E0_0x1004e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CBD0u; }
        if (ctx->pc != 0x47CBD0u) { return; }
    }
    ctx->pc = 0x47CBD0u;
label_47cbd0:
    // 0x47cbd0: 0xae22001c  sw          $v0, 0x1C($s1)
    ctx->pc = 0x47cbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 2));
    // 0x47cbd4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x47cbd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47cbd8: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x47cbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x47cbdc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x47cbdcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47cbe0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x47cbe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x47cbe4: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x47CBE4u;
    SET_GPR_U32(ctx, 31, 0x47CBECu);
    ctx->pc = 0x47CBE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47CBE4u;
            // 0x47cbe8: 0x23080  sll         $a2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CBECu; }
        if (ctx->pc != 0x47CBECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CBECu; }
        if (ctx->pc != 0x47CBECu) { return; }
    }
    ctx->pc = 0x47CBECu;
label_47cbec:
    // 0x47cbec: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x47cbecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x47cbf0: 0x102880  sll         $a1, $s0, 2
    ctx->pc = 0x47cbf0u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x47cbf4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x47cbf4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47cbf8: 0x451821  addu        $v1, $v0, $a1
    ctx->pc = 0x47cbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x47cbfc: 0x651021  addu        $v0, $v1, $a1
    ctx->pc = 0x47cbfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x47cc00: 0xae230014  sw          $v1, 0x14($s1)
    ctx->pc = 0x47cc00u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
    // 0x47cc04: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x47cc04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x47cc08: 0xae30000c  sw          $s0, 0xC($s1)
    ctx->pc = 0x47cc08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
    // 0x47cc0c: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x47cc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x47cc10: 0xc11f370  jal         func_47CDC0
    ctx->pc = 0x47CC10u;
    SET_GPR_U32(ctx, 31, 0x47CC18u);
    ctx->pc = 0x47CC14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47CC10u;
            // 0x47cc14: 0xae200008  sw          $zero, 0x8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x47CDC0u;
    if (runtime->hasFunction(0x47CDC0u)) {
        auto targetFn = runtime->lookupFunction(0x47CDC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CC18u; }
        if (ctx->pc != 0x47CC18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0047CDC0_0x47cdc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CC18u; }
        if (ctx->pc != 0x47CC18u) { return; }
    }
    ctx->pc = 0x47CC18u;
label_47cc18:
    // 0x47cc18: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x47cc18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47cc1c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47cc1cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47cc20: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47cc20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47cc24: 0x3e00008  jr          $ra
    ctx->pc = 0x47CC24u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47CC28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47CC24u;
            // 0x47cc28: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47CC2Cu;
    // 0x47cc2c: 0x0  nop
    ctx->pc = 0x47cc2cu;
    // NOP
    // 0x47cc30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x47cc30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x47cc34: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x47cc34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x47cc38: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x47cc38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x47cc3c: 0x24422e00  addiu       $v0, $v0, 0x2E00
    ctx->pc = 0x47cc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11776));
    // 0x47cc40: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x47cc40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x47cc44: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47cc44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x47cc48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47cc48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47cc4c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x47cc4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x47cc50: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x47cc50u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47cc54: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x47cc54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x47cc58: 0x26110030  addiu       $s1, $s0, 0x30
    ctx->pc = 0x47cc58u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x47cc5c: 0x24422df0  addiu       $v0, $v0, 0x2DF0
    ctx->pc = 0x47cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11760));
    // 0x47cc60: 0x26320010  addiu       $s2, $s1, 0x10
    ctx->pc = 0x47cc60u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x47cc64: 0xac820030  sw          $v0, 0x30($a0)
    ctx->pc = 0x47cc64u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 48), GPR_U32(ctx, 2));
    // 0x47cc68: 0xac8000d0  sw          $zero, 0xD0($a0)
    ctx->pc = 0x47cc68u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 208), GPR_U32(ctx, 0));
    // 0x47cc6c: 0xac8000d4  sw          $zero, 0xD4($a0)
    ctx->pc = 0x47cc6cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 212), GPR_U32(ctx, 0));
    // 0x47cc70: 0xa08000d8  sb          $zero, 0xD8($a0)
    ctx->pc = 0x47cc70u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 216), (uint8_t)GPR_U32(ctx, 0));
    // 0x47cc74: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x47CC74u;
    SET_GPR_U32(ctx, 31, 0x47CC7Cu);
    ctx->pc = 0x47CC78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47CC74u;
            // 0x47cc78: 0x26440060  addiu       $a0, $s2, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CC7Cu; }
        if (ctx->pc != 0x47CC7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CC7Cu; }
        if (ctx->pc != 0x47CC7Cu) { return; }
    }
    ctx->pc = 0x47CC7Cu;
label_47cc7c:
    // 0x47cc7c: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x47CC7Cu;
    SET_GPR_U32(ctx, 31, 0x47CC84u);
    ctx->pc = 0x47CC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47CC7Cu;
            // 0x47cc80: 0x26440070  addiu       $a0, $s2, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 112));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CC84u; }
        if (ctx->pc != 0x47CC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CC84u; }
        if (ctx->pc != 0x47CC84u) { return; }
    }
    ctx->pc = 0x47CC84u;
label_47cc84:
    // 0x47cc84: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x47CC84u;
    SET_GPR_U32(ctx, 31, 0x47CC8Cu);
    ctx->pc = 0x47CC88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47CC84u;
            // 0x47cc88: 0x26440080  addiu       $a0, $s2, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 128));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CC8Cu; }
        if (ctx->pc != 0x47CC8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CC8Cu; }
        if (ctx->pc != 0x47CC8Cu) { return; }
    }
    ctx->pc = 0x47CC8Cu;
label_47cc8c:
    // 0x47cc8c: 0xae40009c  sw          $zero, 0x9C($s2)
    ctx->pc = 0x47cc8cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 156), GPR_U32(ctx, 0));
    // 0x47cc90: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x47cc90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47cc94: 0xae4000a0  sw          $zero, 0xA0($s2)
    ctx->pc = 0x47cc94u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 160), GPR_U32(ctx, 0));
    // 0x47cc98: 0xae4000a4  sw          $zero, 0xA4($s2)
    ctx->pc = 0x47cc98u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 164), GPR_U32(ctx, 0));
    // 0x47cc9c: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x47CC9Cu;
    SET_GPR_U32(ctx, 31, 0x47CCA4u);
    ctx->pc = 0x47CCA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47CC9Cu;
            // 0x47cca0: 0xae4000a8  sw          $zero, 0xA8($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CCA4u; }
        if (ctx->pc != 0x47CCA4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CCA4u; }
        if (ctx->pc != 0x47CCA4u) { return; }
    }
    ctx->pc = 0x47CCA4u;
label_47cca4:
    // 0x47cca4: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x47CCA4u;
    SET_GPR_U32(ctx, 31, 0x47CCACu);
    ctx->pc = 0x47CCA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47CCA4u;
            // 0x47cca8: 0x26440050  addiu       $a0, $s2, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CCACu; }
        if (ctx->pc != 0x47CCACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CCACu; }
        if (ctx->pc != 0x47CCACu) { return; }
    }
    ctx->pc = 0x47CCACu;
label_47ccac:
    // 0x47ccac: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x47ccacu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x47ccb0: 0x26440040  addiu       $a0, $s2, 0x40
    ctx->pc = 0x47ccb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 64));
    // 0x47ccb4: 0xc04cc04  jal         func_133010
    ctx->pc = 0x47CCB4u;
    SET_GPR_U32(ctx, 31, 0x47CCBCu);
    ctx->pc = 0x47CCB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47CCB4u;
            // 0x47ccb8: 0x24a5f600  addiu       $a1, $a1, -0xA00 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964736));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133010u;
    if (runtime->hasFunction(0x133010u)) {
        auto targetFn = runtime->lookupFunction(0x133010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CCBCu; }
        if (ctx->pc != 0x47CCBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133010_0x133010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CCBCu; }
        if (ctx->pc != 0x47CCBCu) { return; }
    }
    ctx->pc = 0x47CCBCu;
label_47ccbc:
    // 0x47ccbc: 0xae200100  sw          $zero, 0x100($s1)
    ctx->pc = 0x47ccbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 256), GPR_U32(ctx, 0));
    // 0x47ccc0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x47ccc0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x47ccc4: 0xae200104  sw          $zero, 0x104($s1)
    ctx->pc = 0x47ccc4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 260), GPR_U32(ctx, 0));
    // 0x47ccc8: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x47ccc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x47cccc: 0xae200108  sw          $zero, 0x108($s1)
    ctx->pc = 0x47ccccu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 264), GPR_U32(ctx, 0));
    // 0x47ccd0: 0x262400c0  addiu       $a0, $s1, 0xC0
    ctx->pc = 0x47ccd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 192));
    // 0x47ccd4: 0xa6200110  sh          $zero, 0x110($s1)
    ctx->pc = 0x47ccd4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 272), (uint16_t)GPR_U32(ctx, 0));
    // 0x47ccd8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x47ccd8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x47ccdc: 0xa6200112  sh          $zero, 0x112($s1)
    ctx->pc = 0x47ccdcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 274), (uint16_t)GPR_U32(ctx, 0));
    // 0x47cce0: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x47cce0u;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x47cce4: 0xa6220114  sh          $v0, 0x114($s1)
    ctx->pc = 0x47cce4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 276), (uint16_t)GPR_U32(ctx, 2));
    // 0x47cce8: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x47CCE8u;
    SET_GPR_U32(ctx, 31, 0x47CCF0u);
    ctx->pc = 0x47CCECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47CCE8u;
            // 0x47ccec: 0xa6200116  sh          $zero, 0x116($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 278), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CCF0u; }
        if (ctx->pc != 0x47CCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CCF0u; }
        if (ctx->pc != 0x47CCF0u) { return; }
    }
    ctx->pc = 0x47CCF0u;
label_47ccf0:
    // 0x47ccf0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x47ccf0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x47ccf4: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x47ccf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
    // 0x47ccf8: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x47ccf8u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x47ccfc: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x47CCFCu;
    SET_GPR_U32(ctx, 31, 0x47CD04u);
    ctx->pc = 0x47CD00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47CCFCu;
            // 0x47cd00: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CD04u; }
        if (ctx->pc != 0x47CD04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CD04u; }
        if (ctx->pc != 0x47CD04u) { return; }
    }
    ctx->pc = 0x47CD04u;
label_47cd04:
    // 0x47cd04: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x47cd04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x47cd08: 0x262400e0  addiu       $a0, $s1, 0xE0
    ctx->pc = 0x47cd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 224));
    // 0x47cd0c: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x47cd0cu;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x47cd10: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x47CD10u;
    SET_GPR_U32(ctx, 31, 0x47CD18u);
    ctx->pc = 0x47CD14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47CD10u;
            // 0x47cd14: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CD18u; }
        if (ctx->pc != 0x47CD18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CD18u; }
        if (ctx->pc != 0x47CD18u) { return; }
    }
    ctx->pc = 0x47CD18u;
label_47cd18:
    // 0x47cd18: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x47cd18u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x47cd1c: 0x262400f0  addiu       $a0, $s1, 0xF0
    ctx->pc = 0x47cd1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 240));
    // 0x47cd20: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x47cd20u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x47cd24: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x47CD24u;
    SET_GPR_U32(ctx, 31, 0x47CD2Cu);
    ctx->pc = 0x47CD28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x47CD24u;
            // 0x47cd28: 0x46006386  mov.s       $f14, $f12 (Delay Slot)
        ctx->f[14] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CD2Cu; }
        if (ctx->pc != 0x47CD2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47CD2Cu; }
        if (ctx->pc != 0x47CD2Cu) { return; }
    }
    ctx->pc = 0x47CD2Cu;
label_47cd2c:
    // 0x47cd2c: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x47cd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x47cd30: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x47cd30u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47cd34: 0x24632e10  addiu       $v1, $v1, 0x2E10
    ctx->pc = 0x47cd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 11792));
    // 0x47cd38: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x47cd38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x47cd3c: 0xae0001c8  sw          $zero, 0x1C8($s0)
    ctx->pc = 0x47cd3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 456), GPR_U32(ctx, 0));
    // 0x47cd40: 0xae0001d4  sw          $zero, 0x1D4($s0)
    ctx->pc = 0x47cd40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 468), GPR_U32(ctx, 0));
    // 0x47cd44: 0xae0001dc  sw          $zero, 0x1DC($s0)
    ctx->pc = 0x47cd44u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 476), GPR_U32(ctx, 0));
    // 0x47cd48: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x47cd48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x47cd4c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x47cd4cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47cd50: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47cd50u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47cd54: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47cd54u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47cd58: 0x3e00008  jr          $ra
    ctx->pc = 0x47CD58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x47CD5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x47CD58u;
            // 0x47cd5c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x47CD60u;
}
