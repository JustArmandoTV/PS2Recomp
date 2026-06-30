#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00380950
// Address: 0x380950 - 0x380a90
void sub_00380950_0x380950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00380950_0x380950");
#endif

    switch (ctx->pc) {
        case 0x380964u: goto label_380964;
        default: break;
    }

    ctx->pc = 0x380950u;

    // 0x380950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x380950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x380954: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x380954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x380958: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x380958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x38095c: 0xc0e02a4  jal         func_380A90
    ctx->pc = 0x38095Cu;
    SET_GPR_U32(ctx, 31, 0x380964u);
    ctx->pc = 0x380960u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x38095Cu;
            // 0x380960: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x380A90u;
    if (runtime->hasFunction(0x380A90u)) {
        auto targetFn = runtime->lookupFunction(0x380A90u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380964u; }
        if (ctx->pc != 0x380964u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00380A90_0x380a90(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x380964u; }
        if (ctx->pc != 0x380964u) { return; }
    }
    ctx->pc = 0x380964u;
label_380964:
    // 0x380964: 0x8e040098  lw          $a0, 0x98($s0)
    ctx->pc = 0x380964u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
    // 0x380968: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x380968u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x38096c: 0x50830004  beql        $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x38096Cu;
    {
        const bool branch_taken_0x38096c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x38096c) {
            ctx->pc = 0x380970u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x38096Cu;
            // 0x380970: 0x8e0300a0  lw          $v1, 0xA0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x380980u;
            goto label_380980;
        }
    }
    ctx->pc = 0x380974u;
    // 0x380974: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x380974u;
    {
        const bool branch_taken_0x380974 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380978u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380974u;
            // 0x380978: 0x8e0400e0  lw          $a0, 0xE0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380974) {
            ctx->pc = 0x3809C0u;
            goto label_3809c0;
        }
    }
    ctx->pc = 0x38097Cu;
    // 0x38097c: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x38097cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
label_380980:
    // 0x380980: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x380980u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x380984: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x380984u;
    {
        const bool branch_taken_0x380984 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x380984) {
            ctx->pc = 0x380988u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x380984u;
            // 0x380988: 0x62082a  slt         $at, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x380998u;
            goto label_380998;
        }
    }
    ctx->pc = 0x38098Cu;
    // 0x38098c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x38098Cu;
    {
        const bool branch_taken_0x38098c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x38098Cu;
            // 0x380990: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x38098c) {
            ctx->pc = 0x3809B4u;
            goto label_3809b4;
        }
    }
    ctx->pc = 0x380994u;
    // 0x380994: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x380994u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_380998:
    // 0x380998: 0x50200037  beql        $at, $zero, . + 4 + (0x37 << 2)
    ctx->pc = 0x380998u;
    {
        const bool branch_taken_0x380998 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x380998) {
            ctx->pc = 0x38099Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x380998u;
            // 0x38099c: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x380A78u;
            goto label_380a78;
        }
    }
    ctx->pc = 0x3809A0u;
    // 0x3809a0: 0x246303e8  addiu       $v1, $v1, 0x3E8
    ctx->pc = 0x3809a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1000));
    // 0x3809a4: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x3809a4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3809a8: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x3809A8u;
    {
        const bool branch_taken_0x3809a8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x3809ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3809A8u;
            // 0x3809ac: 0xae0300a0  sw          $v1, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3809a8) {
            ctx->pc = 0x380A74u;
            goto label_380a74;
        }
    }
    ctx->pc = 0x3809B0u;
    // 0x3809b0: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x3809b0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_3809b4:
    // 0x3809b4: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x3809B4u;
    {
        const bool branch_taken_0x3809b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3809b4) {
            ctx->pc = 0x380A74u;
            goto label_380a74;
        }
    }
    ctx->pc = 0x3809BCu;
    // 0x3809bc: 0x8e0400e0  lw          $a0, 0xE0($s0)
    ctx->pc = 0x3809bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 224)));
