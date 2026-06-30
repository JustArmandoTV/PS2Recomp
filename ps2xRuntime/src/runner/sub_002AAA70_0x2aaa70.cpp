#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002AAA70
// Address: 0x2aaa70 - 0x2aad30
void sub_002AAA70_0x2aaa70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002AAA70_0x2aaa70");
#endif

    switch (ctx->pc) {
        case 0x2aaa70u: goto label_2aaa70;
        case 0x2aaa74u: goto label_2aaa74;
        case 0x2aaa78u: goto label_2aaa78;
        case 0x2aaa7cu: goto label_2aaa7c;
        case 0x2aaa80u: goto label_2aaa80;
        case 0x2aaa84u: goto label_2aaa84;
        case 0x2aaa88u: goto label_2aaa88;
        case 0x2aaa8cu: goto label_2aaa8c;
        case 0x2aaa90u: goto label_2aaa90;
        case 0x2aaa94u: goto label_2aaa94;
        case 0x2aaa98u: goto label_2aaa98;
        case 0x2aaa9cu: goto label_2aaa9c;
        case 0x2aaaa0u: goto label_2aaaa0;
        case 0x2aaaa4u: goto label_2aaaa4;
        case 0x2aaaa8u: goto label_2aaaa8;
        case 0x2aaaacu: goto label_2aaaac;
        case 0x2aaab0u: goto label_2aaab0;
        case 0x2aaab4u: goto label_2aaab4;
        case 0x2aaab8u: goto label_2aaab8;
        case 0x2aaabcu: goto label_2aaabc;
        case 0x2aaac0u: goto label_2aaac0;
        case 0x2aaac4u: goto label_2aaac4;
        case 0x2aaac8u: goto label_2aaac8;
        case 0x2aaaccu: goto label_2aaacc;
        case 0x2aaad0u: goto label_2aaad0;
        case 0x2aaad4u: goto label_2aaad4;
        case 0x2aaad8u: goto label_2aaad8;
        case 0x2aaadcu: goto label_2aaadc;
        case 0x2aaae0u: goto label_2aaae0;
        case 0x2aaae4u: goto label_2aaae4;
        case 0x2aaae8u: goto label_2aaae8;
        case 0x2aaaecu: goto label_2aaaec;
        case 0x2aaaf0u: goto label_2aaaf0;
        case 0x2aaaf4u: goto label_2aaaf4;
        case 0x2aaaf8u: goto label_2aaaf8;
        case 0x2aaafcu: goto label_2aaafc;
        case 0x2aab00u: goto label_2aab00;
        case 0x2aab04u: goto label_2aab04;
        case 0x2aab08u: goto label_2aab08;
        case 0x2aab0cu: goto label_2aab0c;
        case 0x2aab10u: goto label_2aab10;
        case 0x2aab14u: goto label_2aab14;
        case 0x2aab18u: goto label_2aab18;
        case 0x2aab1cu: goto label_2aab1c;
        case 0x2aab20u: goto label_2aab20;
        case 0x2aab24u: goto label_2aab24;
        case 0x2aab28u: goto label_2aab28;
        case 0x2aab2cu: goto label_2aab2c;
        case 0x2aab30u: goto label_2aab30;
        case 0x2aab34u: goto label_2aab34;
        case 0x2aab38u: goto label_2aab38;
        case 0x2aab3cu: goto label_2aab3c;
        case 0x2aab40u: goto label_2aab40;
        case 0x2aab44u: goto label_2aab44;
        case 0x2aab48u: goto label_2aab48;
        case 0x2aab4cu: goto label_2aab4c;
        case 0x2aab50u: goto label_2aab50;
        case 0x2aab54u: goto label_2aab54;
        case 0x2aab58u: goto label_2aab58;
        case 0x2aab5cu: goto label_2aab5c;
        case 0x2aab60u: goto label_2aab60;
        case 0x2aab64u: goto label_2aab64;
        case 0x2aab68u: goto label_2aab68;
        case 0x2aab6cu: goto label_2aab6c;
        case 0x2aab70u: goto label_2aab70;
        case 0x2aab74u: goto label_2aab74;
        case 0x2aab78u: goto label_2aab78;
        case 0x2aab7cu: goto label_2aab7c;
        case 0x2aab80u: goto label_2aab80;
        case 0x2aab84u: goto label_2aab84;
        case 0x2aab88u: goto label_2aab88;
        case 0x2aab8cu: goto label_2aab8c;
        case 0x2aab90u: goto label_2aab90;
        case 0x2aab94u: goto label_2aab94;
        case 0x2aab98u: goto label_2aab98;
        case 0x2aab9cu: goto label_2aab9c;
        case 0x2aaba0u: goto label_2aaba0;
        case 0x2aaba4u: goto label_2aaba4;
        case 0x2aaba8u: goto label_2aaba8;
        case 0x2aabacu: goto label_2aabac;
        case 0x2aabb0u: goto label_2aabb0;
        case 0x2aabb4u: goto label_2aabb4;
        case 0x2aabb8u: goto label_2aabb8;
        case 0x2aabbcu: goto label_2aabbc;
        case 0x2aabc0u: goto label_2aabc0;
        case 0x2aabc4u: goto label_2aabc4;
        case 0x2aabc8u: goto label_2aabc8;
        case 0x2aabccu: goto label_2aabcc;
        case 0x2aabd0u: goto label_2aabd0;
        case 0x2aabd4u: goto label_2aabd4;
        case 0x2aabd8u: goto label_2aabd8;
        case 0x2aabdcu: goto label_2aabdc;
        case 0x2aabe0u: goto label_2aabe0;
        case 0x2aabe4u: goto label_2aabe4;
        case 0x2aabe8u: goto label_2aabe8;
        case 0x2aabecu: goto label_2aabec;
        case 0x2aabf0u: goto label_2aabf0;
        case 0x2aabf4u: goto label_2aabf4;
        case 0x2aabf8u: goto label_2aabf8;
        case 0x2aabfcu: goto label_2aabfc;
        case 0x2aac00u: goto label_2aac00;
        case 0x2aac04u: goto label_2aac04;
        case 0x2aac08u: goto label_2aac08;
        case 0x2aac0cu: goto label_2aac0c;
        case 0x2aac10u: goto label_2aac10;
        case 0x2aac14u: goto label_2aac14;
        case 0x2aac18u: goto label_2aac18;
        case 0x2aac1cu: goto label_2aac1c;
        case 0x2aac20u: goto label_2aac20;
        case 0x2aac24u: goto label_2aac24;
        case 0x2aac28u: goto label_2aac28;
        case 0x2aac2cu: goto label_2aac2c;
        case 0x2aac30u: goto label_2aac30;
        case 0x2aac34u: goto label_2aac34;
        case 0x2aac38u: goto label_2aac38;
        case 0x2aac3cu: goto label_2aac3c;
        case 0x2aac40u: goto label_2aac40;
        case 0x2aac44u: goto label_2aac44;
        case 0x2aac48u: goto label_2aac48;
        case 0x2aac4cu: goto label_2aac4c;
        case 0x2aac50u: goto label_2aac50;
        case 0x2aac54u: goto label_2aac54;
        case 0x2aac58u: goto label_2aac58;
        case 0x2aac5cu: goto label_2aac5c;
        case 0x2aac60u: goto label_2aac60;
        case 0x2aac64u: goto label_2aac64;
        case 0x2aac68u: goto label_2aac68;
        case 0x2aac6cu: goto label_2aac6c;
        case 0x2aac70u: goto label_2aac70;
        case 0x2aac74u: goto label_2aac74;
        case 0x2aac78u: goto label_2aac78;
        case 0x2aac7cu: goto label_2aac7c;
        case 0x2aac80u: goto label_2aac80;
        case 0x2aac84u: goto label_2aac84;
        case 0x2aac88u: goto label_2aac88;
        case 0x2aac8cu: goto label_2aac8c;
        case 0x2aac90u: goto label_2aac90;
        case 0x2aac94u: goto label_2aac94;
        case 0x2aac98u: goto label_2aac98;
        case 0x2aac9cu: goto label_2aac9c;
        case 0x2aaca0u: goto label_2aaca0;
        case 0x2aaca4u: goto label_2aaca4;
        case 0x2aaca8u: goto label_2aaca8;
        case 0x2aacacu: goto label_2aacac;
        case 0x2aacb0u: goto label_2aacb0;
        case 0x2aacb4u: goto label_2aacb4;
        case 0x2aacb8u: goto label_2aacb8;
        case 0x2aacbcu: goto label_2aacbc;
        case 0x2aacc0u: goto label_2aacc0;
        case 0x2aacc4u: goto label_2aacc4;
        case 0x2aacc8u: goto label_2aacc8;
        case 0x2aacccu: goto label_2aaccc;
        case 0x2aacd0u: goto label_2aacd0;
        case 0x2aacd4u: goto label_2aacd4;
        case 0x2aacd8u: goto label_2aacd8;
        case 0x2aacdcu: goto label_2aacdc;
        case 0x2aace0u: goto label_2aace0;
        case 0x2aace4u: goto label_2aace4;
        case 0x2aace8u: goto label_2aace8;
        case 0x2aacecu: goto label_2aacec;
        case 0x2aacf0u: goto label_2aacf0;
        case 0x2aacf4u: goto label_2aacf4;
        case 0x2aacf8u: goto label_2aacf8;
        case 0x2aacfcu: goto label_2aacfc;
        case 0x2aad00u: goto label_2aad00;
        case 0x2aad04u: goto label_2aad04;
        case 0x2aad08u: goto label_2aad08;
        case 0x2aad0cu: goto label_2aad0c;
        case 0x2aad10u: goto label_2aad10;
        case 0x2aad14u: goto label_2aad14;
        case 0x2aad18u: goto label_2aad18;
        case 0x2aad1cu: goto label_2aad1c;
        case 0x2aad20u: goto label_2aad20;
        case 0x2aad24u: goto label_2aad24;
        case 0x2aad28u: goto label_2aad28;
        case 0x2aad2cu: goto label_2aad2c;
        default: break;
    }

    ctx->pc = 0x2aaa70u;

