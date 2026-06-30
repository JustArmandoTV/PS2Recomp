#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013FB10
// Address: 0x13fb10 - 0x13fdb0
void sub_0013FB10_0x13fb10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013FB10_0x13fb10");
#endif

    switch (ctx->pc) {
        case 0x13fb50u: goto label_13fb50;
        case 0x13fb60u: goto label_13fb60;
        case 0x13fb84u: goto label_13fb84;
        case 0x13fbacu: goto label_13fbac;
        case 0x13fc28u: goto label_13fc28;
        case 0x13fc64u: goto label_13fc64;
        case 0x13fcc0u: goto label_13fcc0;
        case 0x13fcd0u: goto label_13fcd0;
        case 0x13fce4u: goto label_13fce4;
        case 0x13fcfcu: goto label_13fcfc;
        case 0x13fd34u: goto label_13fd34;
        case 0x13fd48u: goto label_13fd48;
        default: break;
    }

    ctx->pc = 0x13fb10u;

    // 0x13fb10: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x13fb10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x13fb14: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x13fb14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x13fb18: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13fb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13fb1c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13fb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13fb20: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x13fb20u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fb24: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13fb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13fb28: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x13fb28u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fb2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13fb2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13fb30: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x13fb30u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x13fb34: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13fb34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13fb38: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x13fb38u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fb3c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x13fb3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fb40: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x13fb40u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fb44: 0x24841fa0  addiu       $a0, $a0, 0x1FA0
    ctx->pc = 0x13fb44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8096));
    // 0x13fb48: 0xc04fe9c  jal         func_13FA70
    ctx->pc = 0x13FB48u;
    SET_GPR_U32(ctx, 31, 0x13FB50u);
    ctx->pc = 0x13FB4Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FB48u;
            // 0x13fb4c: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA70u;
    if (runtime->hasFunction(0x13FA70u)) {
        auto targetFn = runtime->lookupFunction(0x13FA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FB50u; }
        if (ctx->pc != 0x13FB50u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013FA70_0x13fa70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FB50u; }
        if (ctx->pc != 0x13FB50u) { return; }
    }
    ctx->pc = 0x13FB50u;
label_13fb50:
    // 0x13fb50: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13fb50u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13fb54: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13fb54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13fb58: 0xc0573e0  jal         func_15CF80
    ctx->pc = 0x13FB58u;
    SET_GPR_U32(ctx, 31, 0x13FB60u);
    ctx->pc = 0x13FB5Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FB58u;
            // 0x13fb5c: 0x24a55520  addiu       $a1, $a1, 0x5520 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 21792));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FB60u; }
        if (ctx->pc != 0x13FB60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF80_0x15cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FB60u; }
        if (ctx->pc != 0x13FB60u) { return; }
    }
    ctx->pc = 0x13FB60u;
label_13fb60:
    // 0x13fb60: 0x8e700008  lw          $s0, 0x8($s3)
    ctx->pc = 0x13fb60u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x13fb64: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13fb64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13fb68: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x13fb68u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fb6c: 0xac605774  sw          $zero, 0x5774($v1)
    ctx->pc = 0x13fb6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22388), GPR_U32(ctx, 0));
    // 0x13fb70: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x13fb70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x13fb74: 0x83082a  slt         $at, $a0, $v1
    ctx->pc = 0x13fb74u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13fb78: 0x10200083  beqz        $at, . + 4 + (0x83 << 2)
    ctx->pc = 0x13FB78u;
    {
        const bool branch_taken_0x13fb78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fb78) {
            ctx->pc = 0x13FD88u;
            goto label_13fd88;
        }
    }
    ctx->pc = 0x13FB80u;
    // 0x13fb80: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x13fb80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_13fb84:
    // 0x13fb84: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13fb84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13fb88: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13FB88u;
    {
        const bool branch_taken_0x13fb88 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FB88u;
            // 0x13fb8c: 0xac435770  sw          $v1, 0x5770($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 22384), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fb88) {
            ctx->pc = 0x13FBA0u;
            goto label_13fba0;
        }
    }
    ctx->pc = 0x13FB90u;
    // 0x13fb90: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x13fb90u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13fb94: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x13fb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x13fb98: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x13fb98u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x13fb9c: 0x0  nop
    ctx->pc = 0x13fb9cu;
    // NOP
