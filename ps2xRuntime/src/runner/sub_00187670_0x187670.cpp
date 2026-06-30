#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00187670
// Address: 0x187670 - 0x187728
void sub_00187670_0x187670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00187670_0x187670");
#endif

    switch (ctx->pc) {
        case 0x1876acu: goto label_1876ac;
        case 0x187708u: goto label_187708;
        default: break;
    }

    ctx->pc = 0x187670u;

    // 0x187670: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x187670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x187674: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x187674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x187678: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x187678u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x18767c: 0x3c10006d  lui         $s0, 0x6D
    ctx->pc = 0x18767cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)109 << 16));
    // 0x187680: 0x2442f980  addiu       $v0, $v0, -0x680
    ctx->pc = 0x187680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965632));
    // 0x187684: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x187684u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x187688: 0x2610fa80  addiu       $s0, $s0, -0x580
    ctx->pc = 0x187688u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965888));
    // 0x18768c: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x18768cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x187690: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x187690u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x187694: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x187694u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187698: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x187698u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18769c: 0x24040029  addiu       $a0, $zero, 0x29
    ctx->pc = 0x18769cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
    // 0x1876a0: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x1876a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1876a4: 0xc05f1dc  jal         func_17C770
    ctx->pc = 0x1876A4u;
    SET_GPR_U32(ctx, 31, 0x1876ACu);
    ctx->pc = 0x1876A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1876A4u;
            // 0x1876a8: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C770u;
    if (runtime->hasFunction(0x17C770u)) {
        auto targetFn = runtime->lookupFunction(0x17C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1876ACu; }
        if (ctx->pc != 0x1876ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C770_0x17c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1876ACu; }
        if (ctx->pc != 0x1876ACu) { return; }
    }
    ctx->pc = 0x1876ACu;
label_1876ac:
    // 0x1876ac: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1876acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1876b0: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1876b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1876b4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1876b4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1876b8: 0x3e00008  jr          $ra
    ctx->pc = 0x1876B8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1876BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1876B8u;
            // 0x1876bc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1876C0u;
    // 0x1876c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1876c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1876c4: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x1876c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x1876c8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1876c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1876cc: 0x3c10006d  lui         $s0, 0x6D
    ctx->pc = 0x1876ccu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)109 << 16));
    // 0x1876d0: 0x2442f980  addiu       $v0, $v0, -0x680
    ctx->pc = 0x1876d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965632));
    // 0x1876d4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1876d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1876d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1876d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1876dc: 0x2610fa80  addiu       $s0, $s0, -0x580
    ctx->pc = 0x1876dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965888));
    // 0x1876e0: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x1876e0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 4));
    // 0x1876e4: 0x2404002a  addiu       $a0, $zero, 0x2A
    ctx->pc = 0x1876e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
    // 0x1876e8: 0xac450004  sw          $a1, 0x4($v0)
    ctx->pc = 0x1876e8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 5));
    // 0x1876ec: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1876ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1876f0: 0xac460008  sw          $a2, 0x8($v0)
    ctx->pc = 0x1876f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 6));
    // 0x1876f4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x1876f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1876f8: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1876f8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1876fc: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x1876fcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x187700: 0xc05f1dc  jal         func_17C770
    ctx->pc = 0x187700u;
    SET_GPR_U32(ctx, 31, 0x187708u);
    ctx->pc = 0x187704u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x187700u;
            // 0x187704: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x17C770u;
    if (runtime->hasFunction(0x17C770u)) {
        auto targetFn = runtime->lookupFunction(0x17C770u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187708u; }
        if (ctx->pc != 0x187708u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0017C770_0x17c770(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x187708u; }
        if (ctx->pc != 0x187708u) { return; }
    }
    ctx->pc = 0x187708u;
label_187708:
    // 0x187708: 0x8e030004  lw          $v1, 0x4($s0)
    ctx->pc = 0x187708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x18770c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x18770cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x187710: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x187710u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
    // 0x187714: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x187714u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x187718: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x187718u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x18771c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x18771cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x187720: 0x3e00008  jr          $ra
    ctx->pc = 0x187720u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x187724u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x187720u;
            // 0x187724: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x187728u;
}
