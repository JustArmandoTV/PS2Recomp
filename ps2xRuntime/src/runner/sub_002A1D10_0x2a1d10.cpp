#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A1D10
// Address: 0x2a1d10 - 0x2a1ea0
void sub_002A1D10_0x2a1d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A1D10_0x2a1d10");
#endif

    switch (ctx->pc) {
        case 0x2a1d84u: goto label_2a1d84;
        case 0x2a1d94u: goto label_2a1d94;
        case 0x2a1e74u: goto label_2a1e74;
        case 0x2a1e7cu: goto label_2a1e7c;
        case 0x2a1e84u: goto label_2a1e84;
        default: break;
    }

    ctx->pc = 0x2a1d10u;

    // 0x2a1d10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2a1d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2a1d14: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x2a1d14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x2a1d18: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2a1d18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2a1d1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2a1d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2a1d20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2a1d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2a1d24: 0xdc421000  ld          $v0, 0x1000($v0)
    ctx->pc = 0x2a1d24u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 2), 4096)));
    // 0x2a1d28: 0x2137a  dsrl        $v0, $v0, 13
    ctx->pc = 0x2a1d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 13);
    // 0x2a1d2c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a1d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a1d30: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2a1d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2a1d34: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2a1d34u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2a1d38: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x2a1d38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2a1d3c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a1d3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2a1d40: 0xa082004c  sb          $v0, 0x4C($a0)
    ctx->pc = 0x2a1d40u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 76), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a1d44: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x2a1d44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x2a1d48: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x2a1d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x2a1d4c: 0xac820014  sw          $v0, 0x14($a0)
    ctx->pc = 0x2a1d4cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 2));
    // 0x2a1d50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2a1d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2a1d54: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2A1D54u;
    {
        const bool branch_taken_0x2a1d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1D58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1D54u;
            // 0x2a1d58: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1d54) {
            ctx->pc = 0x2A1D6Cu;
            goto label_2a1d6c;
        }
    }
    ctx->pc = 0x2A1D5Cu;
    // 0x2a1d5c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a1d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2a1d60: 0x9442eb70  lhu         $v0, -0x1490($v0)
    ctx->pc = 0x2a1d60u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962032)));
    // 0x2a1d64: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2A1D64u;
    {
        const bool branch_taken_0x2a1d64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1D68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1D64u;
            // 0x2a1d68: 0x304201ff  andi        $v0, $v0, 0x1FF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1d64) {
            ctx->pc = 0x2A1D78u;
            goto label_2a1d78;
        }
    }
    ctx->pc = 0x2A1D6Cu;
label_2a1d6c:
    // 0x2a1d6c: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2a1d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x2a1d70: 0x9442ece0  lhu         $v0, -0x1320($v0)
    ctx->pc = 0x2a1d70u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962400)));
    // 0x2a1d74: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x2a1d74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
label_2a1d78:
    // 0x2a1d78: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x2a1d78u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x2a1d7c: 0xc043178  jal         func_10C5E0
    ctx->pc = 0x2A1D7Cu;
    SET_GPR_U32(ctx, 31, 0x2A1D84u);
    ctx->pc = 0x2A1D80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1D7Cu;
            // 0x2a1d80: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10C5E0u;
    if (runtime->hasFunction(0x10C5E0u)) {
        auto targetFn = runtime->lookupFunction(0x10C5E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1D84u; }
        if (ctx->pc != 0x2A1D84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010C5E0_0x10c5e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1D84u; }
        if (ctx->pc != 0x2A1D84u) { return; }
    }
    ctx->pc = 0x2A1D84u;
label_2a1d84:
    // 0x2a1d84: 0x8e050014  lw          $a1, 0x14($s0)
    ctx->pc = 0x2a1d84u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2a1d88: 0x3c04006f  lui         $a0, 0x6F
    ctx->pc = 0x2a1d88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)111 << 16));
    // 0x2a1d8c: 0xc040e30  jal         func_1038C0
    ctx->pc = 0x2A1D8Cu;
    SET_GPR_U32(ctx, 31, 0x2A1D94u);
    ctx->pc = 0x2A1D90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1D8Cu;
            // 0x2a1d90: 0x2484eb10  addiu       $a0, $a0, -0x14F0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1038C0u;
    if (runtime->hasFunction(0x1038C0u)) {
        auto targetFn = runtime->lookupFunction(0x1038C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1D94u; }
        if (ctx->pc != 0x2A1D94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001038C0_0x1038c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1D94u; }
        if (ctx->pc != 0x2A1D94u) { return; }
    }
    ctx->pc = 0x2A1D94u;
