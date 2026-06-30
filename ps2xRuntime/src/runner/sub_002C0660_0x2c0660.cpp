#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002C0660
// Address: 0x2c0660 - 0x2c0790
void sub_002C0660_0x2c0660(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C0660_0x2c0660");
#endif

    switch (ctx->pc) {
        case 0x2c06ccu: goto label_2c06cc;
        case 0x2c0730u: goto label_2c0730;
        case 0x2c0738u: goto label_2c0738;
        default: break;
    }

    ctx->pc = 0x2c0660u;

    // 0x2c0660: 0x80788fc  j           func_1E23F0
    ctx->pc = 0x2C0660u;
    ctx->pc = 0x1E23F0u;
    if (runtime->hasFunction(0x1E23F0u)) {
        auto targetFn = runtime->lookupFunction(0x1E23F0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001E23F0_0x1e23f0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2C0668u;
    // 0x2c0668: 0x0  nop
    ctx->pc = 0x2c0668u;
    // NOP
    // 0x2c066c: 0x0  nop
    ctx->pc = 0x2c066cu;
    // NOP
    // 0x2c0670: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c0670u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c0674: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c0674u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c0678: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c0678u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c067c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c067cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0680: 0x52000013  beql        $s0, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x2C0680u;
    {
        const bool branch_taken_0x2c0680 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c0680) {
            ctx->pc = 0x2C0684u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0680u;
            // 0x2c0684: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2C06D0u;
            goto label_2c06d0;
        }
    }
    ctx->pc = 0x2C0688u;
    // 0x2c0688: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2c0688u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2c068c: 0x2442a8c0  addiu       $v0, $v0, -0x5740
    ctx->pc = 0x2c068cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944960));
    // 0x2c0690: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2C0690u;
    {
        const bool branch_taken_0x2c0690 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C0694u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0690u;
            // 0x2c0694: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c0690) {
            ctx->pc = 0x2C06B4u;
            goto label_2c06b4;
        }
    }
    ctx->pc = 0x2C0698u;
    // 0x2c0698: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c0698u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c069c: 0x24422620  addiu       $v0, $v0, 0x2620
    ctx->pc = 0x2c069cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 9760));
    // 0x2c06a0: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2C06A0u;
    {
        const bool branch_taken_0x2c06a0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2C06A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C06A0u;
            // 0x2c06a4: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2c06a0) {
            ctx->pc = 0x2C06B4u;
            goto label_2c06b4;
        }
    }
    ctx->pc = 0x2C06A8u;
    // 0x2c06a8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c06a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c06ac: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c06acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x2c06b0: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x2c06b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
label_2c06b4:
    // 0x2c06b4: 0x5143c  dsll32      $v0, $a1, 16
    ctx->pc = 0x2c06b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 16));
    // 0x2c06b8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2c06b8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2c06bc: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2C06BCu;
    {
        const bool branch_taken_0x2c06bc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2c06bc) {
            ctx->pc = 0x2C06CCu;
            goto label_2c06cc;
        }
    }
    ctx->pc = 0x2C06C4u;
    // 0x2c06c4: 0xc0400a8  jal         func_1002A0
    ctx->pc = 0x2C06C4u;
    SET_GPR_U32(ctx, 31, 0x2C06CCu);
    ctx->pc = 0x2C06C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C06C4u;
            // 0x2c06c8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C06CCu; }
        if (ctx->pc != 0x2C06CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C06CCu; }
        if (ctx->pc != 0x2C06CCu) { return; }
    }
    ctx->pc = 0x2C06CCu;
