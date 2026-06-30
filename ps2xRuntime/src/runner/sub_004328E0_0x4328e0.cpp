#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_004328E0
// Address: 0x4328e0 - 0x4329a0
void sub_004328E0_0x4328e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004328E0_0x4328e0");
#endif

    switch (ctx->pc) {
        case 0x43293cu: goto label_43293c;
        case 0x43296cu: goto label_43296c;
        case 0x432980u: goto label_432980;
        default: break;
    }

    ctx->pc = 0x4328e0u;

    // 0x4328e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4328e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4328e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x4328e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x4328e8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4328e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4328ec: 0x2442cca0  addiu       $v0, $v0, -0x3360
    ctx->pc = 0x4328ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954144));
    // 0x4328f0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x4328f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x4328f4: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x4328f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x4328f8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x4328f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x4328fc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4328fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432900: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x432900u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x432904: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x432904u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432908: 0xac870004  sw          $a3, 0x4($a0)
    ctx->pc = 0x432908u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 7));
    // 0x43290c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x43290cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x432910: 0xac880008  sw          $t0, 0x8($a0)
    ctx->pc = 0x432910u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 8));
    // 0x432914: 0xac85000c  sw          $a1, 0xC($a0)
    ctx->pc = 0x432914u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 5));
    // 0x432918: 0xa0830010  sb          $v1, 0x10($a0)
    ctx->pc = 0x432918u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 16), (uint8_t)GPR_U32(ctx, 3));
    // 0x43291c: 0x27a50034  addiu       $a1, $sp, 0x34
    ctx->pc = 0x43291cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 52));
    // 0x432920: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x432920u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x432924: 0xac800018  sw          $zero, 0x18($a0)
    ctx->pc = 0x432924u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 24), GPR_U32(ctx, 0));
    // 0x432928: 0x8c42d128  lw          $v0, -0x2ED8($v0)
    ctx->pc = 0x432928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955304)));
    // 0x43292c: 0x2624001c  addiu       $a0, $s1, 0x1C
    ctx->pc = 0x43292cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 28));
    // 0x432930: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x432930u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x432934: 0xc058300  jal         func_160C00
    ctx->pc = 0x432934u;
    SET_GPR_U32(ctx, 31, 0x43293Cu);
    ctx->pc = 0x432938u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x432934u;
            // 0x432938: 0xafa20034  sw          $v0, 0x34($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x160C00u;
    if (runtime->hasFunction(0x160C00u)) {
        auto targetFn = runtime->lookupFunction(0x160C00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43293Cu; }
        if (ctx->pc != 0x43293Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00160C00_0x160c00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43293Cu; }
        if (ctx->pc != 0x43293Cu) { return; }
    }
    ctx->pc = 0x43293Cu;
label_43293c:
    // 0x43293c: 0xa2200030  sb          $zero, 0x30($s1)
    ctx->pc = 0x43293cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 48), (uint8_t)GPR_U32(ctx, 0));
    // 0x432940: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x432940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x432944: 0x8c43d128  lw          $v1, -0x2ED8($v0)
    ctx->pc = 0x432944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955304)));
    // 0x432948: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x432948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x43294c: 0x2624003c  addiu       $a0, $s1, 0x3C
    ctx->pc = 0x43294cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
    // 0x432950: 0x27a60038  addiu       $a2, $sp, 0x38
    ctx->pc = 0x432950u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x432954: 0x27a2003c  addiu       $v0, $sp, 0x3C
    ctx->pc = 0x432954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 60));
    // 0x432958: 0x24630038  addiu       $v1, $v1, 0x38
    ctx->pc = 0x432958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 56));
    // 0x43295c: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x43295cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x432960: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x432960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x432964: 0xc10ca94  jal         func_432A50
    ctx->pc = 0x432964u;
    SET_GPR_U32(ctx, 31, 0x43296Cu);
    ctx->pc = 0x432968u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x432964u;
            // 0x432968: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x432A50u;
    if (runtime->hasFunction(0x432A50u)) {
        auto targetFn = runtime->lookupFunction(0x432A50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43296Cu; }
        if (ctx->pc != 0x43296Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00432A50_0x432a50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x43296Cu; }
        if (ctx->pc != 0x43296Cu) { return; }
    }
    ctx->pc = 0x43296Cu;
label_43296c:
    // 0x43296c: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x43296cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x432970: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x432970u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432974: 0x8c44d128  lw          $a0, -0x2ED8($v0)
    ctx->pc = 0x432974u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294955304)));
    // 0x432978: 0xc057b90  jal         func_15EE40
    ctx->pc = 0x432978u;
    SET_GPR_U32(ctx, 31, 0x432980u);
    ctx->pc = 0x43297Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x432978u;
            // 0x43297c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15EE40u;
    if (runtime->hasFunction(0x15EE40u)) {
        auto targetFn = runtime->lookupFunction(0x15EE40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432980u; }
        if (ctx->pc != 0x432980u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015EE40_0x15ee40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x432980u; }
        if (ctx->pc != 0x432980u) { return; }
    }
    ctx->pc = 0x432980u;
label_432980:
    // 0x432980: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x432980u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432984: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x432984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x432988: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x432988u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43298c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x43298cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x432990: 0x3e00008  jr          $ra
    ctx->pc = 0x432990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x432994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x432990u;
            // 0x432994: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x432998u;
    // 0x432998: 0x0  nop
    ctx->pc = 0x432998u;
    // NOP
    // 0x43299c: 0x0  nop
    ctx->pc = 0x43299cu;
    // NOP
}
