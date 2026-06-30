#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0015DCF0
// Address: 0x15dcf0 - 0x15ddf0
void sub_0015DCF0_0x15dcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015DCF0_0x15dcf0");
#endif

    switch (ctx->pc) {
        case 0x15dd00u: goto label_15dd00;
        case 0x15dd08u: goto label_15dd08;
        case 0x15dd20u: goto label_15dd20;
        case 0x15dd80u: goto label_15dd80;
        case 0x15dd98u: goto label_15dd98;
        case 0x15ddc0u: goto label_15ddc0;
        case 0x15ddd8u: goto label_15ddd8;
        default: break;
    }

    ctx->pc = 0x15dcf0u;

    // 0x15dcf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15dcf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15dcf4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15dcf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15dcf8: 0xc043104  jal         func_10C410
    ctx->pc = 0x15DCF8u;
    SET_GPR_U32(ctx, 31, 0x15DD00u);
    ctx->pc = 0x15DCFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DCF8u;
            // 0x15dcfc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C410u;
    if (runtime->hasFunction(0x10C410u)) {
        auto targetFn = runtime->lookupFunction(0x10C410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DD00u; }
        if (ctx->pc != 0x15DD00u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C410_0x10c410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DD00u; }
        if (ctx->pc != 0x15DD00u) { return; }
    }
    ctx->pc = 0x15DD00u;
label_15dd00:
    // 0x15dd00: 0xc05772c  jal         func_15DCB0
    ctx->pc = 0x15DD00u;
    SET_GPR_U32(ctx, 31, 0x15DD08u);
    ctx->pc = 0x15DCB0u;
    if (runtime->hasFunction(0x15DCB0u)) {
        auto targetFn = runtime->lookupFunction(0x15DCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DD08u; }
        if (ctx->pc != 0x15DD08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DCB0_0x15dcb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DD08u; }
        if (ctx->pc != 0x15DD08u) { return; }
    }
    ctx->pc = 0x15DD08u;
label_15dd08:
    // 0x15dd08: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15DD08u;
    {
        const bool branch_taken_0x15dd08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DD0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DD08u;
            // 0x15dd0c: 0x3c02005d  lui         $v0, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dd08) {
            ctx->pc = 0x15DD18u;
            goto label_15dd18;
        }
    }
    ctx->pc = 0x15DD10u;
    // 0x15dd10: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x15DD10u;
    {
        const bool branch_taken_0x15dd10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DD14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DD10u;
            // 0x15dd14: 0x90425964  lbu         $v0, 0x5964($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22884)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dd10) {
            ctx->pc = 0x15DD44u;
            goto label_15dd44;
        }
    }
    ctx->pc = 0x15DD18u;
label_15dd18:
    // 0x15dd18: 0xc043104  jal         func_10C410
    ctx->pc = 0x15DD18u;
    SET_GPR_U32(ctx, 31, 0x15DD20u);
    ctx->pc = 0x15DD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DD18u;
            // 0x15dd1c: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C410u;
    if (runtime->hasFunction(0x10C410u)) {
        auto targetFn = runtime->lookupFunction(0x10C410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DD20u; }
        if (ctx->pc != 0x15DD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C410_0x10c410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DD20u; }
        if (ctx->pc != 0x15DD20u) { return; }
    }
    ctx->pc = 0x15DD20u;
label_15dd20:
    // 0x15dd20: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x15dd20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15dd24: 0x31342  srl         $v0, $v1, 13
    ctx->pc = 0x15dd24u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 13));
    // 0x15dd28: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x15dd28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x15dd2c: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x15DD2Cu;
    {
        const bool branch_taken_0x15dd2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15dd2c) {
            ctx->pc = 0x15DD30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15DD2Cu;
            // 0x15dd30: 0x31402  srl         $v0, $v1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x15DD40u;
            goto label_15dd40;
        }
    }
    ctx->pc = 0x15DD34u;
    // 0x15dd34: 0x31102  srl         $v0, $v1, 4
    ctx->pc = 0x15dd34u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x15dd38: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x15DD38u;
    {
        const bool branch_taken_0x15dd38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DD3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DD38u;
            // 0x15dd3c: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dd38) {
            ctx->pc = 0x15DD44u;
            goto label_15dd44;
        }
    }
    ctx->pc = 0x15DD40u;
label_15dd40:
    // 0x15dd40: 0x3042001f  andi        $v0, $v0, 0x1F
    ctx->pc = 0x15dd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)31);
