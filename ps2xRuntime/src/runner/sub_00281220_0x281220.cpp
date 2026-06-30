#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00281220
// Address: 0x281220 - 0x281350
void sub_00281220_0x281220(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00281220_0x281220");
#endif

    switch (ctx->pc) {
        case 0x281294u: goto label_281294;
        case 0x2812c0u: goto label_2812c0;
        case 0x281300u: goto label_281300;
        default: break;
    }

    ctx->pc = 0x281220u;

    // 0x281220: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x281220u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x281224: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x281224u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x281228: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x281228u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x28122c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x28122cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x281230: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x281230u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281234: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x281234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x281238: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x281238u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28123c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x28123cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x281240: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x281240u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281244: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x281244u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x281248: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x281248u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28124c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x28124cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x281250: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x281250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x281254: 0x8c850004  lw          $a1, 0x4($a0)
    ctx->pc = 0x281254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x281258: 0x318bc  dsll32      $v1, $v1, 2
    ctx->pc = 0x281258u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 2));
    // 0x28125c: 0xe58821  addu        $s1, $a3, $a1
    ctx->pc = 0x28125cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 5)));
    // 0x281260: 0x318be  dsrl32      $v1, $v1, 2
    ctx->pc = 0x281260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 2));
    // 0x281264: 0x71082a  slt         $at, $v1, $s1
    ctx->pc = 0x281264u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x281268: 0x1020000b  beqz        $at, . + 4 + (0xB << 2)
    ctx->pc = 0x281268u;
    {
        const bool branch_taken_0x281268 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x28126Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281268u;
            // 0x28126c: 0xb48023  subu        $s0, $a1, $s4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281268) {
            ctx->pc = 0x281298u;
            goto label_281298;
        }
    }
    ctx->pc = 0x281270u;
    // 0x281270: 0x71082a  slt         $at, $v1, $s1
    ctx->pc = 0x281270u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x281274: 0x10200008  beqz        $at, . + 4 + (0x8 << 2)
    ctx->pc = 0x281274u;
    {
        const bool branch_taken_0x281274 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x281274) {
            ctx->pc = 0x281298u;
            goto label_281298;
        }
    }
    ctx->pc = 0x28127Cu;
    // 0x28127c: 0x32840  sll         $a1, $v1, 1
    ctx->pc = 0x28127cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x281280: 0x225082a  slt         $at, $s1, $a1
    ctx->pc = 0x281280u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x281284: 0x221280a  movz        $a1, $s1, $at
    ctx->pc = 0x281284u;
    if (GPR_U64(ctx, 1) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 17));
    // 0x281288: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x281288u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28128c: 0xc0a725c  jal         func_29C970
    ctx->pc = 0x28128Cu;
    SET_GPR_U32(ctx, 31, 0x281294u);
    ctx->pc = 0x281290u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28128Cu;
            // 0x281290: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x29C970u;
    if (runtime->hasFunction(0x29C970u)) {
        auto targetFn = runtime->lookupFunction(0x29C970u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281294u; }
        if (ctx->pc != 0x281294u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0029C970_0x29c970(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281294u; }
        if (ctx->pc != 0x281294u) { return; }
    }
    ctx->pc = 0x281294u;
label_281294:
    // 0x281294: 0x0  nop
    ctx->pc = 0x281294u;
    // NOP
label_281298:
    // 0x281298: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x281298u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x28129c: 0x142880  sll         $a1, $s4, 2
    ctx->pc = 0x28129cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 20), 2));
    // 0x2812a0: 0x2607ffff  addiu       $a3, $s0, -0x1
    ctx->pc = 0x2812a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x2812a4: 0x121880  sll         $v1, $s2, 2
    ctx->pc = 0x2812a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2812a8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2812a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2812ac: 0x4e0000c  bltz        $a3, . + 4 + (0xC << 2)
    ctx->pc = 0x2812ACu;
    {
        const bool branch_taken_0x2812ac = (GPR_S32(ctx, 7) < 0);
        ctx->pc = 0x2812B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2812ACu;
            // 0x2812b0: 0x834021  addu        $t0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2812ac) {
            ctx->pc = 0x2812E0u;
            goto label_2812e0;
        }
    }
    ctx->pc = 0x2812B4u;
    // 0x2812b4: 0x71880  sll         $v1, $a3, 2
    ctx->pc = 0x2812b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 2));
    // 0x2812b8: 0x833021  addu        $a2, $a0, $v1
    ctx->pc = 0x2812b8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2812bc: 0x1032021  addu        $a0, $t0, $v1
    ctx->pc = 0x2812bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 3)));