label_2a1d94:
    // 0x2a1d94: 0x92020028  lbu         $v0, 0x28($s0)
    ctx->pc = 0x2a1d94u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x2a1d98: 0x54400024  bnel        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x2A1D98u;
    {
        const bool branch_taken_0x2a1d98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2a1d98) {
            ctx->pc = 0x2A1D9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1D98u;
            // 0x2a1d9c: 0x11203c  dsll32      $a0, $s1, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A1E2Cu;
            goto label_2a1e2c;
        }
    }
    ctx->pc = 0x2A1DA0u;
    // 0x2a1da0: 0x11203c  dsll32      $a0, $s1, 0
    ctx->pc = 0x2a1da0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) << (32 + 0));
    // 0x2a1da4: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2a1da4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2a1da8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2a1da8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2a1dac: 0x34631400  ori         $v1, $v1, 0x1400
    ctx->pc = 0x2a1dacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5120);
    // 0x2a1db0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2a1db0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a1db4: 0x24057f23  addiu       $a1, $zero, 0x7F23
    ctx->pc = 0x2a1db4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32547));
    // 0x2a1db8: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x2a1db8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x2a1dbc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x2a1dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a1dc0: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x2a1dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x2a1dc4: 0xfc440090  sd          $a0, 0x90($v0)
    ctx->pc = 0x2a1dc4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 144), GPR_U64(ctx, 4));
    // 0x2a1dc8: 0xfc440070  sd          $a0, 0x70($v0)
    ctx->pc = 0x2a1dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 112), GPR_U64(ctx, 4));
    // 0x2a1dcc: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x2a1dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2a1dd0: 0x5483000c  bnel        $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2A1DD0u;
    {
        const bool branch_taken_0x2a1dd0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x2a1dd0) {
            ctx->pc = 0x2A1DD4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1DD0u;
            // 0x2a1dd4: 0x3c04001b  lui         $a0, 0x1B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2A1E04u;
            goto label_2a1e04;
        }
    }
    ctx->pc = 0x2A1DD8u;
    // 0x2a1dd8: 0x3c04001f  lui         $a0, 0x1F
    ctx->pc = 0x2a1dd8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)31 << 16));
    // 0x2a1ddc: 0x3c030184  lui         $v1, 0x184
    ctx->pc = 0x2a1ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)388 << 16));
    // 0x2a1de0: 0x3485f9ff  ori         $a1, $a0, 0xF9FF
    ctx->pc = 0x2a1de0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63999);
    // 0x2a1de4: 0x34648290  ori         $a0, $v1, 0x8290
    ctx->pc = 0x2a1de4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)33424);
    // 0x2a1de8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2a1de8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2a1dec: 0x34639290  ori         $v1, $v1, 0x9290
    ctx->pc = 0x2a1decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)37520);
    // 0x2a1df0: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2a1df0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2a1df4: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2a1df4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2a1df8: 0xfc4400a0  sd          $a0, 0xA0($v0)
    ctx->pc = 0x2a1df8u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 160), GPR_U64(ctx, 4));
    // 0x2a1dfc: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x2A1DFCu;
    {
        const bool branch_taken_0x2a1dfc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1E00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1DFCu;
            // 0x2a1e00: 0xfc430080  sd          $v1, 0x80($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 128), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1dfc) {
            ctx->pc = 0x2A1E68u;
            goto label_2a1e68;
        }
    }
    ctx->pc = 0x2A1E04u;
label_2a1e04:
    // 0x2a1e04: 0x3c030183  lui         $v1, 0x183
    ctx->pc = 0x2a1e04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)387 << 16));
    // 0x2a1e08: 0x3485f9ff  ori         $a1, $a0, 0xF9FF
    ctx->pc = 0x2a1e08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)63999);
    // 0x2a1e0c: 0x3464227c  ori         $a0, $v1, 0x227C
    ctx->pc = 0x2a1e0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8828);
    // 0x2a1e10: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x2a1e10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x2a1e14: 0x3463327c  ori         $v1, $v1, 0x327C
    ctx->pc = 0x2a1e14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)12924);
    // 0x2a1e18: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x2a1e18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x2a1e1c: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x2a1e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x2a1e20: 0xfc4400a0  sd          $a0, 0xA0($v0)
    ctx->pc = 0x2a1e20u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 160), GPR_U64(ctx, 4));
    // 0x2a1e24: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2A1E24u;
    {
        const bool branch_taken_0x2a1e24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A1E28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1E24u;
            // 0x2a1e28: 0xfc430080  sd          $v1, 0x80($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 128), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a1e24) {
            ctx->pc = 0x2A1E68u;
            goto label_2a1e68;
        }
    }
    ctx->pc = 0x2A1E2Cu;
