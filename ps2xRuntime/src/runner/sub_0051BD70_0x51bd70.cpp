#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0051BD70
// Address: 0x51bd70 - 0x51be20
void sub_0051BD70_0x51bd70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0051BD70_0x51bd70");
#endif

    switch (ctx->pc) {
        case 0x51bd8cu: goto label_51bd8c;
        case 0x51bdacu: goto label_51bdac;
        case 0x51bdecu: goto label_51bdec;
        default: break;
    }

    ctx->pc = 0x51bd70u;

    // 0x51bd70: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x51bd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x51bd74: 0x3404fd40  ori         $a0, $zero, 0xFD40
    ctx->pc = 0x51bd74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64832);
    // 0x51bd78: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x51bd78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x51bd7c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x51bd7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x51bd80: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x51bd80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x51bd84: 0xc040140  jal         func_100500
    ctx->pc = 0x51BD84u;
    SET_GPR_U32(ctx, 31, 0x51BD8Cu);
    ctx->pc = 0x51BD88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51BD84u;
            // 0x51bd88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100500u;
    if (runtime->hasFunction(0x100500u)) {
        auto targetFn = runtime->lookupFunction(0x100500u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BD8Cu; }
        if (ctx->pc != 0x51BD8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100500_0x100500(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BD8Cu; }
        if (ctx->pc != 0x51BD8Cu) { return; }
    }
    ctx->pc = 0x51BD8Cu;
label_51bd8c:
    // 0x51bd8c: 0x3c0400af  lui         $a0, 0xAF
    ctx->pc = 0x51bd8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)175 << 16));
    // 0x51bd90: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x51bd90u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x51bd94: 0xac826058  sw          $v0, 0x6058($a0)
    ctx->pc = 0x51bd94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24664), GPR_U32(ctx, 2));
    // 0x51bd98: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x51bd98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51bd9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x51bd9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51bda0: 0xac606060  sw          $zero, 0x6060($v1)
    ctx->pc = 0x51bda0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24672), GPR_U32(ctx, 0));
    // 0x51bda4: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x51BDA4u;
    SET_GPR_U32(ctx, 31, 0x51BDACu);
    ctx->pc = 0x51BDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51BDA4u;
            // 0x51bda8: 0x3406fd40  ori         $a2, $zero, 0xFD40 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64832);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BDACu; }
        if (ctx->pc != 0x51BDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BDACu; }
        if (ctx->pc != 0x51BDACu) { return; }
    }
    ctx->pc = 0x51BDACu;
label_51bdac:
    // 0x51bdac: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x51bdacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x51bdb0: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x51bdb0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x51bdb4: 0x8c676058  lw          $a3, 0x6058($v1)
    ctx->pc = 0x51bdb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24664)));
    // 0x51bdb8: 0x42900  sll         $a1, $a0, 4
    ctx->pc = 0x51bdb8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x51bdbc: 0x2404ffef  addiu       $a0, $zero, -0x11
    ctx->pc = 0x51bdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x51bdc0: 0x90e6000c  lbu         $a2, 0xC($a3)
    ctx->pc = 0x51bdc0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 12)));
    // 0x51bdc4: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x51bdc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x51bdc8: 0xc42024  and         $a0, $a2, $a0
    ctx->pc = 0x51bdc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x51bdcc: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x51bdccu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x51bdd0: 0xa0e4000c  sb          $a0, 0xC($a3)
    ctx->pc = 0x51bdd0u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 12), (uint8_t)GPR_U32(ctx, 4));
    // 0x51bdd4: 0x8c646060  lw          $a0, 0x6060($v1)
    ctx->pc = 0x51bdd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24672)));
    // 0x51bdd8: 0x5080000e  beql        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x51BDD8u;
    {
        const bool branch_taken_0x51bdd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x51bdd8) {
            ctx->pc = 0x51BDDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x51BDD8u;
            // 0x51bddc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x51BE14u;
            goto label_51be14;
        }
    }
    ctx->pc = 0x51BDE0u;
    // 0x51bde0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x51bde0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x51bde4: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x51BDE4u;
    SET_GPR_U32(ctx, 31, 0x51BDECu);
    ctx->pc = 0x51BDE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x51BDE4u;
            // 0x51bde8: 0x3406fd40  ori         $a2, $zero, 0xFD40 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64832);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BDECu; }
        if (ctx->pc != 0x51BDECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x51BDECu; }
        if (ctx->pc != 0x51BDECu) { return; }
    }
    ctx->pc = 0x51BDECu;
label_51bdec:
    // 0x51bdec: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x51bdecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x51bdf0: 0x30040001  andi        $a0, $zero, 0x1
    ctx->pc = 0x51bdf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)1);
    // 0x51bdf4: 0x8c666060  lw          $a2, 0x6060($v1)
    ctx->pc = 0x51bdf4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24672)));
    // 0x51bdf8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x51bdf8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x51bdfc: 0x90c5000c  lbu         $a1, 0xC($a2)
    ctx->pc = 0x51bdfcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x51be00: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x51be00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x51be04: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x51be04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x51be08: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x51be08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x51be0c: 0xa0c3000c  sb          $v1, 0xC($a2)
    ctx->pc = 0x51be0cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x51be10: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x51be10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_51be14:
    // 0x51be14: 0x3e00008  jr          $ra
    ctx->pc = 0x51BE14u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x51BE18u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x51BE14u;
            // 0x51be18: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x51BE1Cu;
    // 0x51be1c: 0x0  nop
    ctx->pc = 0x51be1cu;
    // NOP
}