label_13fba0:
    // 0x13fba0: 0x8e650000  lw          $a1, 0x0($s3)
    ctx->pc = 0x13fba0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x13fba4: 0xc05001c  jal         func_140070
    ctx->pc = 0x13FBA4u;
    SET_GPR_U32(ctx, 31, 0x13FBACu);
    ctx->pc = 0x13FBA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FBA4u;
            // 0x13fba8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x140070u;
    if (runtime->hasFunction(0x140070u)) {
        auto targetFn = runtime->lookupFunction(0x140070u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FBACu; }
        if (ctx->pc != 0x13FBACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00140070_0x140070(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FBACu; }
        if (ctx->pc != 0x13FBACu) { return; }
    }
    ctx->pc = 0x13FBACu;
label_13fbac:
    // 0x13fbac: 0x14400066  bnez        $v0, . + 4 + (0x66 << 2)
    ctx->pc = 0x13FBACu;
    {
        const bool branch_taken_0x13fbac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13fbac) {
            ctx->pc = 0x13FD48u;
            goto label_13fd48;
        }
    }
    ctx->pc = 0x13FBB4u;
    // 0x13fbb4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13fbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13fbb8: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13fbb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13fbbc: 0x8c445760  lw          $a0, 0x5760($v0)
    ctx->pc = 0x13fbbcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22368)));
    // 0x13fbc0: 0x3c08006c  lui         $t0, 0x6C
    ctx->pc = 0x13fbc0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)108 << 16));
    // 0x13fbc4: 0x3c06006c  lui         $a2, 0x6C
    ctx->pc = 0x13fbc4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)108 << 16));
    // 0x13fbc8: 0x3c07006c  lui         $a3, 0x6C
    ctx->pc = 0x13fbc8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)108 << 16));
    // 0x13fbcc: 0x3c05006c  lui         $a1, 0x6C
    ctx->pc = 0x13fbccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)108 << 16));
    // 0x13fbd0: 0xac645764  sw          $a0, 0x5764($v1)
    ctx->pc = 0x13fbd0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22372), GPR_U32(ctx, 4));
    // 0x13fbd4: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13fbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13fbd8: 0x8e0a0018  lw          $t2, 0x18($s0)
    ctx->pc = 0x13fbd8u;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x13fbdc: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13fbdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13fbe0: 0x8c495768  lw          $t1, 0x5768($v0)
    ctx->pc = 0x13fbe0u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22376)));
    // 0x13fbe4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13fbe4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13fbe8: 0x24845760  addiu       $a0, $a0, 0x5760
    ctx->pc = 0x13fbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 22368));
    // 0x13fbec: 0xad0a5760  sw          $t2, 0x5760($t0)
    ctx->pc = 0x13fbecu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 22368), GPR_U32(ctx, 10));
    // 0x13fbf0: 0x8e880014  lw          $t0, 0x14($s4)
    ctx->pc = 0x13fbf0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 20)));
    // 0x13fbf4: 0xa50c0  sll         $t2, $t2, 3
    ctx->pc = 0x13fbf4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 3));
    // 0x13fbf8: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13fbf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13fbfc: 0xacc9576c  sw          $t1, 0x576C($a2)
    ctx->pc = 0x13fbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 22380), GPR_U32(ctx, 9));
    // 0x13fc00: 0x10a3021  addu        $a2, $t0, $t2
    ctx->pc = 0x13fc00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 10)));
    // 0x13fc04: 0xace6577c  sw          $a2, 0x577C($a3)
    ctx->pc = 0x13fc04u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 22396), GPR_U32(ctx, 6));
    // 0x13fc08: 0x8e06001c  lw          $a2, 0x1C($s0)
    ctx->pc = 0x13fc08u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x13fc0c: 0xaca65768  sw          $a2, 0x5768($a1)
    ctx->pc = 0x13fc0cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 22376), GPR_U32(ctx, 6));
    // 0x13fc10: 0x8e85001c  lw          $a1, 0x1C($s4)
    ctx->pc = 0x13fc10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x13fc14: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x13fc14u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x13fc18: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x13fc18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x13fc1c: 0xac405798  sw          $zero, 0x5798($v0)
    ctx->pc = 0x13fc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 22424), GPR_U32(ctx, 0));
    // 0x13fc20: 0xc05055c  jal         func_141570
    ctx->pc = 0x13FC20u;
    SET_GPR_U32(ctx, 31, 0x13FC28u);
    ctx->pc = 0x13FC24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FC20u;
            // 0x13fc24: 0xac655780  sw          $a1, 0x5780($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22400), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x141570u;
    if (runtime->hasFunction(0x141570u)) {
        auto targetFn = runtime->lookupFunction(0x141570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FC28u; }
        if (ctx->pc != 0x13FC28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00141570_0x141570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FC28u; }
        if (ctx->pc != 0x13FC28u) { return; }
    }
    ctx->pc = 0x13FC28u;
