#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00152170
// Address: 0x152170 - 0x152230
void sub_00152170_0x152170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00152170_0x152170");
#endif

    switch (ctx->pc) {
        case 0x1521b4u: goto label_1521b4;
        default: break;
    }

    ctx->pc = 0x152170u;

    // 0x152170: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x152170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x152174: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x152174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x152178: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x152178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x15217c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x15217cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x152180: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x152180u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x152184: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x152184u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152188: 0x8ca40024  lw          $a0, 0x24($a1)
    ctx->pc = 0x152188u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 36)));
    // 0x15218c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x15218cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x152190: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x152190u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x152194: 0x8ca50004  lw          $a1, 0x4($a1)
    ctx->pc = 0x152194u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x152198: 0x30a50e77  andi        $a1, $a1, 0xE77
    ctx->pc = 0x152198u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3703);
    // 0x15219c: 0x50a30003  beql        $a1, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15219Cu;
    {
        const bool branch_taken_0x15219c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x15219c) {
            ctx->pc = 0x1521A0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x15219Cu;
            // 0x1521a0: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1521ACu;
            goto label_1521ac;
        }
    }
    ctx->pc = 0x1521A4u;
    // 0x1521a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x1521A4u;
    {
        const bool branch_taken_0x1521a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1521a4) {
            ctx->pc = 0x1521BCu;
            goto label_1521bc;
        }
    }
    ctx->pc = 0x1521ACu;
label_1521ac:
    // 0x1521ac: 0xc04e12c  jal         func_1384B0
    ctx->pc = 0x1521ACu;
    SET_GPR_U32(ctx, 31, 0x1521B4u);
    ctx->pc = 0x1521B0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1521ACu;
            // 0x1521b0: 0x27a6003c  addiu       $a2, $sp, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1384B0u;
    if (runtime->hasFunction(0x1384B0u)) {
        auto targetFn = runtime->lookupFunction(0x1384B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1521B4u; }
        if (ctx->pc != 0x1521B4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001384B0_0x1384b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1521B4u; }
        if (ctx->pc != 0x1521B4u) { return; }
    }
    ctx->pc = 0x1521B4u;
label_1521b4:
    // 0x1521b4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1521B4u;
    {
        const bool branch_taken_0x1521b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1521B8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1521B4u;
            // 0x1521b8: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1521b4) {
            ctx->pc = 0x1521C4u;
            goto label_1521c4;
        }
    }
    ctx->pc = 0x1521BCu;
label_1521bc:
    // 0x1521bc: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1521BCu;
    {
        const bool branch_taken_0x1521bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1521C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1521BCu;
            // 0x1521c0: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1521bc) {
            ctx->pc = 0x152220u;
            goto label_152220;
        }
    }
    ctx->pc = 0x1521C4u;
label_1521c4:
    // 0x1521c4: 0x24030800  addiu       $v1, $zero, 0x800
    ctx->pc = 0x1521c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    // 0x1521c8: 0x5083000b  beql        $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1521C8u;
    {
        const bool branch_taken_0x1521c8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1521c8) {
            ctx->pc = 0x1521CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1521C8u;
            // 0x1521cc: 0x8605000a  lh          $a1, 0xA($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1521F8u;
            goto label_1521f8;
        }
    }
    ctx->pc = 0x1521D0u;
    // 0x1521d0: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x1521d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1521d4: 0x50830003  beql        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1521D4u;
    {
        const bool branch_taken_0x1521d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1521d4) {
            ctx->pc = 0x1521D8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1521D4u;
            // 0x1521d8: 0x8603000a  lh          $v1, 0xA($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 10)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1521E4u;
            goto label_1521e4;
        }
    }
    ctx->pc = 0x1521DCu;
    // 0x1521dc: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x1521DCu;
    {
        const bool branch_taken_0x1521dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1521dc) {
            ctx->pc = 0x15221Cu;
            goto label_15221c;
        }
    }
    ctx->pc = 0x1521E4u;
label_1521e4:
    // 0x1521e4: 0x1c60000d  bgtz        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1521E4u;
    {
        const bool branch_taken_0x1521e4 = (GPR_S32(ctx, 3) > 0);
        ctx->pc = 0x1521E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1521E4u;
            // 0x1521e8: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1521e4) {
            ctx->pc = 0x15221Cu;
            goto label_15221c;
        }
    }
    ctx->pc = 0x1521ECu;
    // 0x1521ec: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x1521ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x1521f0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1521F0u;
    {
        const bool branch_taken_0x1521f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1521F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1521F0u;
            // 0x1521f4: 0xa4830056  sh          $v1, 0x56($a0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 4), 86), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1521f0) {
            ctx->pc = 0x15221Cu;
            goto label_15221c;
        }
    }
    ctx->pc = 0x1521F8u;
label_1521f8:
    // 0x1521f8: 0x28a10002  slti        $at, $a1, 0x2
    ctx->pc = 0x1521f8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1521fc: 0x10200007  beqz        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x1521FCu;
    {
        const bool branch_taken_0x1521fc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x152200u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1521FCu;
            // 0x152200: 0x8e260004  lw          $a2, 0x4($s1) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1521fc) {
            ctx->pc = 0x15221Cu;
            goto label_15221c;
        }
    }
    ctx->pc = 0x152204u;
    // 0x152204: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x152204u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x152208: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x152208u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x15220c: 0x651823  subu        $v1, $v1, $a1
    ctx->pc = 0x15220cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x152210: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x152210u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x152214: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x152214u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x152218: 0xa4640056  sh          $a0, 0x56($v1)
    ctx->pc = 0x152218u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 86), (uint16_t)GPR_U32(ctx, 4));
label_15221c:
    // 0x15221c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x15221cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_152220:
    // 0x152220: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x152220u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x152224: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x152224u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x152228: 0x3e00008  jr          $ra
    ctx->pc = 0x152228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15222Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x152228u;
            // 0x15222c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x152230u;
}
