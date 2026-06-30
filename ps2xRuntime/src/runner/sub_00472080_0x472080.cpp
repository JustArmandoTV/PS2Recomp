#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00472080
// Address: 0x472080 - 0x4721d0
void sub_00472080_0x472080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00472080_0x472080");
#endif

    switch (ctx->pc) {
        case 0x4720ecu: goto label_4720ec;
        case 0x47210cu: goto label_47210c;
        case 0x472120u: goto label_472120;
        default: break;
    }

    ctx->pc = 0x472080u;

    // 0x472080: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x472080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x472084: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x472084u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x472088: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x472088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x47208c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x47208cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x472090: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x472090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x472094: 0x23900  sll         $a3, $v0, 4
    ctx->pc = 0x472094u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x472098: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x472098u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x47209c: 0x51040  sll         $v0, $a1, 1
    ctx->pc = 0x47209cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x4720a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x4720a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x4720a4: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x4720a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4720a8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x4720a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x4720ac: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4720acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4720b0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x4720b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x4720b4: 0x451023  subu        $v0, $v0, $a1
    ctx->pc = 0x4720b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x4720b8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4720b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4720bc: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x4720bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x4720c0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4720c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4720c4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x4720c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x4720c8: 0x8cd50020  lw          $s5, 0x20($a2)
    ctx->pc = 0x4720c8u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 32)));
    // 0x4720cc: 0x2463f2d0  addiu       $v1, $v1, -0xD30
    ctx->pc = 0x4720ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963920));
    // 0x4720d0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x4720d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x4720d4: 0x8cd6001c  lw          $s6, 0x1C($a2)
    ctx->pc = 0x4720d4u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x4720d8: 0x679021  addu        $s2, $v1, $a3
    ctx->pc = 0x4720d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x4720dc: 0x24510070  addiu       $s1, $v0, 0x70
    ctx->pc = 0x4720dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x4720e0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x4720e0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4720e4: 0x220982d  daddu       $s3, $s1, $zero
    ctx->pc = 0x4720e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4720e8: 0xa640004e  sh          $zero, 0x4E($s2)
    ctx->pc = 0x4720e8u;
    WRITE16(ADD32(GPR_U32(ctx, 18), 78), (uint16_t)GPR_U32(ctx, 0));
label_4720ec:
    // 0x4720ec: 0x9643004e  lhu         $v1, 0x4E($s2)
    ctx->pc = 0x4720ecu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 78)));
    // 0x4720f0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4720f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4720f4: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4720f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4720f8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x4720f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x4720fc: 0x2438021  addu        $s0, $s2, $v1
    ctx->pc = 0x4720fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 3)));
    // 0x472100: 0x2c23021  addu        $a2, $s6, $v0
    ctx->pc = 0x472100u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x472104: 0xc074f30  jal         func_1D3CC0
    ctx->pc = 0x472104u;
    SET_GPR_U32(ctx, 31, 0x47210Cu);
    ctx->pc = 0x472108u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472104u;
            // 0x472108: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D3CC0u;
    if (runtime->hasFunction(0x1D3CC0u)) {
        auto targetFn = runtime->lookupFunction(0x1D3CC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47210Cu; }
        if (ctx->pc != 0x47210Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D3CC0_0x1d3cc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x47210Cu; }
        if (ctx->pc != 0x47210Cu) { return; }
    }
    ctx->pc = 0x47210Cu;
label_47210c:
    // 0x47210c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x47210cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x472110: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x472110u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x472114: 0x2665002c  addiu       $a1, $s3, 0x2C
    ctx->pc = 0x472114u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 44));
    // 0x472118: 0xc0751b8  jal         func_1D46E0
    ctx->pc = 0x472118u;
    SET_GPR_U32(ctx, 31, 0x472120u);
    ctx->pc = 0x47211Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x472118u;
            // 0x47211c: 0x2c23021  addu        $a2, $s6, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D46E0u;
    if (runtime->hasFunction(0x1D46E0u)) {
        auto targetFn = runtime->lookupFunction(0x1D46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472120u; }
        if (ctx->pc != 0x472120u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D46E0_0x1d46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x472120u; }
        if (ctx->pc != 0x472120u) { return; }
    }
    ctx->pc = 0x472120u;
