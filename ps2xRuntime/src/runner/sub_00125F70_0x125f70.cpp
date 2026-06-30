#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00125F70
// Address: 0x125f70 - 0x125fc8
void sub_00125F70_0x125f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00125F70_0x125f70");
#endif

    switch (ctx->pc) {
        case 0x125f8cu: goto label_125f8c;
        case 0x125fbcu: goto label_125fbc;
        default: break;
    }

    ctx->pc = 0x125f70u;

    // 0x125f70: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x125f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x125f74: 0x80782d  daddu       $t7, $a0, $zero
    ctx->pc = 0x125f74u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f78: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x125f78u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x125f7c: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x125f7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x125f80: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x125f80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x125f84: 0xc04955a  jal         func_125568
    ctx->pc = 0x125F84u;
    SET_GPR_U32(ctx, 31, 0x125F8Cu);
    ctx->pc = 0x125F88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125F84u;
            // 0x125f88: 0xffaf0020  sd          $t7, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 15));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125568u;
    if (runtime->hasFunction(0x125568u)) {
        auto targetFn = runtime->lookupFunction(0x125568u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125F8Cu; }
        if (ctx->pc != 0x125F8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125568_0x125568(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125F8Cu; }
        if (ctx->pc != 0x125F8Cu) { return; }
    }
    ctx->pc = 0x125F8Cu;
label_125f8c:
    // 0x125f8c: 0xdfae0010  ld          $t6, 0x10($sp)
    ctx->pc = 0x125f8cu;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x125f90: 0x3c0f3fff  lui         $t7, 0x3FFF
    ctx->pc = 0x125f90u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)16383 << 16));
    // 0x125f94: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x125f94u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x125f98: 0xe38b8  dsll        $a3, $t6, 2
    ctx->pc = 0x125f98u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 14) << 2);
    // 0x125f9c: 0x35efffff  ori         $t7, $t7, 0xFFFF
    ctx->pc = 0x125f9cu;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | (uint64_t)(uint16_t)65535);
    // 0x125fa0: 0x7383f  dsra32      $a3, $a3, 0
    ctx->pc = 0x125fa0u;
    SET_GPR_S64(ctx, 7, GPR_S64(ctx, 7) >> (32 + 0));
    // 0x125fa4: 0x1cf7024  and         $t6, $t6, $t7
    ctx->pc = 0x125fa4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 15));
    // 0x125fa8: 0x34ed0001  ori         $t5, $a3, 0x1
    ctx->pc = 0x125fa8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)1);
    // 0x125fac: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x125facu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x125fb0: 0x8fa50004  lw          $a1, 0x4($sp)
    ctx->pc = 0x125fb0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x125fb4: 0xc049508  jal         func_125420
    ctx->pc = 0x125FB4u;
    SET_GPR_U32(ctx, 31, 0x125FBCu);
    ctx->pc = 0x125FB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x125FB4u;
            // 0x125fb8: 0x1ae380b  movn        $a3, $t5, $t6 (Delay Slot)
        if (GPR_U64(ctx, 14) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 13));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125420u;
    if (runtime->hasFunction(0x125420u)) {
        auto targetFn = runtime->lookupFunction(0x125420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125FBCu; }
        if (ctx->pc != 0x125FBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125420_0x125420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x125FBCu; }
        if (ctx->pc != 0x125FBCu) { return; }
    }
    ctx->pc = 0x125FBCu;
label_125fbc:
    // 0x125fbc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x125fbcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x125fc0: 0x3e00008  jr          $ra
    ctx->pc = 0x125FC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x125FC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x125FC0u;
            // 0x125fc4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x125FC8u;
}