label_13fc28:
    // 0x13fc28: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x13FC28u;
    {
        const bool branch_taken_0x13fc28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fc28) {
            ctx->pc = 0x13FD48u;
            goto label_13fd48;
        }
    }
    ctx->pc = 0x13FC30u;
    // 0x13fc30: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13fc30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13fc34: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13fc34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13fc38: 0x8c445828  lw          $a0, 0x5828($v0)
    ctx->pc = 0x13fc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22568)));
    // 0x13fc3c: 0x8c655824  lw          $a1, 0x5824($v1)
    ctx->pc = 0x13fc3cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22564)));
    // 0x13fc40: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13fc40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13fc44: 0x8c4254d8  lw          $v0, 0x54D8($v0)
    ctx->pc = 0x13fc44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21720)));
    // 0x13fc48: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13fc48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13fc4c: 0xa42025  or          $a0, $a1, $a0
    ctx->pc = 0x13fc4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x13fc50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x13FC50u;
    {
        const bool branch_taken_0x13fc50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FC54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FC50u;
            // 0x13fc54: 0xac645824  sw          $a0, 0x5824($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 22564), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fc50) {
            ctx->pc = 0x13FC68u;
            goto label_13fc68;
        }
    }
    ctx->pc = 0x13FC58u;
    // 0x13fc58: 0x3c04005d  lui         $a0, 0x5D
    ctx->pc = 0x13fc58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)93 << 16));
    // 0x13fc5c: 0xc04fe9c  jal         func_13FA70
    ctx->pc = 0x13FC5Cu;
    SET_GPR_U32(ctx, 31, 0x13FC64u);
    ctx->pc = 0x13FC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FC5Cu;
            // 0x13fc60: 0x24841fa0  addiu       $a0, $a0, 0x1FA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8096));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13FA70u;
    if (runtime->hasFunction(0x13FA70u)) {
        auto targetFn = runtime->lookupFunction(0x13FA70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FC64u; }
        if (ctx->pc != 0x13FC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013FA70_0x13fa70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FC64u; }
        if (ctx->pc != 0x13FC64u) { return; }
    }
    ctx->pc = 0x13FC64u;
label_13fc64:
    // 0x13fc64: 0x0  nop
    ctx->pc = 0x13fc64u;
    // NOP
label_13fc68:
    // 0x13fc68: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13fc68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13fc6c: 0x8c425828  lw          $v0, 0x5828($v0)
    ctx->pc = 0x13fc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22568)));
    // 0x13fc70: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x13fc70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13fc74: 0x3043001f  andi        $v1, $v0, 0x1F
    ctx->pc = 0x13fc74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
    // 0x13fc78: 0x1064001d  beq         $v1, $a0, . + 4 + (0x1D << 2)
    ctx->pc = 0x13FC78u;
    {
        const bool branch_taken_0x13fc78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x13fc78) {
            ctx->pc = 0x13FCF0u;
            goto label_13fcf0;
        }
    }
    ctx->pc = 0x13FC80u;
    // 0x13fc80: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x13fc80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13fc84: 0x10620014  beq         $v1, $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x13FC84u;
    {
        const bool branch_taken_0x13fc84 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13fc84) {
            ctx->pc = 0x13FCD8u;
            goto label_13fcd8;
        }
    }
    ctx->pc = 0x13FC8Cu;
    // 0x13fc8c: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x13fc8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13fc90: 0x1062000d  beq         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x13FC90u;
    {
        const bool branch_taken_0x13fc90 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13fc90) {
            ctx->pc = 0x13FCC8u;
            goto label_13fcc8;
        }
    }
    ctx->pc = 0x13FC98u;
    // 0x13fc98: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x13fc98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x13fc9c: 0x10620006  beq         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13FC9Cu;
    {
        const bool branch_taken_0x13fc9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13fc9c) {
            ctx->pc = 0x13FCB8u;
            goto label_13fcb8;
        }
    }
    ctx->pc = 0x13FCA4u;
    // 0x13fca4: 0x10600016  beqz        $v1, . + 4 + (0x16 << 2)
    ctx->pc = 0x13FCA4u;
    {
        const bool branch_taken_0x13fca4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fca4) {
            ctx->pc = 0x13FD00u;
            goto label_13fd00;
        }
    }
    ctx->pc = 0x13FCACu;
    // 0x13fcac: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x13FCACu;
    {
        const bool branch_taken_0x13fcac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fcac) {
            ctx->pc = 0x13FD00u;
            goto label_13fd00;
        }
    }
    ctx->pc = 0x13FCB4u;
    // 0x13fcb4: 0x0  nop
    ctx->pc = 0x13fcb4u;
    // NOP