label_472120:
    // 0x472120: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x472120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x472124: 0x8e230054  lw          $v1, 0x54($s1)
    ctx->pc = 0x472124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 84)));
    // 0x472128: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x472128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x47212c: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x47212cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x472130: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x472130u;
    {
        const bool branch_taken_0x472130 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x472130) {
            ctx->pc = 0x472140u;
            goto label_472140;
        }
    }
    ctx->pc = 0x472138u;
    // 0x472138: 0xae240054  sw          $a0, 0x54($s1)
    ctx->pc = 0x472138u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 84), GPR_U32(ctx, 4));
    // 0x47213c: 0x0  nop
    ctx->pc = 0x47213cu;
    // NOP
label_472140:
    // 0x472140: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x472140u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x472144: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x472144u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x472148: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x472148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x47214c: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x47214cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x472150: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x472150u;
    {
        const bool branch_taken_0x472150 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x472150) {
            ctx->pc = 0x472160u;
            goto label_472160;
        }
    }
    ctx->pc = 0x472158u;
    // 0x472158: 0xae240050  sw          $a0, 0x50($s1)
    ctx->pc = 0x472158u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 80), GPR_U32(ctx, 4));
    // 0x47215c: 0x0  nop
    ctx->pc = 0x47215cu;
    // NOP
label_472160:
    // 0x472160: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x472160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x472164: 0x8e230058  lw          $v1, 0x58($s1)
    ctx->pc = 0x472164u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x472168: 0x8c840028  lw          $a0, 0x28($a0)
    ctx->pc = 0x472168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 40)));
    // 0x47216c: 0x64082a  slt         $at, $v1, $a0
    ctx->pc = 0x47216cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x472170: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x472170u;
    {
        const bool branch_taken_0x472170 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x472170) {
            ctx->pc = 0x472180u;
            goto label_472180;
        }
    }
    ctx->pc = 0x472178u;
    // 0x472178: 0xae240058  sw          $a0, 0x58($s1)
    ctx->pc = 0x472178u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 88), GPR_U32(ctx, 4));
    // 0x47217c: 0x0  nop
    ctx->pc = 0x47217cu;
    // NOP
label_472180:
    // 0x472180: 0x9643004e  lhu         $v1, 0x4E($s2)
    ctx->pc = 0x472180u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 78)));
    // 0x472184: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x472184u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x472188: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x472188u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x47218c: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x47218cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
    // 0x472190: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x472190u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x472194: 0x1280ffd5  beqz        $s4, . + 4 + (-0x2B << 2)
    ctx->pc = 0x472194u;
    {
        const bool branch_taken_0x472194 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x472198u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x472194u;
            // 0x472198: 0xa643004e  sh          $v1, 0x4E($s2) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 18), 78), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x472194) {
            ctx->pc = 0x4720ECu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_4720ec;
        }
    }
    ctx->pc = 0x47219Cu;
    // 0x47219c: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x47219cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4721a0: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x4721a0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4721a4: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x4721a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4721a8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x4721a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4721ac: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x4721acu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4721b0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x4721b0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4721b4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x4721b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4721b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x4721b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4721bc: 0x3e00008  jr          $ra
    ctx->pc = 0x4721BCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4721C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x4721BCu;
            // 0x4721c0: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x4721C4u;
    // 0x4721c4: 0x0  nop
    ctx->pc = 0x4721c4u;
    // NOP
    // 0x4721c8: 0x0  nop
    ctx->pc = 0x4721c8u;
    // NOP
    // 0x4721cc: 0x0  nop
    ctx->pc = 0x4721ccu;
    // NOP
}