label_2aaa70:
    // 0x2aaa70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2aaa70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2aaa74:
    // 0x2aaa74: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2aaa74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2aaa78:
    // 0x2aaa78: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2aaa78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2aaa7c:
    // 0x2aaa7c: 0x2442fc80  addiu       $v0, $v0, -0x380
    ctx->pc = 0x2aaa7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966400));
label_2aaa80:
    // 0x2aaa80: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2aaa80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2aaa84:
    // 0x2aaa84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2aaa84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2aaa88:
    // 0x2aaa88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2aaa88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2aaa8c:
    // 0x2aaa8c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2aaa8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2aaa90:
    // 0x2aaa90: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2aaa90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
label_2aaa94:
    // 0x2aaa94: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x2aaa94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_2aaa98:
    // 0x2aaa98: 0xc0aab90  jal         func_2AAE40
label_2aaa9c:
    if (ctx->pc == 0x2AAA9Cu) {
        ctx->pc = 0x2AAA9Cu;
            // 0x2aaa9c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->pc = 0x2AAAA0u;
        goto label_2aaaa0;
    }
    ctx->pc = 0x2AAA98u;
    SET_GPR_U32(ctx, 31, 0x2AAAA0u);
    ctx->pc = 0x2AAA9Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAA98u;
            // 0x2aaa9c: 0x26240004  addiu       $a0, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AAE40u;
    if (runtime->hasFunction(0x2AAE40u)) {
        auto targetFn = runtime->lookupFunction(0x2AAE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAAA0u; }
        if (ctx->pc != 0x2AAAA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AAE40_0x2aae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAAA0u; }
        if (ctx->pc != 0x2AAAA0u) { return; }
    }
    ctx->pc = 0x2AAAA0u;