label_13fcb8:
    // 0x13fcb8: 0xc0573e0  jal         func_15CF80
    ctx->pc = 0x13FCB8u;
    SET_GPR_U32(ctx, 31, 0x13FCC0u);
    ctx->pc = 0x13FCBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FCB8u;
            // 0x13fcbc: 0x8f858110  lw          $a1, -0x7EF0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934800)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FCC0u; }
        if (ctx->pc != 0x13FCC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF80_0x15cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FCC0u; }
        if (ctx->pc != 0x13FCC0u) { return; }
    }
    ctx->pc = 0x13FCC0u;
label_13fcc0:
    // 0x13fcc0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x13FCC0u;
    {
        const bool branch_taken_0x13fcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fcc0) {
            ctx->pc = 0x13FD00u;
            goto label_13fd00;
        }
    }
    ctx->pc = 0x13FCC8u;
label_13fcc8:
    // 0x13fcc8: 0xc0573e0  jal         func_15CF80
    ctx->pc = 0x13FCC8u;
    SET_GPR_U32(ctx, 31, 0x13FCD0u);
    ctx->pc = 0x13FCCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FCC8u;
            // 0x13fccc: 0x8f858110  lw          $a1, -0x7EF0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934800)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FCD0u; }
        if (ctx->pc != 0x13FCD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF80_0x15cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FCD0u; }
        if (ctx->pc != 0x13FCD0u) { return; }
    }
    ctx->pc = 0x13FCD0u;
label_13fcd0:
    // 0x13fcd0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x13FCD0u;
    {
        const bool branch_taken_0x13fcd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fcd0) {
            ctx->pc = 0x13FD00u;
            goto label_13fd00;
        }
    }
    ctx->pc = 0x13FCD8u;
label_13fcd8:
    // 0x13fcd8: 0x8f858110  lw          $a1, -0x7EF0($gp)
    ctx->pc = 0x13fcd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934800)));
    // 0x13fcdc: 0xc0573e0  jal         func_15CF80
    ctx->pc = 0x13FCDCu;
    SET_GPR_U32(ctx, 31, 0x13FCE4u);
    ctx->pc = 0x13FCE0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FCDCu;
            // 0x13fce0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FCE4u; }
        if (ctx->pc != 0x13FCE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF80_0x15cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FCE4u; }
        if (ctx->pc != 0x13FCE4u) { return; }
    }
    ctx->pc = 0x13FCE4u;
label_13fce4:
    // 0x13fce4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x13FCE4u;
    {
        const bool branch_taken_0x13fce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fce4) {
            ctx->pc = 0x13FD00u;
            goto label_13fd00;
        }
    }
    ctx->pc = 0x13FCECu;
    // 0x13fcec: 0x0  nop
    ctx->pc = 0x13fcecu;
    // NOP
label_13fcf0:
    // 0x13fcf0: 0x8f858110  lw          $a1, -0x7EF0($gp)
    ctx->pc = 0x13fcf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294934800)));
    // 0x13fcf4: 0xc0573e0  jal         func_15CF80
    ctx->pc = 0x13FCF4u;
    SET_GPR_U32(ctx, 31, 0x13FCFCu);
    ctx->pc = 0x13FCF8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FCF4u;
            // 0x13fcf8: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15CF80u;
    if (runtime->hasFunction(0x15CF80u)) {
        auto targetFn = runtime->lookupFunction(0x15CF80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FCFCu; }
        if (ctx->pc != 0x13FCFCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015CF80_0x15cf80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FCFCu; }
        if (ctx->pc != 0x13FCFCu) { return; }
    }
    ctx->pc = 0x13FCFCu;
label_13fcfc:
    // 0x13fcfc: 0x0  nop
    ctx->pc = 0x13fcfcu;
    // NOP
