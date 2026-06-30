#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001D1B90
// Address: 0x1d1b90 - 0x1d1c20
void sub_001D1B90_0x1d1b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D1B90_0x1d1b90");
#endif

    switch (ctx->pc) {
        case 0x1d1bb8u: goto label_1d1bb8;
        case 0x1d1be0u: goto label_1d1be0;
        case 0x1d1bf8u: goto label_1d1bf8;
        case 0x1d1c10u: goto label_1d1c10;
        default: break;
    }

    ctx->pc = 0x1d1b90u;

    // 0x1d1b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1d1b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1d1b94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1d1b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1d1b98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1d1b98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1d1b9c: 0x848302f8  lh          $v1, 0x2F8($a0)
    ctx->pc = 0x1d1b9cu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 760)));
    // 0x1d1ba0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1d1ba0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d1ba4: 0x84820310  lh          $v0, 0x310($a0)
    ctx->pc = 0x1d1ba4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 784)));
    // 0x1d1ba8: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1d1ba8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d1bac: 0xa4850304  sh          $a1, 0x304($a0)
    ctx->pc = 0x1d1bacu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 772), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d1bb0: 0xc05d006  jal         func_174018
    ctx->pc = 0x1D1BB0u;
    SET_GPR_U32(ctx, 31, 0x1D1BB8u);
    ctx->pc = 0x1D1BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1BB0u;
            // 0x1d1bb4: 0x8c840184  lw          $a0, 0x184($a0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 388)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174018u;
    if (runtime->hasFunction(0x174018u)) {
        auto targetFn = runtime->lookupFunction(0x174018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1BB8u; }
        if (ctx->pc != 0x1D1BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174018_0x174018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1BB8u; }
        if (ctx->pc != 0x1D1BB8u) { return; }
    }
    ctx->pc = 0x1D1BB8u;
label_1d1bb8:
    // 0x1d1bb8: 0x920201b4  lbu         $v0, 0x1B4($s0)
    ctx->pc = 0x1d1bb8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 436)));
    // 0x1d1bbc: 0x28410002  slti        $at, $v0, 0x2
    ctx->pc = 0x1d1bbcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x1d1bc0: 0x54200008  bnel        $at, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1D1BC0u;
    {
        const bool branch_taken_0x1d1bc0 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d1bc0) {
            ctx->pc = 0x1D1BC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1BC0u;
            // 0x1d1bc4: 0x86030300  lh          $v1, 0x300($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 768)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1D1BE4u;
            goto label_1d1be4;
        }
    }
    ctx->pc = 0x1D1BC8u;
    // 0x1d1bc8: 0x860302fa  lh          $v1, 0x2FA($s0)
    ctx->pc = 0x1d1bc8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 762)));
    // 0x1d1bcc: 0x86020310  lh          $v0, 0x310($s0)
    ctx->pc = 0x1d1bccu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1d1bd0: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1d1bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d1bd4: 0xa6050306  sh          $a1, 0x306($s0)
    ctx->pc = 0x1d1bd4u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 774), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d1bd8: 0xc05d006  jal         func_174018
    ctx->pc = 0x1D1BD8u;
    SET_GPR_U32(ctx, 31, 0x1D1BE0u);
    ctx->pc = 0x1D1BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1BD8u;
            // 0x1d1bdc: 0x8e040188  lw          $a0, 0x188($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 392)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174018u;
    if (runtime->hasFunction(0x174018u)) {
        auto targetFn = runtime->lookupFunction(0x174018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1BE0u; }
        if (ctx->pc != 0x1D1BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174018_0x174018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1BE0u; }
        if (ctx->pc != 0x1D1BE0u) { return; }
    }
    ctx->pc = 0x1D1BE0u;
label_1d1be0:
    // 0x1d1be0: 0x86030300  lh          $v1, 0x300($s0)
    ctx->pc = 0x1d1be0u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 768)));
label_1d1be4:
    // 0x1d1be4: 0x86020310  lh          $v0, 0x310($s0)
    ctx->pc = 0x1d1be4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1d1be8: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1d1be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d1bec: 0xa605030c  sh          $a1, 0x30C($s0)
    ctx->pc = 0x1d1becu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 780), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d1bf0: 0xc05d006  jal         func_174018
    ctx->pc = 0x1D1BF0u;
    SET_GPR_U32(ctx, 31, 0x1D1BF8u);
    ctx->pc = 0x1D1BF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1BF0u;
            // 0x1d1bf4: 0x8e040194  lw          $a0, 0x194($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 404)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174018u;
    if (runtime->hasFunction(0x174018u)) {
        auto targetFn = runtime->lookupFunction(0x174018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1BF8u; }
        if (ctx->pc != 0x1D1BF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174018_0x174018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1BF8u; }
        if (ctx->pc != 0x1D1BF8u) { return; }
    }
    ctx->pc = 0x1D1BF8u;
label_1d1bf8:
    // 0x1d1bf8: 0x86030302  lh          $v1, 0x302($s0)
    ctx->pc = 0x1d1bf8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 770)));
    // 0x1d1bfc: 0x86020310  lh          $v0, 0x310($s0)
    ctx->pc = 0x1d1bfcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 784)));
    // 0x1d1c00: 0x622821  addu        $a1, $v1, $v0
    ctx->pc = 0x1d1c00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1d1c04: 0xa605030e  sh          $a1, 0x30E($s0)
    ctx->pc = 0x1d1c04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 782), (uint16_t)GPR_U32(ctx, 5));
    // 0x1d1c08: 0xc05d006  jal         func_174018
    ctx->pc = 0x1D1C08u;
    SET_GPR_U32(ctx, 31, 0x1D1C10u);
    ctx->pc = 0x1D1C0Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1C08u;
            // 0x1d1c0c: 0x8e040198  lw          $a0, 0x198($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x174018u;
    if (runtime->hasFunction(0x174018u)) {
        auto targetFn = runtime->lookupFunction(0x174018u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1C10u; }
        if (ctx->pc != 0x1D1C10u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00174018_0x174018(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1D1C10u; }
        if (ctx->pc != 0x1D1C10u) { return; }
    }
    ctx->pc = 0x1D1C10u;
label_1d1c10:
    // 0x1d1c10: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1d1c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d1c14: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1d1c14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d1c18: 0x3e00008  jr          $ra
    ctx->pc = 0x1D1C18u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D1C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1D1C18u;
            // 0x1d1c1c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1D1C20u;
}