label_2aaaa0:
    // 0x2aaaa0: 0xc0aab90  jal         func_2AAE40
label_2aaaa4:
    if (ctx->pc == 0x2AAAA4u) {
        ctx->pc = 0x2AAAA4u;
            // 0x2aaaa4: 0x2624001c  addiu       $a0, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->pc = 0x2AAAA8u;
        goto label_2aaaa8;
    }
    ctx->pc = 0x2AAAA0u;
    SET_GPR_U32(ctx, 31, 0x2AAAA8u);
    ctx->pc = 0x2AAAA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAAA0u;
            // 0x2aaaa4: 0x2624001c  addiu       $a0, $s1, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AAE40u;
    if (runtime->hasFunction(0x2AAE40u)) {
        auto targetFn = runtime->lookupFunction(0x2AAE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAAA8u; }
        if (ctx->pc != 0x2AAAA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AAE40_0x2aae40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAAA8u; }
        if (ctx->pc != 0x2AAAA8u) { return; }
    }
    ctx->pc = 0x2AAAA8u;
label_2aaaa8:
    // 0x2aaaa8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aaaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aaaac:
    // 0x2aaaac: 0x26320038  addiu       $s2, $s1, 0x38
    ctx->pc = 0x2aaaacu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_2aaab0:
    // 0x2aaab0: 0xa2220034  sb          $v0, 0x34($s1)
    ctx->pc = 0x2aaab0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 52), (uint8_t)GPR_U32(ctx, 2));
label_2aaab4:
    // 0x2aaab4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2aaab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2aaab8:
    // 0x2aaab8: 0x2442fcf0  addiu       $v0, $v0, -0x310
    ctx->pc = 0x2aaab8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966512));
label_2aaabc:
    // 0x2aaabc: 0xc0aab8c  jal         func_2AAE30
label_2aaac0:
    if (ctx->pc == 0x2AAAC0u) {
        ctx->pc = 0x2AAAC0u;
            // 0x2aaac0: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->pc = 0x2AAAC4u;
        goto label_2aaac4;
    }
    ctx->pc = 0x2AAABCu;
    SET_GPR_U32(ctx, 31, 0x2AAAC4u);
    ctx->pc = 0x2AAAC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAABCu;
            // 0x2aaac0: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AAE30u;
    if (runtime->hasFunction(0x2AAE30u)) {
        auto targetFn = runtime->lookupFunction(0x2AAE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAAC4u; }
        if (ctx->pc != 0x2AAAC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AAE30_0x2aae30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAAC4u; }
        if (ctx->pc != 0x2AAAC4u) { return; }
    }
    ctx->pc = 0x2AAAC4u;
label_2aaac4:
    // 0x2aaac4: 0xc0aab8c  jal         func_2AAE30
label_2aaac8:
    if (ctx->pc == 0x2AAAC8u) {
        ctx->pc = 0x2AAAC8u;
            // 0x2aaac8: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->pc = 0x2AAACCu;
        goto label_2aaacc;
    }
    ctx->pc = 0x2AAAC4u;
    SET_GPR_U32(ctx, 31, 0x2AAACCu);
    ctx->pc = 0x2AAAC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAAC4u;
            // 0x2aaac8: 0xae420004  sw          $v0, 0x4($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AAE30u;
    if (runtime->hasFunction(0x2AAE30u)) {
        auto targetFn = runtime->lookupFunction(0x2AAE30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAACCu; }
        if (ctx->pc != 0x2AAACCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AAE30_0x2aae30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAACCu; }
        if (ctx->pc != 0x2AAACCu) { return; }
    }
    ctx->pc = 0x2AAACCu;
label_2aaacc:
    // 0x2aaacc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2aaaccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aaad0:
    // 0x2aaad0: 0xc0aab84  jal         func_2AAE10
label_2aaad4:
    if (ctx->pc == 0x2AAAD4u) {
        ctx->pc = 0x2AAAD4u;
            // 0x2aaad4: 0x26440008  addiu       $a0, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->pc = 0x2AAAD8u;
        goto label_2aaad8;
    }
    ctx->pc = 0x2AAAD0u;
    SET_GPR_U32(ctx, 31, 0x2AAAD8u);
    ctx->pc = 0x2AAAD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAAD0u;
            // 0x2aaad4: 0x26440008  addiu       $a0, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AAE10u;
    if (runtime->hasFunction(0x2AAE10u)) {
        auto targetFn = runtime->lookupFunction(0x2AAE10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAAD8u; }
        if (ctx->pc != 0x2AAAD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AAE10_0x2aae10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAAD8u; }
        if (ctx->pc != 0x2AAAD8u) { return; }
    }
    ctx->pc = 0x2AAAD8u;
