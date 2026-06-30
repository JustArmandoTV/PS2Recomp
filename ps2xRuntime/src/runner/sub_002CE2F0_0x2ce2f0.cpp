#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CE2F0
// Address: 0x2ce2f0 - 0x2ce370
void sub_002CE2F0_0x2ce2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CE2F0_0x2ce2f0");
#endif

    switch (ctx->pc) {
        case 0x2ce338u: goto label_2ce338;
        case 0x2ce350u: goto label_2ce350;
        default: break;
    }

    ctx->pc = 0x2ce2f0u;

    // 0x2ce2f0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2ce2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2ce2f4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2ce2f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2ce2f8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2ce2f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2ce2fc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2ce2fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2ce300: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2ce300u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2ce304: 0x12200012  beqz        $s1, . + 4 + (0x12 << 2)
    ctx->pc = 0x2CE304u;
    {
        const bool branch_taken_0x2ce304 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CE308u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE304u;
            // 0x2ce308: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2ce304) {
            ctx->pc = 0x2CE350u;
            goto label_2ce350;
        }
    }
    ctx->pc = 0x2CE30Cu;
    // 0x2ce30c: 0x5220000b  beql        $s1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x2CE30Cu;
    {
        const bool branch_taken_0x2ce30c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce30c) {
            ctx->pc = 0x2CE310u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE30Cu;
            // 0x2ce310: 0x10143c  dsll32      $v0, $s0, 16 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CE33Cu;
            goto label_2ce33c;
        }
    }
    ctx->pc = 0x2CE314u;
    // 0x2ce314: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x2CE314u;
    {
        const bool branch_taken_0x2ce314 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce314) {
            ctx->pc = 0x2CE338u;
            goto label_2ce338;
        }
    }
    ctx->pc = 0x2CE31Cu;
    // 0x2ce31c: 0x8e250010  lw          $a1, 0x10($s1)
    ctx->pc = 0x2ce31cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x2ce320: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CE320u;
    {
        const bool branch_taken_0x2ce320 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce320) {
            ctx->pc = 0x2CE338u;
            goto label_2ce338;
        }
    }
    ctx->pc = 0x2CE328u;
    // 0x2ce328: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2CE328u;
    {
        const bool branch_taken_0x2ce328 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ce328) {
            ctx->pc = 0x2CE338u;
            goto label_2ce338;
        }
    }
    ctx->pc = 0x2CE330u;
    // 0x2ce330: 0xc0fe48c  jal         func_3F9230
    ctx->pc = 0x2CE330u;
    SET_GPR_U32(ctx, 31, 0x2CE338u);
    ctx->pc = 0x2CE334u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE330u;
            // 0x2ce334: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3F9230u;
    if (runtime->hasFunction(0x3F9230u)) {
        auto targetFn = runtime->lookupFunction(0x3F9230u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE338u; }
        if (ctx->pc != 0x2CE338u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003F9230_0x3f9230(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE338u; }
        if (ctx->pc != 0x2CE338u) { return; }
    }
    ctx->pc = 0x2CE338u;
label_2ce338:
    // 0x2ce338: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2ce338u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2ce33c:
    // 0x2ce33c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2ce33cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2ce340: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2CE340u;
    {
        const bool branch_taken_0x2ce340 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2ce340) {
            ctx->pc = 0x2CE344u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE340u;
            // 0x2ce344: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2CE354u;
            goto label_2ce354;
        }
    }
    ctx->pc = 0x2CE348u;
    // 0x2ce348: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2CE348u;
    SET_GPR_U32(ctx, 31, 0x2CE350u);
    ctx->pc = 0x2CE34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE348u;
            // 0x2ce34c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE350u; }
        if (ctx->pc != 0x2CE350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2CE350u; }
        if (ctx->pc != 0x2CE350u) { return; }
    }
    ctx->pc = 0x2CE350u;
label_2ce350:
    // 0x2ce350: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2ce350u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2ce354:
    // 0x2ce354: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2ce354u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2ce358: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2ce358u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2ce35c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2ce35cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2ce360: 0x3e00008  jr          $ra
    ctx->pc = 0x2CE360u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CE364u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CE360u;
            // 0x2ce364: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CE368u;
    // 0x2ce368: 0x0  nop
    ctx->pc = 0x2ce368u;
    // NOP
    // 0x2ce36c: 0x0  nop
    ctx->pc = 0x2ce36cu;
    // NOP
}
