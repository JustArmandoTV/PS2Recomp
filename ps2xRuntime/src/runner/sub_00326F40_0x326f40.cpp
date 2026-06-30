#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00326F40
// Address: 0x326f40 - 0x327010
void sub_00326F40_0x326f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00326F40_0x326f40");
#endif

    switch (ctx->pc) {
        case 0x326fecu: goto label_326fec;
        default: break;
    }

    ctx->pc = 0x326f40u;

    // 0x326f40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x326f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x326f44: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x326f44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x326f48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x326f48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x326f4c: 0x2ca1000b  sltiu       $at, $a1, 0xB
    ctx->pc = 0x326f4cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x326f50: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x326f50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x326f54: 0x8c6789c8  lw          $a3, -0x7638($v1)
    ctx->pc = 0x326f54u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937032)));
    // 0x326f58: 0x10200027  beqz        $at, . + 4 + (0x27 << 2)
    ctx->pc = 0x326F58u;
    {
        const bool branch_taken_0x326f58 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x326F5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x326F58u;
            // 0x326f5c: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326f58) {
            ctx->pc = 0x326FF8u;
            goto label_326ff8;
        }
    }
    ctx->pc = 0x326F60u;
    // 0x326f60: 0x3c060065  lui         $a2, 0x65
    ctx->pc = 0x326f60u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)101 << 16));
    // 0x326f64: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x326f64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x326f68: 0x24c6ce10  addiu       $a2, $a2, -0x31F0
    ctx->pc = 0x326f68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294954512));
    // 0x326f6c: 0x661821  addu        $v1, $v1, $a2
    ctx->pc = 0x326f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x326f70: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x326f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x326f74: 0x600008  jr          $v1
    ctx->pc = 0x326F74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 3);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x326F7Cu: goto label_326f7c;
            case 0x326FA4u: goto label_326fa4;
            default: break;
        }
        return;
    }
    ctx->pc = 0x326F7Cu;
label_326f7c:
    // 0x326f7c: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x326f7cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x326f80: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x326f80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x326f84: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x326f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x326f88: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x326f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x326f8c: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x326f8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x326f90: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x326f90u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x326f94: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x326f94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x326f98: 0xac6201c8  sw          $v0, 0x1C8($v1)
    ctx->pc = 0x326f98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 456), GPR_U32(ctx, 2));
    // 0x326f9c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x326F9Cu;
    {
        const bool branch_taken_0x326f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326FA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x326F9Cu;
            // 0x326fa0: 0x24620164  addiu       $v0, $v1, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 356));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326f9c) {
            ctx->pc = 0x326FD4u;
            goto label_326fd4;
        }
    }
    ctx->pc = 0x326FA4u;
label_326fa4:
    // 0x326fa4: 0x51840  sll         $v1, $a1, 1
    ctx->pc = 0x326fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x326fa8: 0x8ce20008  lw          $v0, 0x8($a3)
    ctx->pc = 0x326fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 8)));
    // 0x326fac: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x326facu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x326fb0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x326fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x326fb4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x326fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x326fb8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x326fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x326fbc: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x326fbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x326fc0: 0xac6201c8  sw          $v0, 0x1C8($v1)
    ctx->pc = 0x326fc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 456), GPR_U32(ctx, 2));
    // 0x326fc4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x326FC4u;
    {
        const bool branch_taken_0x326fc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326FC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x326FC4u;
            // 0x326fc8: 0x24620164  addiu       $v0, $v1, 0x164 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 356));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326fc4) {
            ctx->pc = 0x326FD4u;
            goto label_326fd4;
        }
    }
    ctx->pc = 0x326FCCu;
    // 0x326fcc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x326FCCu;
    {
        const bool branch_taken_0x326fcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x326FD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x326FCCu;
            // 0x326fd0: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x326fcc) {
            ctx->pc = 0x326FFCu;
            goto label_326ffc;
        }
    }
    ctx->pc = 0x326FD4u;
label_326fd4:
    // 0x326fd4: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x326fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x326fd8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x326fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x326fdc: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x326fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x326fe0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x326fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x326fe4: 0xc1266b4  jal         func_499AD0
    ctx->pc = 0x326FE4u;
    SET_GPR_U32(ctx, 31, 0x326FECu);
    ctx->pc = 0x326FE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x326FE4u;
            // 0x326fe8: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x499AD0u;
    if (runtime->hasFunction(0x499AD0u)) {
        auto targetFn = runtime->lookupFunction(0x499AD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326FECu; }
        if (ctx->pc != 0x326FECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00499AD0_0x499ad0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x326FECu; }
        if (ctx->pc != 0x326FECu) { return; }
    }
    ctx->pc = 0x326FECu;
label_326fec:
    // 0x326fec: 0x8e030020  lw          $v1, 0x20($s0)
    ctx->pc = 0x326fecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x326ff0: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x326ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x326ff4: 0xae030020  sw          $v1, 0x20($s0)
    ctx->pc = 0x326ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 3));
label_326ff8:
    // 0x326ff8: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x326ff8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_326ffc:
    // 0x326ffc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x326ffcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x327000: 0x3e00008  jr          $ra
    ctx->pc = 0x327000u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x327004u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x327000u;
            // 0x327004: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x327008u;
    // 0x327008: 0x0  nop
    ctx->pc = 0x327008u;
    // NOP
    // 0x32700c: 0x0  nop
    ctx->pc = 0x32700cu;
    // NOP
}