label_2aaad8:
    // 0x2aaad8: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x2aaad8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
label_2aaadc:
    // 0x2aaadc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2aaadcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2aaae0:
    // 0x2aaae0: 0xae40003c  sw          $zero, 0x3C($s2)
    ctx->pc = 0x2aaae0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 0));
label_2aaae4:
    // 0x2aaae4: 0xae400040  sw          $zero, 0x40($s2)
    ctx->pc = 0x2aaae4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 64), GPR_U32(ctx, 0));
label_2aaae8:
    // 0x2aaae8: 0xae400044  sw          $zero, 0x44($s2)
    ctx->pc = 0x2aaae8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 68), GPR_U32(ctx, 0));
label_2aaaec:
    // 0x2aaaec: 0xc0aab4c  jal         func_2AAD30
label_2aaaf0:
    if (ctx->pc == 0x2AAAF0u) {
        ctx->pc = 0x2AAAF0u;
            // 0x2aaaf0: 0xae400048  sw          $zero, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
        ctx->pc = 0x2AAAF4u;
        goto label_2aaaf4;
    }
    ctx->pc = 0x2AAAECu;
    SET_GPR_U32(ctx, 31, 0x2AAAF4u);
    ctx->pc = 0x2AAAF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAAECu;
            // 0x2aaaf0: 0xae400048  sw          $zero, 0x48($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 72), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2AAD30u;
    if (runtime->hasFunction(0x2AAD30u)) {
        auto targetFn = runtime->lookupFunction(0x2AAD30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAAF4u; }
        if (ctx->pc != 0x2AAAF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002AAD30_0x2aad30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAAF4u; }
        if (ctx->pc != 0x2AAAF4u) { return; }
    }
    ctx->pc = 0x2AAAF4u;
label_2aaaf4:
    // 0x2aaaf4: 0xae200088  sw          $zero, 0x88($s1)
    ctx->pc = 0x2aaaf4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 136), GPR_U32(ctx, 0));
label_2aaaf8:
    // 0x2aaaf8: 0x24040800  addiu       $a0, $zero, 0x800
    ctx->pc = 0x2aaaf8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
label_2aaafc:
    // 0x2aaafc: 0xa220008c  sb          $zero, 0x8C($s1)
    ctx->pc = 0x2aaafcu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 140), (uint8_t)GPR_U32(ctx, 0));
label_2aab00:
    // 0x2aab00: 0x24050080  addiu       $a1, $zero, 0x80
    ctx->pc = 0x2aab00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
label_2aab04:
    // 0x2aab04: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x2aab04u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_2aab08:
    // 0x2aab08: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2aab08u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2aab0c:
    // 0x2aab0c: 0xc0400c4  jal         func_100310
label_2aab10:
    if (ctx->pc == 0x2AAB10u) {
        ctx->pc = 0x2AAB10u;
            // 0x2aab10: 0xa220008d  sb          $zero, 0x8D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 141), (uint8_t)GPR_U32(ctx, 0));
        ctx->pc = 0x2AAB14u;
        goto label_2aab14;
    }
    ctx->pc = 0x2AAB0Cu;
    SET_GPR_U32(ctx, 31, 0x2AAB14u);
    ctx->pc = 0x2AAB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAB0Cu;
            // 0x2aab10: 0xa220008d  sb          $zero, 0x8D($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 141), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100310u;
    if (runtime->hasFunction(0x100310u)) {
        auto targetFn = runtime->lookupFunction(0x100310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAB14u; }
        if (ctx->pc != 0x2AAB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100310_0x100310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAB14u; }
        if (ctx->pc != 0x2AAB14u) { return; }
    }
    ctx->pc = 0x2AAB14u;
label_2aab14:
    // 0x2aab14: 0xae220090  sw          $v0, 0x90($s1)
    ctx->pc = 0x2aab14u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 144), GPR_U32(ctx, 2));
label_2aab18:
    // 0x2aab18: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2aab18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2aab1c:
    // 0x2aab1c: 0x8c4267e8  lw          $v0, 0x67E8($v0)
    ctx->pc = 0x2aab1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26600)));
label_2aab20:
    // 0x2aab20: 0x40f809  jalr        $v0
label_2aab24:
    if (ctx->pc == 0x2AAB24u) {
        ctx->pc = 0x2AAB28u;
        goto label_2aab28;
    }
    ctx->pc = 0x2AAB20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AAB28u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AAB28u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AAB28u; }
            if (ctx->pc != 0x2AAB28u) { return; }
        }
        }
    }
    ctx->pc = 0x2AAB28u;
label_2aab28:
    // 0x2aab28: 0x3c04002b  lui         $a0, 0x2B
    ctx->pc = 0x2aab28u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)43 << 16));
label_2aab2c:
    // 0x2aab2c: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x2aab2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_2aab30:
    // 0x2aab30: 0xae220084  sw          $v0, 0x84($s1)
    ctx->pc = 0x2aab30u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 2));
label_2aab34:
    // 0x2aab34: 0x24849b10  addiu       $a0, $a0, -0x64F0
    ctx->pc = 0x2aab34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294941456));
label_2aab38:
    // 0x2aab38: 0xac440004  sw          $a0, 0x4($v0)
    ctx->pc = 0x2aab38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 4));