label_2a1e2c:
    // 0x2a1e2c: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2a1e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2a1e30: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x2a1e30u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x2a1e34: 0x34631400  ori         $v1, $v1, 0x1400
    ctx->pc = 0x2a1e34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)5120);
    // 0x2a1e38: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x2a1e38u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x2a1e3c: 0x3405ffa1  ori         $a1, $zero, 0xFFA1
    ctx->pc = 0x2a1e3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65441);
    // 0x2a1e40: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x2a1e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x2a1e44: 0x3c03001b  lui         $v1, 0x1B
    ctx->pc = 0x2a1e44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27 << 16));
    // 0x2a1e48: 0xfc450000  sd          $a1, 0x0($v0)
    ctx->pc = 0x2a1e48u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 0), GPR_U64(ctx, 5));
    // 0x2a1e4c: 0x3463f4ff  ori         $v1, $v1, 0xF4FF
    ctx->pc = 0x2a1e4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62719);
    // 0x2a1e50: 0xfc440070  sd          $a0, 0x70($v0)
    ctx->pc = 0x2a1e50u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 112), GPR_U64(ctx, 4));
    // 0x2a1e54: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x2a1e54u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x2a1e58: 0x3c030083  lui         $v1, 0x83
    ctx->pc = 0x2a1e58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)131 << 16));
    // 0x2a1e5c: 0x34632138  ori         $v1, $v1, 0x2138
    ctx->pc = 0x2a1e5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8504);
    // 0x2a1e60: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x2a1e60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x2a1e64: 0xfc430080  sd          $v1, 0x80($v0)
    ctx->pc = 0x2a1e64u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 128), GPR_U64(ctx, 3));
label_2a1e68:
    // 0x2a1e68: 0x3c021200  lui         $v0, 0x1200
    ctx->pc = 0x2a1e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4608 << 16));
    // 0x2a1e6c: 0xc04fc64  jal         func_13F190
    ctx->pc = 0x2A1E6Cu;
    SET_GPR_U32(ctx, 31, 0x2A1E74u);
    ctx->pc = 0x2A1E70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1E6Cu;
            // 0x2a1e70: 0xfc4000d0  sd          $zero, 0xD0($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 208), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13F190u;
    if (runtime->hasFunction(0x13F190u)) {
        auto targetFn = runtime->lookupFunction(0x13F190u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1E74u; }
        if (ctx->pc != 0x2A1E74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013F190_0x13f190(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1E74u; }
        if (ctx->pc != 0x2A1E74u) { return; }
    }
    ctx->pc = 0x2A1E74u;
label_2a1e74:
    // 0x2a1e74: 0xc056af8  jal         func_15ABE0
    ctx->pc = 0x2A1E74u;
    SET_GPR_U32(ctx, 31, 0x2A1E7Cu);
    ctx->pc = 0x2A1E78u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1E74u;
            // 0x2a1e78: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15ABE0u;
    if (runtime->hasFunction(0x15ABE0u)) {
        auto targetFn = runtime->lookupFunction(0x15ABE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1E7Cu; }
        if (ctx->pc != 0x2A1E7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015ABE0_0x15abe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1E7Cu; }
        if (ctx->pc != 0x2A1E7Cu) { return; }
    }
    ctx->pc = 0x2A1E7Cu;
label_2a1e7c:
    // 0x2a1e7c: 0xc057520  jal         func_15D480
    ctx->pc = 0x2A1E7Cu;
    SET_GPR_U32(ctx, 31, 0x2A1E84u);
    ctx->pc = 0x2A1E80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1E7Cu;
            // 0x2a1e80: 0x8e040038  lw          $a0, 0x38($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 56)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D480u;
    if (runtime->hasFunction(0x15D480u)) {
        auto targetFn = runtime->lookupFunction(0x15D480u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1E84u; }
        if (ctx->pc != 0x2A1E84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D480_0x15d480(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A1E84u; }
        if (ctx->pc != 0x2A1E84u) { return; }
    }
    ctx->pc = 0x2A1E84u;
label_2a1e84:
    // 0x2a1e84: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2a1e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a1e88: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2a1e88u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a1e8c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2a1e8cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2a1e90: 0x3e00008  jr          $ra
    ctx->pc = 0x2A1E90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A1E94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A1E90u;
            // 0x2a1e94: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A1E98u;
    // 0x2a1e98: 0x0  nop
    ctx->pc = 0x2a1e98u;
    // NOP
    // 0x2a1e9c: 0x0  nop
    ctx->pc = 0x2a1e9cu;
    // NOP
}