label_2812c0:
    // 0x2812c0: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2812c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2812c4: 0x24e7ffff  addiu       $a3, $a3, -0x1
    ctx->pc = 0x2812c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294967295));
    // 0x2812c8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2812c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2812cc: 0x24c6fffc  addiu       $a2, $a2, -0x4
    ctx->pc = 0x2812ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967292));
    // 0x2812d0: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x2812d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x2812d4: 0x4e1fffa  bgez        $a3, . + 4 + (-0x6 << 2)
    ctx->pc = 0x2812D4u;
    {
        const bool branch_taken_0x2812d4 = (GPR_S32(ctx, 7) >= 0);
        if (branch_taken_0x2812d4) {
            ctx->pc = 0x2812C0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2812c0;
        }
    }
    ctx->pc = 0x2812DCu;
    // 0x2812dc: 0x0  nop
    ctx->pc = 0x2812dcu;
    // NOP
label_2812e0:
    // 0x2812e0: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x2812e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x2812e4: 0x2646ffff  addiu       $a2, $s2, -0x1
    ctx->pc = 0x2812e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967295));
    // 0x2812e8: 0x4c0000d  bltz        $a2, . + 4 + (0xD << 2)
    ctx->pc = 0x2812E8u;
    {
        const bool branch_taken_0x2812e8 = (GPR_S32(ctx, 6) < 0);
        ctx->pc = 0x2812ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2812E8u;
            // 0x2812ec: 0x652021  addu        $a0, $v1, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2812e8) {
            ctx->pc = 0x281320u;
            goto label_281320;
        }
    }
    ctx->pc = 0x2812F0u;
    // 0x2812f0: 0x61880  sll         $v1, $a2, 2
    ctx->pc = 0x2812f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x2812f4: 0x2632821  addu        $a1, $s3, $v1
    ctx->pc = 0x2812f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x2812f8: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x2812f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x2812fc: 0x0  nop
    ctx->pc = 0x2812fcu;
    // NOP
label_281300:
    // 0x281300: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x281300u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x281304: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x281304u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x281308: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x281308u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x28130c: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x28130cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x281310: 0x2484fffc  addiu       $a0, $a0, -0x4
    ctx->pc = 0x281310u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
    // 0x281314: 0x4c1fffa  bgez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x281314u;
    {
        const bool branch_taken_0x281314 = (GPR_S32(ctx, 6) >= 0);
        if (branch_taken_0x281314) {
            ctx->pc = 0x281300u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_281300;
        }
    }
    ctx->pc = 0x28131Cu;
    // 0x28131c: 0x0  nop
    ctx->pc = 0x28131cu;
    // NOP
label_281320:
    // 0x281320: 0xaeb10004  sw          $s1, 0x4($s5)
    ctx->pc = 0x281320u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 17));
    // 0x281324: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x281324u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x281328: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x281328u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28132c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x28132cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x281330: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x281330u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x281334: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x281334u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281338: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x281338u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28133c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x28133cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281340: 0x3e00008  jr          $ra
    ctx->pc = 0x281340u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281344u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281340u;
            // 0x281344: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281348u;
    // 0x281348: 0x0  nop
    ctx->pc = 0x281348u;
    // NOP
    // 0x28134c: 0x0  nop
    ctx->pc = 0x28134cu;
    // NOP
}