label_2aab3c:
    // 0x2aab3c: 0x24051000  addiu       $a1, $zero, 0x1000
    ctx->pc = 0x2aab3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4096));
label_2aab40:
    // 0x2aab40: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x2aab40u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
label_2aab44:
    // 0x2aab44: 0xac510008  sw          $s1, 0x8($v0)
    ctx->pc = 0x2aab44u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 17));
label_2aab48:
    // 0x2aab48: 0x2484fc60  addiu       $a0, $a0, -0x3A0
    ctx->pc = 0x2aab48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966368));
label_2aab4c:
    // 0x2aab4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2aab4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2aab50:
    // 0x2aab50: 0xac440010  sw          $a0, 0x10($v0)
    ctx->pc = 0x2aab50u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 4));
label_2aab54:
    // 0x2aab54: 0xac450014  sw          $a1, 0x14($v0)
    ctx->pc = 0x2aab54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 5));
label_2aab58:
    // 0x2aab58: 0xac430018  sw          $v1, 0x18($v0)
    ctx->pc = 0x2aab58u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 24), GPR_U32(ctx, 3));
label_2aab5c:
    // 0x2aab5c: 0xac40000c  sw          $zero, 0xC($v0)
    ctx->pc = 0x2aab5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 0));
label_2aab60:
    // 0x2aab60: 0x8c590000  lw          $t9, 0x0($v0)
    ctx->pc = 0x2aab60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2aab64:
    // 0x2aab64: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x2aab64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_2aab68:
    // 0x2aab68: 0x320f809  jalr        $t9
label_2aab6c:
    if (ctx->pc == 0x2AAB6Cu) {
        ctx->pc = 0x2AAB6Cu;
            // 0x2aab6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AAB70u;
        goto label_2aab70;
    }
    ctx->pc = 0x2AAB68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2AAB70u);
        ctx->pc = 0x2AAB6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAB68u;
            // 0x2aab6c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AAB70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AAB70u; }
            if (ctx->pc != 0x2AAB70u) { return; }
        }
        }
    }
    ctx->pc = 0x2AAB70u;
label_2aab70:
    // 0x2aab70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2aab70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2aab74:
    // 0x2aab74: 0xa202001c  sb          $v0, 0x1C($s0)
    ctx->pc = 0x2aab74u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 28), (uint8_t)GPR_U32(ctx, 2));
label_2aab78:
    // 0x2aab78: 0x8e240084  lw          $a0, 0x84($s1)
    ctx->pc = 0x2aab78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 132)));
label_2aab7c:
    // 0x2aab7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2aab7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2aab80:
    // 0x2aab80: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2aab80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2aab84:
    // 0x2aab84: 0x320f809  jalr        $t9
label_2aab88:
    if (ctx->pc == 0x2AAB88u) {
        ctx->pc = 0x2AAB8Cu;
        goto label_2aab8c;
    }
    ctx->pc = 0x2AAB84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2AAB8Cu);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AAB8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AAB8Cu; }
            if (ctx->pc != 0x2AAB8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2AAB8Cu;
label_2aab8c:
    // 0x2aab8c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2aab8cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2aab90:
    // 0x2aab90: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2aab90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2aab94:
    // 0x2aab94: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2aab94u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2aab98:
    // 0x2aab98: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2aab98u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2aab9c:
    // 0x2aab9c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aab9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2aaba0:
    // 0x2aaba0: 0x3e00008  jr          $ra
label_2aaba4:
    if (ctx->pc == 0x2AABA4u) {
        ctx->pc = 0x2AABA4u;
            // 0x2aaba4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2AABA8u;
        goto label_2aaba8;
    }
    ctx->pc = 0x2AABA0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AABA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AABA0u;
            // 0x2aaba4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AABA8u;
label_2aaba8:
    // 0x2aaba8: 0x0  nop
    ctx->pc = 0x2aaba8u;
    // NOP
label_2aabac:
    // 0x2aabac: 0x0  nop
    ctx->pc = 0x2aabacu;
    // NOP
label_2aabb0:
    // 0x2aabb0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2aabb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_2aabb4:
    // 0x2aabb4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2aabb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2aabb8:
    // 0x2aabb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2aabb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2aabbc:
    // 0x2aabbc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2aabbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2aabc0:
    // 0x2aabc0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2aabc0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2aabc4:
    // 0x2aabc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2aabc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2aabc8:
    // 0x2aabc8: 0x12400050  beqz        $s2, . + 4 + (0x50 << 2)
label_2aabcc:
    if (ctx->pc == 0x2AABCCu) {
        ctx->pc = 0x2AABCCu;
            // 0x2aabcc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AABD0u;
        goto label_2aabd0;
    }
    ctx->pc = 0x2AABC8u;
    {
        const bool branch_taken_0x2aabc8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x2AABCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AABC8u;
            // 0x2aabcc: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2aabc8) {
            ctx->pc = 0x2AAD0Cu;
            goto label_2aad0c;
        }
    }
    ctx->pc = 0x2AABD0u;
label_2aabd0:
    // 0x2aabd0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2aabd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2aabd4:
    // 0x2aabd4: 0x2442fcf0  addiu       $v0, $v0, -0x310
    ctx->pc = 0x2aabd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294966512));
label_2aabd8:
    // 0x2aabd8: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x2aabd8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