label_13fd00:
    // 0x13fd00: 0x3c02006c  lui         $v0, 0x6C
    ctx->pc = 0x13fd00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)108 << 16));
    // 0x13fd04: 0x8c445780  lw          $a0, 0x5780($v0)
    ctx->pc = 0x13fd04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 22400)));
    // 0x13fd08: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13fd08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13fd0c: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x13fd0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x13fd10: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x13fd10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x13fd14: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x13FD14u;
    {
        const bool branch_taken_0x13fd14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fd14) {
            ctx->pc = 0x13FD40u;
            goto label_13fd40;
        }
    }
    ctx->pc = 0x13FD1Cu;
    // 0x13fd1c: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x13fd1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x13fd20: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x13fd20u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fd24: 0x8e820024  lw          $v0, 0x24($s4)
    ctx->pc = 0x13fd24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 36)));
    // 0x13fd28: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x13fd28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x13fd2c: 0xc054390  jal         func_150E40
    ctx->pc = 0x13FD2Cu;
    SET_GPR_U32(ctx, 31, 0x13FD34u);
    ctx->pc = 0x13FD30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FD2Cu;
            // 0x13fd30: 0x432821  addu        $a1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x150E40u;
    if (runtime->hasFunction(0x150E40u)) {
        auto targetFn = runtime->lookupFunction(0x150E40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FD34u; }
        if (ctx->pc != 0x13FD34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00150E40_0x150e40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FD34u; }
        if (ctx->pc != 0x13FD34u) { return; }
    }
    ctx->pc = 0x13FD34u;
label_13fd34:
    // 0x13fd34: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13fd34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13fd38: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x13FD38u;
    {
        const bool branch_taken_0x13fd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FD38u;
            // 0x13fd3c: 0xaf8381a4  sw          $v1, -0x7E5C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294934948), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fd38) {
            ctx->pc = 0x13FD48u;
            goto label_13fd48;
        }
    }
    ctx->pc = 0x13FD40u;
label_13fd40:
    // 0x13fd40: 0xc04fda4  jal         func_13F690
    ctx->pc = 0x13FD40u;
    SET_GPR_U32(ctx, 31, 0x13FD48u);
    ctx->pc = 0x13FD44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FD40u;
            // 0x13fd44: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F690u;
    if (runtime->hasFunction(0x13F690u)) {
        auto targetFn = runtime->lookupFunction(0x13F690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FD48u; }
        if (ctx->pc != 0x13FD48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F690_0x13f690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FD48u; }
        if (ctx->pc != 0x13FD48u) { return; }
    }
    ctx->pc = 0x13FD48u;
label_13fd48:
    // 0x13fd48: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13fd48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13fd4c: 0x8c63579c  lw          $v1, 0x579C($v1)
    ctx->pc = 0x13fd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22428)));
    // 0x13fd50: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13FD50u;
    {
        const bool branch_taken_0x13fd50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13fd50) {
            ctx->pc = 0x13FD70u;
            goto label_13fd70;
        }
    }
    ctx->pc = 0x13FD58u;
    // 0x13fd58: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x13fd58u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x13fd5c: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13fd5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13fd60: 0x8c845774  lw          $a0, 0x5774($a0)
    ctx->pc = 0x13fd60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 22388)));
    // 0x13fd64: 0x26100024  addiu       $s0, $s0, 0x24
    ctx->pc = 0x13fd64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
    // 0x13fd68: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x13fd68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x13fd6c: 0xac645774  sw          $a0, 0x5774($v1)
    ctx->pc = 0x13fd6cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 22388), GPR_U32(ctx, 4));
label_13fd70:
    // 0x13fd70: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x13fd70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x13fd74: 0x8c645774  lw          $a0, 0x5774($v1)
    ctx->pc = 0x13fd74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 22388)));
    // 0x13fd78: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x13fd78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x13fd7c: 0x83182a  slt         $v1, $a0, $v1
    ctx->pc = 0x13fd7cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13fd80: 0x5460ff80  bnel        $v1, $zero, . + 4 + (-0x80 << 2)
    ctx->pc = 0x13FD80u;
    {
        const bool branch_taken_0x13fd80 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13fd80) {
            ctx->pc = 0x13FD84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13FD80u;
            // 0x13fd84: 0x8e030010  lw          $v1, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13FB84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13fb84;
        }
    }
    ctx->pc = 0x13FD88u;
label_13fd88:
    // 0x13fd88: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x13fd88u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x13fd8c: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x13fd8cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x13fd90: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x13fd90u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13fd94: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13fd94u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13fd98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13fd98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13fd9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13fd9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13fda0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13fda0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13fda4: 0x3e00008  jr          $ra
    ctx->pc = 0x13FDA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13FDA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FDA4u;
            // 0x13fda8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x13FDACu;
    // 0x13fdac: 0x0  nop
    ctx->pc = 0x13fdacu;
    // NOP
}