label_3809c0:
    // 0x3809c0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x3809c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3809c4: 0x8c840cb4  lw          $a0, 0xCB4($a0)
    ctx->pc = 0x3809c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 3252)));
    // 0x3809c8: 0x54830012  bnel        $a0, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x3809C8u;
    {
        const bool branch_taken_0x3809c8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x3809c8) {
            ctx->pc = 0x3809CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3809C8u;
            // 0x3809cc: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x380A14u;
            goto label_380a14;
        }
    }
    ctx->pc = 0x3809D0u;
    // 0x3809d0: 0x8e0300a0  lw          $v1, 0xA0($s0)
    ctx->pc = 0x3809d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x3809d4: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x3809d4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x3809d8: 0x50200004  beql        $at, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3809D8u;
    {
        const bool branch_taken_0x3809d8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3809d8) {
            ctx->pc = 0x3809DCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3809D8u;
            // 0x3809dc: 0x62082a  slt         $at, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
            ctx->pc = 0x3809ECu;
            goto label_3809ec;
        }
    }
    ctx->pc = 0x3809E0u;
    // 0x3809e0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x3809E0u;
    {
        const bool branch_taken_0x3809e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3809E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3809E0u;
            // 0x3809e4: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3809e0) {
            ctx->pc = 0x380A14u;
            goto label_380a14;
        }
    }
    ctx->pc = 0x3809E8u;
    // 0x3809e8: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x3809e8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_3809ec:
    // 0x3809ec: 0x5020000a  beql        $at, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3809ECu;
    {
        const bool branch_taken_0x3809ec = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x3809ec) {
            ctx->pc = 0x3809F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3809ECu;
            // 0x3809f0: 0x8e040098  lw          $a0, 0x98($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x380A18u;
            goto label_380a18;
        }
    }
    ctx->pc = 0x3809F4u;
    // 0x3809f4: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3809f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x3809f8: 0xae0300bc  sw          $v1, 0xBC($s0)
    ctx->pc = 0x3809f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
    // 0x3809fc: 0x8e0400a0  lw          $a0, 0xA0($s0)
    ctx->pc = 0x3809fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x380a00: 0x8e0300b8  lw          $v1, 0xB8($s0)
    ctx->pc = 0x380a00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 184)));
    // 0x380a04: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x380a04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x380a08: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x380A08u;
    {
        const bool branch_taken_0x380a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380A0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380A08u;
            // 0x380a0c: 0xae0300a0  sw          $v1, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380a08) {
            ctx->pc = 0x380A14u;
            goto label_380a14;
        }
    }
    ctx->pc = 0x380A10u;
    // 0x380a10: 0xae0200a0  sw          $v0, 0xA0($s0)
    ctx->pc = 0x380a10u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
label_380a14:
    // 0x380a14: 0x8e040098  lw          $a0, 0x98($s0)
    ctx->pc = 0x380a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_380a18:
    // 0x380a18: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x380a18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x380a1c: 0x50830009  beql        $a0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x380A1Cu;
    {
        const bool branch_taken_0x380a1c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x380a1c) {
            ctx->pc = 0x380A20u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x380A1Cu;
            // 0x380a20: 0x3c033d88  lui         $v1, 0x3D88 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15752 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x380A44u;
            goto label_380a44;
        }
    }
    ctx->pc = 0x380A24u;
    // 0x380a24: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x380a24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x380a28: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x380A28u;
    {
        const bool branch_taken_0x380a28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x380a28) {
            ctx->pc = 0x380A40u;
            goto label_380a40;
        }
    }
    ctx->pc = 0x380A30u;
    // 0x380a30: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x380a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x380a34: 0xae0300bc  sw          $v1, 0xBC($s0)
    ctx->pc = 0x380a34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 188), GPR_U32(ctx, 3));
    // 0x380a38: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x380A38u;
    {
        const bool branch_taken_0x380a38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x380A3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380A38u;
            // 0x380a3c: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x380a38) {
            ctx->pc = 0x380A74u;
            goto label_380a74;
        }
    }
    ctx->pc = 0x380A40u;
label_380a40:
    // 0x380a40: 0x3c033d88  lui         $v1, 0x3D88
    ctx->pc = 0x380a40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15752 << 16));
label_380a44:
    // 0x380a44: 0x34648889  ori         $a0, $v1, 0x8889
    ctx->pc = 0x380a44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)34953);
    // 0x380a48: 0xc60100bc  lwc1        $f1, 0xBC($s0)
    ctx->pc = 0x380a48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x380a4c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x380a4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x380a50: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x380a50u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x380a54: 0x0  nop
    ctx->pc = 0x380a54u;
    // NOP
    // 0x380a58: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x380a58u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x380a5c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x380a5cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x380a60: 0x0  nop
    ctx->pc = 0x380a60u;
    // NOP
    // 0x380a64: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x380a64u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x380a68: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x380A68u;
    {
        const bool branch_taken_0x380a68 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x380A6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380A68u;
            // 0x380a6c: 0xe60100bc  swc1        $f1, 0xBC($s0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x380a68) {
            ctx->pc = 0x380A74u;
            goto label_380a74;
        }
    }
    ctx->pc = 0x380A70u;
    // 0x380a70: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x380a70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
label_380a74:
    // 0x380a74: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x380a74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_380a78:
    // 0x380a78: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x380a78u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x380a7c: 0x3e00008  jr          $ra
    ctx->pc = 0x380A7Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x380A80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x380A7Cu;
            // 0x380a80: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x380A84u;
    // 0x380a84: 0x0  nop
    ctx->pc = 0x380a84u;
    // NOP
    // 0x380a88: 0x0  nop
    ctx->pc = 0x380a88u;
    // NOP
    // 0x380a8c: 0x0  nop
    ctx->pc = 0x380a8cu;
    // NOP
}