label_15dd44:
    // 0x15dd44: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15dd44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15dd48: 0x3e00008  jr          $ra
    ctx->pc = 0x15DD48u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DD4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DD48u;
            // 0x15dd4c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15DD50u;
    // 0x15dd50: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x15dd50u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x15dd54: 0x24475960  addiu       $a3, $v0, 0x5960
    ctx->pc = 0x15dd54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 22880));
    // 0x15dd58: 0x68830007  ldl         $v1, 0x7($a0)
    ctx->pc = 0x15dd58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x15dd5c: 0x6c830000  ldr         $v1, 0x0($a0)
    ctx->pc = 0x15dd5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x15dd60: 0xb0e30007  sdl         $v1, 0x7($a3)
    ctx->pc = 0x15dd60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x15dd64: 0x3e00008  jr          $ra
    ctx->pc = 0x15DD64u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DD68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DD64u;
            // 0x15dd68: 0xb4e30000  sdr         $v1, 0x0($a3) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 7), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15DD6Cu;
    // 0x15dd6c: 0x0  nop
    ctx->pc = 0x15dd6cu;
    // NOP
    // 0x15dd70: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15dd70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15dd74: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15dd74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15dd78: 0xc05772c  jal         func_15DCB0
    ctx->pc = 0x15DD78u;
    SET_GPR_U32(ctx, 31, 0x15DD80u);
    ctx->pc = 0x15DCB0u;
    if (runtime->hasFunction(0x15DCB0u)) {
        auto targetFn = runtime->lookupFunction(0x15DCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DD80u; }
        if (ctx->pc != 0x15DD80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DCB0_0x15dcb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DD80u; }
        if (ctx->pc != 0x15DD80u) { return; }
    }
    ctx->pc = 0x15DD80u;
label_15dd80:
    // 0x15dd80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15DD80u;
    {
        const bool branch_taken_0x15dd80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DD84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DD80u;
            // 0x15dd84: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dd80) {
            ctx->pc = 0x15DD90u;
            goto label_15dd90;
        }
    }
    ctx->pc = 0x15DD88u;
    // 0x15dd88: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x15DD88u;
    {
        const bool branch_taken_0x15dd88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DD8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DD88u;
            // 0x15dd8c: 0x90625962  lbu         $v0, 0x5962($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22882)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15dd88) {
            ctx->pc = 0x15DDA4u;
            goto label_15dda4;
        }
    }
    ctx->pc = 0x15DD90u;
label_15dd90:
    // 0x15dd90: 0xc043104  jal         func_10C410
    ctx->pc = 0x15DD90u;
    SET_GPR_U32(ctx, 31, 0x15DD98u);
    ctx->pc = 0x15DD94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DD90u;
            // 0x15dd94: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C410u;
    if (runtime->hasFunction(0x10C410u)) {
        auto targetFn = runtime->lookupFunction(0x10C410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DD98u; }
        if (ctx->pc != 0x15DD98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C410_0x10c410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DD98u; }
        if (ctx->pc != 0x15DD98u) { return; }
    }
    ctx->pc = 0x15DD98u;
label_15dd98:
    // 0x15dd98: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15dd98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15dd9c: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x15dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x15dda0: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x15dda0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
label_15dda4:
    // 0x15dda4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15dda4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15dda8: 0x3e00008  jr          $ra
    ctx->pc = 0x15DDA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DDACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DDA8u;
            // 0x15ddac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15DDB0u;
    // 0x15ddb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x15ddb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15ddb4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x15ddb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x15ddb8: 0xc05772c  jal         func_15DCB0
    ctx->pc = 0x15DDB8u;
    SET_GPR_U32(ctx, 31, 0x15DDC0u);
    ctx->pc = 0x15DCB0u;
    if (runtime->hasFunction(0x15DCB0u)) {
        auto targetFn = runtime->lookupFunction(0x15DCB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DDC0u; }
        if (ctx->pc != 0x15DDC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015DCB0_0x15dcb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DDC0u; }
        if (ctx->pc != 0x15DDC0u) { return; }
    }
    ctx->pc = 0x15DDC0u;
label_15ddc0:
    // 0x15ddc0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15DDC0u;
    {
        const bool branch_taken_0x15ddc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DDC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DDC0u;
            // 0x15ddc4: 0x3c03005d  lui         $v1, 0x5D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ddc0) {
            ctx->pc = 0x15DDD0u;
            goto label_15ddd0;
        }
    }
    ctx->pc = 0x15DDC8u;
    // 0x15ddc8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x15DDC8u;
    {
        const bool branch_taken_0x15ddc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15DDCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DDC8u;
            // 0x15ddcc: 0x90625965  lbu         $v0, 0x5965($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 22885)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15ddc8) {
            ctx->pc = 0x15DDE0u;
            goto label_15dde0;
        }
    }
    ctx->pc = 0x15DDD0u;
label_15ddd0:
    // 0x15ddd0: 0xc043104  jal         func_10C410
    ctx->pc = 0x15DDD0u;
    SET_GPR_U32(ctx, 31, 0x15DDD8u);
    ctx->pc = 0x15DDD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x15DDD0u;
            // 0x15ddd4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C410u;
    if (runtime->hasFunction(0x10C410u)) {
        auto targetFn = runtime->lookupFunction(0x10C410u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DDD8u; }
        if (ctx->pc != 0x15DDD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C410_0x10c410(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x15DDD8u; }
        if (ctx->pc != 0x15DDD8u) { return; }
    }
    ctx->pc = 0x15DDD8u;
label_15ddd8:
    // 0x15ddd8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x15ddd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15dddc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x15dddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_15dde0:
    // 0x15dde0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x15dde0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15dde4: 0x3e00008  jr          $ra
    ctx->pc = 0x15DDE4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15DDE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x15DDE4u;
            // 0x15dde8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x15DDECu;
    // 0x15ddec: 0x0  nop
    ctx->pc = 0x15ddecu;
    // NOP
}