label_2aabdc:
    // 0x2aabdc: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x2aabdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_2aabe0:
    // 0x2aabe0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2aabe0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2aabe4:
    // 0x2aabe4: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x2aabe4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_2aabe8:
    // 0x2aabe8: 0x320f809  jalr        $t9
label_2aabec:
    if (ctx->pc == 0x2AABECu) {
        ctx->pc = 0x2AABF0u;
        goto label_2aabf0;
    }
    ctx->pc = 0x2AABE8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2AABF0u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AABF0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AABF0u; }
            if (ctx->pc != 0x2AABF0u) { return; }
        }
        }
    }
    ctx->pc = 0x2AABF0u;
label_2aabf0:
    // 0x2aabf0: 0x8e420010  lw          $v0, 0x10($s2)
    ctx->pc = 0x2aabf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2aabf4:
    // 0x2aabf4: 0x5040001a  beql        $v0, $zero, . + 4 + (0x1A << 2)
label_2aabf8:
    if (ctx->pc == 0x2AABF8u) {
        ctx->pc = 0x2AABF8u;
            // 0x2aabf8: 0x8e440018  lw          $a0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->pc = 0x2AABFCu;
        goto label_2aabfc;
    }
    ctx->pc = 0x2AABF4u;
    {
        const bool branch_taken_0x2aabf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aabf4) {
            ctx->pc = 0x2AABF8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AABF4u;
            // 0x2aabf8: 0x8e440018  lw          $a0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AAC60u;
            goto label_2aac60;
        }
    }
    ctx->pc = 0x2AABFCu;
label_2aabfc:
    // 0x2aabfc: 0x8e500014  lw          $s0, 0x14($s2)
    ctx->pc = 0x2aabfcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2aac00:
    // 0x2aac00: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x2aac00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_2aac04:
    // 0x2aac04: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2aac04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2aac08:
    // 0x2aac08: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2aac08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2aac0c:
    // 0x2aac0c: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
label_2aac10:
    if (ctx->pc == 0x2AAC10u) {
        ctx->pc = 0x2AAC14u;
        goto label_2aac14;
    }
    ctx->pc = 0x2AAC0Cu;
    {
        const bool branch_taken_0x2aac0c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aac0c) {
            ctx->pc = 0x2AAC28u;
            goto label_2aac28;
        }
    }
    ctx->pc = 0x2AAC14u;
label_2aac14:
    // 0x2aac14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2aac14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2aac18:
    // 0x2aac18: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2aac18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2aac1c:
    // 0x2aac1c: 0x320f809  jalr        $t9
label_2aac20:
    if (ctx->pc == 0x2AAC20u) {
        ctx->pc = 0x2AAC20u;
            // 0x2aac20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2AAC24u;
        goto label_2aac24;
    }
    ctx->pc = 0x2AAC1Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2AAC24u);
        ctx->pc = 0x2AAC20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAC1Cu;
            // 0x2aac20: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AAC24u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AAC24u; }
            if (ctx->pc != 0x2AAC24u) { return; }
        }
        }
    }
    ctx->pc = 0x2AAC24u;
label_2aac24:
    // 0x2aac24: 0x0  nop
    ctx->pc = 0x2aac24u;
    // NOP
label_2aac28:
    // 0x2aac28: 0x10103c  dsll32      $v0, $s0, 0
    ctx->pc = 0x2aac28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
label_2aac2c:
    // 0x2aac2c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2aac2cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
label_2aac30:
    // 0x2aac30: 0x8e430010  lw          $v1, 0x10($s2)
    ctx->pc = 0x2aac30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 16)));
label_2aac34:
    // 0x2aac34: 0x24500004  addiu       $s0, $v0, 0x4
    ctx->pc = 0x2aac34u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
label_2aac38:
    // 0x2aac38: 0x8e420014  lw          $v0, 0x14($s2)
    ctx->pc = 0x2aac38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2aac3c:
    // 0x2aac3c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2aac3cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_2aac40:
    // 0x2aac40: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2aac40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2aac44:
    // 0x2aac44: 0x2021026  xor         $v0, $s0, $v0
    ctx->pc = 0x2aac44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) ^ GPR_U64(ctx, 2));
label_2aac48:
    // 0x2aac48: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x2aac48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_2aac4c:
    // 0x2aac4c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2aac4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_2aac50:
    // 0x2aac50: 0x5440ffec  bnel        $v0, $zero, . + 4 + (-0x14 << 2)
label_2aac54:
    if (ctx->pc == 0x2AAC54u) {
        ctx->pc = 0x2AAC54u;
            // 0x2aac54: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->pc = 0x2AAC58u;
        goto label_2aac58;
    }
    ctx->pc = 0x2AAC50u;
    {
        const bool branch_taken_0x2aac50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2aac50) {
            ctx->pc = 0x2AAC54u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAC50u;
            // 0x2aac54: 0x10103c  dsll32      $v0, $s0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AAC04u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2aac04;
        }
    }
    ctx->pc = 0x2AAC58u;
label_2aac58:
    // 0x2aac58: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x2aac58u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
label_2aac5c:
    // 0x2aac5c: 0x8e440018  lw          $a0, 0x18($s2)
    ctx->pc = 0x2aac5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
label_2aac60:
    // 0x2aac60: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2aac60u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2aac64:
    // 0x2aac64: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x2aac64u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_2aac68:
    // 0x2aac68: 0x320f809  jalr        $t9