label_2c06cc:
    // 0x2c06cc: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c06ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_2c06d0:
    // 0x2c06d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c06d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c06d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c06d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c06d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2C06D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C06DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C06D8u;
            // 0x2c06dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C06E0u;
    // 0x2c06e0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2c06e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2c06e4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2c06e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x2c06e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2c06e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x2c06ec: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x2c06ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2c06f0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c06f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c06f4: 0x2442cfe0  addiu       $v0, $v0, -0x3020
    ctx->pc = 0x2c06f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954976));
    // 0x2c06f8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x2c06f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x2c06fc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x2c06fcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x2c0700: 0x24632620  addiu       $v1, $v1, 0x2620
    ctx->pc = 0x2c0700u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 9760));
    // 0x2c0704: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2c0704u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2c0708: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x2c0708u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x2c070c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2c070cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0710: 0xac80003c  sw          $zero, 0x3C($a0)
    ctx->pc = 0x2c0710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 60), GPR_U32(ctx, 0));
    // 0x2c0714: 0x46006346  mov.s       $f13, $f12
    ctx->pc = 0x2c0714u;
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    // 0x2c0718: 0xac800048  sw          $zero, 0x48($a0)
    ctx->pc = 0x2c0718u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 72), GPR_U32(ctx, 0));
    // 0x2c071c: 0x46006386  mov.s       $f14, $f12
    ctx->pc = 0x2c071cu;
    ctx->f[14] = FPU_MOV_S(ctx->f[12]);
    // 0x2c0720: 0xa080004d  sb          $zero, 0x4D($a0)
    ctx->pc = 0x2c0720u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 77), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c0724: 0xa082004e  sb          $v0, 0x4E($a0)
    ctx->pc = 0x2c0724u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 78), (uint8_t)GPR_U32(ctx, 2));
    // 0x2c0728: 0xc04cbd8  jal         func_132F60
    ctx->pc = 0x2C0728u;
    SET_GPR_U32(ctx, 31, 0x2C0730u);
    ctx->pc = 0x2C072Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0728u;
            // 0x2c072c: 0x26040010  addiu       $a0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x132F60u;
    if (runtime->hasFunction(0x132F60u)) {
        auto targetFn = runtime->lookupFunction(0x132F60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0730u; }
        if (ctx->pc != 0x2C0730u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00132F60_0x132f60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0730u; }
        if (ctx->pc != 0x2C0730u) { return; }
    }
    ctx->pc = 0x2C0730u;
label_2c0730:
    // 0x2c0730: 0xc04c968  jal         func_1325A0
    ctx->pc = 0x2C0730u;
    SET_GPR_U32(ctx, 31, 0x2C0738u);
    ctx->pc = 0x2C0734u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2C0730u;
            // 0x2c0734: 0x26040020  addiu       $a0, $s0, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1325A0u;
    if (runtime->hasFunction(0x1325A0u)) {
        auto targetFn = runtime->lookupFunction(0x1325A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0738u; }
        if (ctx->pc != 0x2C0738u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001325A0_0x1325a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2C0738u; }
        if (ctx->pc != 0x2C0738u) { return; }
    }
    ctx->pc = 0x2C0738u;
label_2c0738:
    // 0x2c0738: 0x3c0200af  lui         $v0, 0xAF
    ctx->pc = 0x2c0738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)175 << 16));
    // 0x2c073c: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2c073cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
    // 0x2c0740: 0x8c450e80  lw          $a1, 0xE80($v0)
    ctx->pc = 0x2c0740u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 3712)));
    // 0x2c0744: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x2c0744u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x2c0748: 0x2484c560  addiu       $a0, $a0, -0x3AA0
    ctx->pc = 0x2c0748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952288));
    // 0x2c074c: 0x2463a8c0  addiu       $v1, $v1, -0x5740
    ctx->pc = 0x2c074cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944960));
    // 0x2c0750: 0x8ca50788  lw          $a1, 0x788($a1)
    ctx->pc = 0x2c0750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 1928)));
    // 0x2c0754: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x2c0754u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c0758: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x2c0758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x2c075c: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x2c075cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x2c0760: 0xa204004d  sb          $a0, 0x4D($s0)
    ctx->pc = 0x2c0760u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 77), (uint8_t)GPR_U32(ctx, 4));
    // 0x2c0764: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x2c0764u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x2c0768: 0xae000050  sw          $zero, 0x50($s0)
    ctx->pc = 0x2c0768u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 0));
    // 0x2c076c: 0xae000054  sw          $zero, 0x54($s0)
    ctx->pc = 0x2c076cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 0));
    // 0x2c0770: 0xa2000070  sb          $zero, 0x70($s0)
    ctx->pc = 0x2c0770u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 112), (uint8_t)GPR_U32(ctx, 0));
    // 0x2c0774: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2c0774u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c0778: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c0778u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c077c: 0x3e00008  jr          $ra
    ctx->pc = 0x2C077Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2C0780u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2C077Cu;
            // 0x2c0780: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2C0784u;
    // 0x2c0784: 0x0  nop
    ctx->pc = 0x2c0784u;
    // NOP
    // 0x2c0788: 0x0  nop
    ctx->pc = 0x2c0788u;
    // NOP
    // 0x2c078c: 0x0  nop
    ctx->pc = 0x2c078cu;
    // NOP
}
