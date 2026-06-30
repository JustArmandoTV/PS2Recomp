#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002471A0
// Address: 0x2471a0 - 0x247290
void sub_002471A0_0x2471a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002471A0_0x2471a0");
#endif

    switch (ctx->pc) {
        case 0x2471dcu: goto label_2471dc;
        case 0x2471f8u: goto label_2471f8;
        case 0x247270u: goto label_247270;
        default: break;
    }

    ctx->pc = 0x2471a0u;

    // 0x2471a0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2471a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2471a4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2471a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2471a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2471a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2471ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2471acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2471b0: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2471b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2471b4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2471b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2471b8: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2471b8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2471bc: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x2471bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2471c0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x2471c0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2471c4: 0x8c820008  lw          $v0, 0x8($a0)
    ctx->pc = 0x2471c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x2471c8: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x2471c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2471cc: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2471ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2471d0: 0xc44c0020  lwc1        $f12, 0x20($v0)
    ctx->pc = 0x2471d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2471d4: 0xc0a3a64  jal         func_28E990
    ctx->pc = 0x2471D4u;
    SET_GPR_U32(ctx, 31, 0x2471DCu);
    ctx->pc = 0x2471D8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2471D4u;
            // 0x2471d8: 0x24640040  addiu       $a0, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E990u;
    if (runtime->hasFunction(0x28E990u)) {
        auto targetFn = runtime->lookupFunction(0x28E990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2471DCu; }
        if (ctx->pc != 0x2471DCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E990_0x28e990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2471DCu; }
        if (ctx->pc != 0x2471DCu) { return; }
    }
    ctx->pc = 0x2471DCu;
label_2471dc:
    // 0x2471dc: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x2471dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x2471e0: 0x26250060  addiu       $a1, $s1, 0x60
    ctx->pc = 0x2471e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x2471e4: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x2471e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x2471e8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x2471e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2471ec: 0xc44c0020  lwc1        $f12, 0x20($v0)
    ctx->pc = 0x2471ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2471f0: 0xc0a3a64  jal         func_28E990
    ctx->pc = 0x2471F0u;
    SET_GPR_U32(ctx, 31, 0x2471F8u);
    ctx->pc = 0x2471F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2471F0u;
            // 0x2471f4: 0x24640040  addiu       $a0, $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28E990u;
    if (runtime->hasFunction(0x28E990u)) {
        auto targetFn = runtime->lookupFunction(0x28E990u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2471F8u; }
        if (ctx->pc != 0x2471F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028E990_0x28e990(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2471F8u; }
        if (ctx->pc != 0x2471F8u) { return; }
    }
    ctx->pc = 0x2471F8u;
label_2471f8:
    // 0x2471f8: 0xae110000  sw          $s1, 0x0($s0)
    ctx->pc = 0x2471f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 17));
    // 0x2471fc: 0x26220010  addiu       $v0, $s1, 0x10
    ctx->pc = 0x2471fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x247200: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x247200u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x247204: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x247204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x247208: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x247208u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x24720c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x24720cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x247210: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x247210u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x247214: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x247214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x247218: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x247218u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x24721c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x24721cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x247220: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x247220u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    // 0x247224: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x247224u;
    {
        const bool branch_taken_0x247224 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x247228u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247224u;
            // 0x247228: 0xae230004  sw          $v1, 0x4($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x247224) {
            ctx->pc = 0x247240u;
            goto label_247240;
        }
    }
    ctx->pc = 0x24722Cu;
    // 0x24722c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x24722cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x247230: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x247230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x247234: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x247234u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x247238: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x247238u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x24723c: 0x0  nop
    ctx->pc = 0x24723cu;
    // NOP
label_247240:
    // 0x247240: 0x26240010  addiu       $a0, $s1, 0x10
    ctx->pc = 0x247240u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x247244: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x247244u;
    {
        const bool branch_taken_0x247244 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x247244) {
            ctx->pc = 0x247260u;
            goto label_247260;
        }
    }
    ctx->pc = 0x24724Cu;
    // 0x24724c: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x24724cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x247250: 0x26220060  addiu       $v0, $s1, 0x60
    ctx->pc = 0x247250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
    // 0x247254: 0xac83000c  sw          $v1, 0xC($a0)
    ctx->pc = 0x247254u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 3));
    // 0x247258: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x247258u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x24725c: 0x0  nop
    ctx->pc = 0x24725cu;
    // NOP
label_247260:
    // 0x247260: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x247260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x247264: 0x26250020  addiu       $a1, $s1, 0x20
    ctx->pc = 0x247264u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x247268: 0xc0a45a0  jal         func_291680
    ctx->pc = 0x247268u;
    SET_GPR_U32(ctx, 31, 0x247270u);
    ctx->pc = 0x24726Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x247268u;
            // 0x24726c: 0x26260060  addiu       $a2, $s1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 17), 96));
        ctx->in_delay_slot = false;
    ctx->pc = 0x291680u;
    if (runtime->hasFunction(0x291680u)) {
        auto targetFn = runtime->lookupFunction(0x291680u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247270u; }
        if (ctx->pc != 0x247270u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00291680_0x291680(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x247270u; }
        if (ctx->pc != 0x247270u) { return; }
    }
    ctx->pc = 0x247270u;
label_247270:
    // 0x247270: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x247270u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x247274: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x247274u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x247278: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x247278u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x24727c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x24727cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x247280: 0x3e00008  jr          $ra
    ctx->pc = 0x247280u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x247284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x247280u;
            // 0x247284: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x247288u;
    // 0x247288: 0x0  nop
    ctx->pc = 0x247288u;
    // NOP
    // 0x24728c: 0x0  nop
    ctx->pc = 0x24728cu;
    // NOP
}