label_2aac6c:
    if (ctx->pc == 0x2AAC6Cu) {
        ctx->pc = 0x2AAC70u;
        goto label_2aac70;
    }
    ctx->pc = 0x2AAC68u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2AAC70u);
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AAC70u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AAC70u; }
            if (ctx->pc != 0x2AAC70u) { return; }
        }
        }
    }
    ctx->pc = 0x2AAC70u;
label_2aac70:
    // 0x2aac70: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x2aac70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_2aac74:
    // 0x2aac74: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
label_2aac78:
    if (ctx->pc == 0x2AAC78u) {
        ctx->pc = 0x2AAC7Cu;
        goto label_2aac7c;
    }
    ctx->pc = 0x2AAC74u;
    {
        const bool branch_taken_0x2aac74 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aac74) {
            ctx->pc = 0x2AAC8Cu;
            goto label_2aac8c;
        }
    }
    ctx->pc = 0x2AAC7Cu;
label_2aac7c:
    // 0x2aac7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2aac7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2aac80:
    // 0x2aac80: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2aac80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2aac84:
    // 0x2aac84: 0x320f809  jalr        $t9
label_2aac88:
    if (ctx->pc == 0x2AAC88u) {
        ctx->pc = 0x2AAC88u;
            // 0x2aac88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2AAC8Cu;
        goto label_2aac8c;
    }
    ctx->pc = 0x2AAC84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2AAC8Cu);
        ctx->pc = 0x2AAC88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAC84u;
            // 0x2aac88: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AAC8Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AAC8Cu; }
            if (ctx->pc != 0x2AAC8Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2AAC8Cu;
label_2aac8c:
    // 0x2aac8c: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2aac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
label_2aac90:
    // 0x2aac90: 0x8c4267e0  lw          $v0, 0x67E0($v0)
    ctx->pc = 0x2aac90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 26592)));
label_2aac94:
    // 0x2aac94: 0x40f809  jalr        $v0
label_2aac98:
    if (ctx->pc == 0x2AAC98u) {
        ctx->pc = 0x2AAC98u;
            // 0x2aac98: 0x8e440018  lw          $a0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->pc = 0x2AAC9Cu;
        goto label_2aac9c;
    }
    ctx->pc = 0x2AAC94u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2AAC9Cu);
        ctx->pc = 0x2AAC98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAC94u;
            // 0x2aac98: 0x8e440018  lw          $a0, 0x18($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 24)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2AAC9Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2AAC9Cu; }
            if (ctx->pc != 0x2AAC9Cu) { return; }
        }
        }
    }
    ctx->pc = 0x2AAC9Cu;
label_2aac9c:
    // 0x2aac9c: 0x8e450030  lw          $a1, 0x30($s2)
    ctx->pc = 0x2aac9cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 48)));
label_2aaca0:
    // 0x2aaca0: 0x50a00005  beql        $a1, $zero, . + 4 + (0x5 << 2)
label_2aaca4:
    if (ctx->pc == 0x2AACA4u) {
        ctx->pc = 0x2AACA4u;
            // 0x2aaca4: 0x26420008  addiu       $v0, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->pc = 0x2AACA8u;
        goto label_2aaca8;
    }
    ctx->pc = 0x2AACA0u;
    {
        const bool branch_taken_0x2aaca0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aaca0) {
            ctx->pc = 0x2AACA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AACA0u;
            // 0x2aaca4: 0x26420008  addiu       $v0, $s2, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AACB8u;
            goto label_2aacb8;
        }
    }
    ctx->pc = 0x2AACA8u;
label_2aaca8:
    // 0x2aaca8: 0xc0fe48c  jal         func_3F9230
label_2aacac:
    if (ctx->pc == 0x2AACACu) {
        ctx->pc = 0x2AACACu;
            // 0x2aacac: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->pc = 0x2AACB0u;
        goto label_2aacb0;
    }
    ctx->pc = 0x2AACA8u;
    SET_GPR_U32(ctx, 31, 0x2AACB0u);
    ctx->pc = 0x2AACACu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AACA8u;
            // 0x2aacac: 0x8e440004  lw          $a0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AACB0u; }
        if (ctx->pc != 0x2AACB0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AACB0u; }
        if (ctx->pc != 0x2AACB0u) { return; }
    }
    ctx->pc = 0x2AACB0u;
label_2aacb0:
    // 0x2aacb0: 0xae400030  sw          $zero, 0x30($s2)
    ctx->pc = 0x2aacb0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 48), GPR_U32(ctx, 0));
label_2aacb4:
    // 0x2aacb4: 0x26420008  addiu       $v0, $s2, 0x8
    ctx->pc = 0x2aacb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 8));
label_2aacb8:
    // 0x2aacb8: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
label_2aacbc:
    if (ctx->pc == 0x2AACBCu) {
        ctx->pc = 0x2AACBCu;
            // 0x2aacbc: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->pc = 0x2AACC0u;
        goto label_2aacc0;
    }
    ctx->pc = 0x2AACB8u;
    {
        const bool branch_taken_0x2aacb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aacb8) {
            ctx->pc = 0x2AACBCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AACB8u;
            // 0x2aacbc: 0x11143c  dsll32      $v0, $s1, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AACF8u;
            goto label_2aacf8;
        }
    }
    ctx->pc = 0x2AACC0u;
label_2aacc0:
    // 0x2aacc0: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_2aacc4:
    if (ctx->pc == 0x2AACC4u) {
        ctx->pc = 0x2AACC8u;
        goto label_2aacc8;
    }
    ctx->pc = 0x2AACC0u;
    {
        const bool branch_taken_0x2aacc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aacc0) {
            ctx->pc = 0x2AACF4u;
            goto label_2aacf4;
        }
    }
    ctx->pc = 0x2AACC8u;
label_2aacc8:
    // 0x2aacc8: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
label_2aaccc:
    if (ctx->pc == 0x2AACCCu) {
        ctx->pc = 0x2AACD0u;
        goto label_2aacd0;
    }
    ctx->pc = 0x2AACC8u;
    {
        const bool branch_taken_0x2aacc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aacc8) {
            ctx->pc = 0x2AACF4u;
            goto label_2aacf4;
        }
    }
    ctx->pc = 0x2AACD0u;
label_2aacd0:
    // 0x2aacd0: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_2aacd4:
    if (ctx->pc == 0x2AACD4u) {
        ctx->pc = 0x2AACD8u;
        goto label_2aacd8;
    }
    ctx->pc = 0x2AACD0u;
    {
        const bool branch_taken_0x2aacd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aacd0) {
            ctx->pc = 0x2AACF4u;
            goto label_2aacf4;
        }
    }
    ctx->pc = 0x2AACD8u;
label_2aacd8:
    // 0x2aacd8: 0x8e450014  lw          $a1, 0x14($s2)
    ctx->pc = 0x2aacd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
label_2aacdc:
    // 0x2aacdc: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_2aace0:
    if (ctx->pc == 0x2AACE0u) {
        ctx->pc = 0x2AACE4u;
        goto label_2aace4;
    }
    ctx->pc = 0x2AACDCu;
    {
        const bool branch_taken_0x2aacdc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aacdc) {
            ctx->pc = 0x2AACF4u;
            goto label_2aacf4;
        }
    }
    ctx->pc = 0x2AACE4u;
label_2aace4:
    // 0x2aace4: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
label_2aace8:
    if (ctx->pc == 0x2AACE8u) {
        ctx->pc = 0x2AACECu;
        goto label_2aacec;
    }
    ctx->pc = 0x2AACE4u;
    {
        const bool branch_taken_0x2aace4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2aace4) {
            ctx->pc = 0x2AACF4u;
            goto label_2aacf4;
        }
    }
    ctx->pc = 0x2AACECu;
label_2aacec:
    // 0x2aacec: 0xc0fe48c  jal         func_3F9230
label_2aacf0:
    if (ctx->pc == 0x2AACF0u) {
        ctx->pc = 0x2AACF0u;
            // 0x2aacf0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->pc = 0x2AACF4u;
        goto label_2aacf4;
    }
    ctx->pc = 0x2AACECu;
    SET_GPR_U32(ctx, 31, 0x2AACF4u);
    ctx->pc = 0x2AACF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AACECu;
            // 0x2aacf0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AACF4u; }
        if (ctx->pc != 0x2AACF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AACF4u; }
        if (ctx->pc != 0x2AACF4u) { return; }
    }
    ctx->pc = 0x2AACF4u;
label_2aacf4:
    // 0x2aacf4: 0x11143c  dsll32      $v0, $s1, 16
    ctx->pc = 0x2aacf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) << (32 + 16));
label_2aacf8:
    // 0x2aacf8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2aacf8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2aacfc:
    // 0x2aacfc: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2aad00:
    if (ctx->pc == 0x2AAD00u) {
        ctx->pc = 0x2AAD00u;
            // 0x2aad00: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AAD04u;
        goto label_2aad04;
    }
    ctx->pc = 0x2AACFCu;
    {
        const bool branch_taken_0x2aacfc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2aacfc) {
            ctx->pc = 0x2AAD00u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2AACFCu;
            // 0x2aad00: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2AAD10u;
            goto label_2aad10;
        }
    }
    ctx->pc = 0x2AAD04u;
label_2aad04:
    // 0x2aad04: 0xc0400a8  jal         func_1002A0
label_2aad08:
    if (ctx->pc == 0x2AAD08u) {
        ctx->pc = 0x2AAD08u;
            // 0x2aad08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2AAD0Cu;
        goto label_2aad0c;
    }
    ctx->pc = 0x2AAD04u;
    SET_GPR_U32(ctx, 31, 0x2AAD0Cu);
    ctx->pc = 0x2AAD08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAD04u;
            // 0x2aad08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAD0Cu; }
        if (ctx->pc != 0x2AAD0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2AAD0Cu; }
        if (ctx->pc != 0x2AAD0Cu) { return; }
    }
    ctx->pc = 0x2AAD0Cu;
label_2aad0c:
    // 0x2aad0c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2aad0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2aad10:
    // 0x2aad10: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2aad10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2aad14:
    // 0x2aad14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2aad14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2aad18:
    // 0x2aad18: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2aad18u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2aad1c:
    // 0x2aad1c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2aad1cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2aad20:
    // 0x2aad20: 0x3e00008  jr          $ra
label_2aad24:
    if (ctx->pc == 0x2AAD24u) {
        ctx->pc = 0x2AAD24u;
            // 0x2aad24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->pc = 0x2AAD28u;
        goto label_2aad28;
    }
    ctx->pc = 0x2AAD20u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2AAD24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2AAD20u;
            // 0x2aad24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2AAD28u;
label_2aad28:
    // 0x2aad28: 0x0  nop
    ctx->pc = 0x2aad28u;
    // NOP
label_2aad2c:
    // 0x2aad2c: 0x0  nop
    ctx->pc = 0x2aad2cu;
    // NOP
}
