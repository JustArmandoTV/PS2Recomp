#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00209EB0
// Address: 0x209eb0 - 0x20a460
void sub_00209EB0_0x209eb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00209EB0_0x209eb0");
#endif

    switch (ctx->pc) {
        case 0x209fbcu: goto label_209fbc;
        case 0x20a058u: goto label_20a058;
        default: break;
    }

    ctx->pc = 0x209eb0u;

    // 0x209eb0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x209eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x209eb4: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x209eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x209eb8: 0x2442d420  addiu       $v0, $v0, -0x2BE0
    ctx->pc = 0x209eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956064));
    // 0x209ebc: 0x2463db60  addiu       $v1, $v1, -0x24A0
    ctx->pc = 0x209ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957920));
    // 0x209ec0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x209ec0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x209ec4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x209ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x209ec8: 0x2442d430  addiu       $v0, $v0, -0x2BD0
    ctx->pc = 0x209ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956080));
    // 0x209ecc: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x209eccu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x209ed0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x209ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x209ed4: 0xa4820006  sh          $v0, 0x6($a0)
    ctx->pc = 0x209ed4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 6), (uint16_t)GPR_U32(ctx, 2));
    // 0x209ed8: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x209ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x209edc: 0x2442e370  addiu       $v0, $v0, -0x1C90
    ctx->pc = 0x209edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959984));
    // 0x209ee0: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x209ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x209ee4: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x209ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x209ee8: 0xac800008  sw          $zero, 0x8($a0)
    ctx->pc = 0x209ee8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 0));
    // 0x209eec: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x209eecu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x209ef0: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x209ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x209ef4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x209ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x209ef8: 0x2442e1e0  addiu       $v0, $v0, -0x1E20
    ctx->pc = 0x209ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959584));
    // 0x209efc: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x209efcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x209f00: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x209f00u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x209f04: 0x2463e580  addiu       $v1, $v1, -0x1A80
    ctx->pc = 0x209f04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960512));
    // 0x209f08: 0xe48c0010  swc1        $f12, 0x10($a0)
    ctx->pc = 0x209f08u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x209f0c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x209f0cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209f10: 0x3e00008  jr          $ra
    ctx->pc = 0x209F10u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209F14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209F10u;
            // 0x209f14: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x209F18u;
    // 0x209f18: 0x0  nop
    ctx->pc = 0x209f18u;
    // NOP
    // 0x209f1c: 0x0  nop
    ctx->pc = 0x209f1cu;
    // NOP
    // 0x209f20: 0xacc0000c  sw          $zero, 0xC($a2)
    ctx->pc = 0x209f20u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 12), GPR_U32(ctx, 0));
    // 0x209f24: 0xacc00008  sw          $zero, 0x8($a2)
    ctx->pc = 0x209f24u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 0));
    // 0x209f28: 0xacc00004  sw          $zero, 0x4($a2)
    ctx->pc = 0x209f28u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 0));
    // 0x209f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x209F2Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x209F30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209F2Cu;
            // 0x209f30: 0xacc00000  sw          $zero, 0x0($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x209F34u;
    // 0x209f34: 0x0  nop
    ctx->pc = 0x209f34u;
    // NOP
    // 0x209f38: 0x0  nop
    ctx->pc = 0x209f38u;
    // NOP
    // 0x209f3c: 0x0  nop
    ctx->pc = 0x209f3cu;
    // NOP
    // 0x209f40: 0x24c9ffff  addiu       $t1, $a2, -0x1
    ctx->pc = 0x209f40u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x209f44: 0x520004c  bltz        $t1, . + 4 + (0x4C << 2)
    ctx->pc = 0x209F44u;
    {
        const bool branch_taken_0x209f44 = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x209f44) {
            ctx->pc = 0x20A078u;
            goto label_20a078;
        }
    }
    ctx->pc = 0x209F4Cu;
    // 0x209f4c: 0x28c10009  slti        $at, $a2, 0x9
    ctx->pc = 0x209f4cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x209f50: 0x1420003f  bnez        $at, . + 4 + (0x3F << 2)
    ctx->pc = 0x209F50u;
    {
        const bool branch_taken_0x209f50 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x209f50) {
            ctx->pc = 0x20A050u;
            goto label_20a050;
        }
    }
    ctx->pc = 0x209F58u;
    // 0x209f58: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x209f58u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x209f5c: 0x5200007  bltz        $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x209F5Cu;
    {
        const bool branch_taken_0x209f5c = (GPR_S32(ctx, 9) < 0);
        ctx->pc = 0x209F60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209F5Cu;
            // 0x209f60: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x209f5c) {
            ctx->pc = 0x209F7Cu;
            goto label_209f7c;
        }
    }
    ctx->pc = 0x209F64u;
    // 0x209f64: 0x3c038000  lui         $v1, 0x8000
    ctx->pc = 0x209f64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)32768 << 16));
    // 0x209f68: 0x34630001  ori         $v1, $v1, 0x1
    ctx->pc = 0x209f68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
    // 0x209f6c: 0x123182a  slt         $v1, $t1, $v1
    ctx->pc = 0x209f6cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x209f70: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x209F70u;
    {
        const bool branch_taken_0x209f70 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x209f70) {
            ctx->pc = 0x209F7Cu;
            goto label_209f7c;
        }
    }
    ctx->pc = 0x209F78u;
    // 0x209f78: 0x64040001  daddiu      $a0, $zero, 0x1
    ctx->pc = 0x209f78u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_209f7c:
    // 0x209f7c: 0x1080000d  beqz        $a0, . + 4 + (0xD << 2)
    ctx->pc = 0x209F7Cu;
    {
        const bool branch_taken_0x209f7c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x209f7c) {
            ctx->pc = 0x209FB4u;
            goto label_209fb4;
        }
    }
    ctx->pc = 0x209F84u;
    // 0x209f84: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x209f84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x209f88: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x209f88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x209f8c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x209f8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x209f90: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x209F90u;
    {
        const bool branch_taken_0x209f90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x209F94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x209F90u;
            // 0x209f94: 0x64050001  daddiu      $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x209f90) {
            ctx->pc = 0x209FA8u;
            goto label_209fa8;
        }
    }
    ctx->pc = 0x209F98u;
    // 0x209f98: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x209f98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x209f9c: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x209F9Cu;
    {
        const bool branch_taken_0x209f9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x209f9c) {
            ctx->pc = 0x209FA8u;
            goto label_209fa8;
        }
    }
    ctx->pc = 0x209FA4u;
    // 0x209fa4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x209fa4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_209fa8:
    // 0x209fa8: 0x10a00002  beqz        $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x209FA8u;
    {
        const bool branch_taken_0x209fa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x209fa8) {
            ctx->pc = 0x209FB4u;
            goto label_209fb4;
        }
    }
    ctx->pc = 0x209FB0u;
    // 0x209fb0: 0x64080001  daddiu      $t0, $zero, 0x1
    ctx->pc = 0x209fb0u;
    SET_GPR_S64(ctx, 8, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1);
label_209fb4:
    // 0x209fb4: 0x11000026  beqz        $t0, . + 4 + (0x26 << 2)
    ctx->pc = 0x209FB4u;
    {
        const bool branch_taken_0x209fb4 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x209fb4) {
            ctx->pc = 0x20A050u;
            goto label_20a050;
        }
    }
    ctx->pc = 0x209FBCu;
label_209fbc:
    // 0x209fbc: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x209fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x209fc0: 0x2529fff8  addiu       $t1, $t1, -0x8
    ctx->pc = 0x209fc0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967288));
    // 0x209fc4: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x209fc4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x209fc8: 0x29210008  slti        $at, $t1, 0x8
    ctx->pc = 0x209fc8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x209fcc: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x209fccu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x209fd0: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x209fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x209fd4: 0xace0001c  sw          $zero, 0x1C($a3)
    ctx->pc = 0x209fd4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 0));
    // 0x209fd8: 0xace00018  sw          $zero, 0x18($a3)
    ctx->pc = 0x209fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 24), GPR_U32(ctx, 0));
    // 0x209fdc: 0xace00014  sw          $zero, 0x14($a3)
    ctx->pc = 0x209fdcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 20), GPR_U32(ctx, 0));
    // 0x209fe0: 0xace00010  sw          $zero, 0x10($a3)
    ctx->pc = 0x209fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 16), GPR_U32(ctx, 0));
    // 0x209fe4: 0xace0002c  sw          $zero, 0x2C($a3)
    ctx->pc = 0x209fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 44), GPR_U32(ctx, 0));
    // 0x209fe8: 0xace00028  sw          $zero, 0x28($a3)
    ctx->pc = 0x209fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 40), GPR_U32(ctx, 0));
    // 0x209fec: 0xace00024  sw          $zero, 0x24($a3)
    ctx->pc = 0x209fecu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 36), GPR_U32(ctx, 0));
    // 0x209ff0: 0xace00020  sw          $zero, 0x20($a3)
    ctx->pc = 0x209ff0u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 32), GPR_U32(ctx, 0));
    // 0x209ff4: 0xace0003c  sw          $zero, 0x3C($a3)
    ctx->pc = 0x209ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 60), GPR_U32(ctx, 0));
    // 0x209ff8: 0xace00038  sw          $zero, 0x38($a3)
    ctx->pc = 0x209ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 56), GPR_U32(ctx, 0));
    // 0x209ffc: 0xace00034  sw          $zero, 0x34($a3)
    ctx->pc = 0x209ffcu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 52), GPR_U32(ctx, 0));
    // 0x20a000: 0xace00030  sw          $zero, 0x30($a3)
    ctx->pc = 0x20a000u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 48), GPR_U32(ctx, 0));
    // 0x20a004: 0xace0004c  sw          $zero, 0x4C($a3)
    ctx->pc = 0x20a004u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 76), GPR_U32(ctx, 0));
    // 0x20a008: 0xace00048  sw          $zero, 0x48($a3)
    ctx->pc = 0x20a008u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 72), GPR_U32(ctx, 0));
    // 0x20a00c: 0xace00044  sw          $zero, 0x44($a3)
    ctx->pc = 0x20a00cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 68), GPR_U32(ctx, 0));
    // 0x20a010: 0xace00040  sw          $zero, 0x40($a3)
    ctx->pc = 0x20a010u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 64), GPR_U32(ctx, 0));
    // 0x20a014: 0xace0005c  sw          $zero, 0x5C($a3)
    ctx->pc = 0x20a014u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 92), GPR_U32(ctx, 0));
    // 0x20a018: 0xace00058  sw          $zero, 0x58($a3)
    ctx->pc = 0x20a018u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 88), GPR_U32(ctx, 0));
    // 0x20a01c: 0xace00054  sw          $zero, 0x54($a3)
    ctx->pc = 0x20a01cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 84), GPR_U32(ctx, 0));
    // 0x20a020: 0xace00050  sw          $zero, 0x50($a3)
    ctx->pc = 0x20a020u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 80), GPR_U32(ctx, 0));
    // 0x20a024: 0xace0006c  sw          $zero, 0x6C($a3)
    ctx->pc = 0x20a024u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 108), GPR_U32(ctx, 0));
    // 0x20a028: 0xace00068  sw          $zero, 0x68($a3)
    ctx->pc = 0x20a028u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 104), GPR_U32(ctx, 0));
    // 0x20a02c: 0xace00064  sw          $zero, 0x64($a3)
    ctx->pc = 0x20a02cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 100), GPR_U32(ctx, 0));
    // 0x20a030: 0xace00060  sw          $zero, 0x60($a3)
    ctx->pc = 0x20a030u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 96), GPR_U32(ctx, 0));
    // 0x20a034: 0xace0007c  sw          $zero, 0x7C($a3)
    ctx->pc = 0x20a034u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 124), GPR_U32(ctx, 0));
    // 0x20a038: 0xace00078  sw          $zero, 0x78($a3)
    ctx->pc = 0x20a038u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 120), GPR_U32(ctx, 0));
    // 0x20a03c: 0xace00074  sw          $zero, 0x74($a3)
    ctx->pc = 0x20a03cu;
    WRITE32(ADD32(GPR_U32(ctx, 7), 116), GPR_U32(ctx, 0));
    // 0x20a040: 0xace00070  sw          $zero, 0x70($a3)
    ctx->pc = 0x20a040u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 112), GPR_U32(ctx, 0));
    // 0x20a044: 0x1020ffdd  beqz        $at, . + 4 + (-0x23 << 2)
    ctx->pc = 0x20A044u;
    {
        const bool branch_taken_0x20a044 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A048u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A044u;
            // 0x20a048: 0x24e70080  addiu       $a3, $a3, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a044) {
            ctx->pc = 0x209FBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_209fbc;
        }
    }
    ctx->pc = 0x20A04Cu;
    // 0x20a04c: 0x0  nop
    ctx->pc = 0x20a04cu;
    // NOP
label_20a050:
    // 0x20a050: 0x5200009  bltz        $t1, . + 4 + (0x9 << 2)
    ctx->pc = 0x20A050u;
    {
        const bool branch_taken_0x20a050 = (GPR_S32(ctx, 9) < 0);
        if (branch_taken_0x20a050) {
            ctx->pc = 0x20A078u;
            goto label_20a078;
        }
    }
    ctx->pc = 0x20A058u;
label_20a058:
    // 0x20a058: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x20a058u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x20a05c: 0x2529ffff  addiu       $t1, $t1, -0x1
    ctx->pc = 0x20a05cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967295));
    // 0x20a060: 0xace00008  sw          $zero, 0x8($a3)
    ctx->pc = 0x20a060u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
    // 0x20a064: 0xace00004  sw          $zero, 0x4($a3)
    ctx->pc = 0x20a064u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 0));
    // 0x20a068: 0xace00000  sw          $zero, 0x0($a3)
    ctx->pc = 0x20a068u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 0), GPR_U32(ctx, 0));
    // 0x20a06c: 0x521fffa  bgez        $t1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x20A06Cu;
    {
        const bool branch_taken_0x20a06c = (GPR_S32(ctx, 9) >= 0);
        ctx->pc = 0x20A070u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A06Cu;
            // 0x20a070: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a06c) {
            ctx->pc = 0x20A058u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_20a058;
        }
    }
    ctx->pc = 0x20A074u;
    // 0x20a074: 0x0  nop
    ctx->pc = 0x20a074u;
    // NOP
label_20a078:
    // 0x20a078: 0x3e00008  jr          $ra
    ctx->pc = 0x20A078u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20A080u;
    // 0x20a080: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x20a080u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x20a084: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x20a084u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x20a088: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x20a088u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x20a08c: 0x3e00008  jr          $ra
    ctx->pc = 0x20A08Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A090u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A08Cu;
            // 0x20a090: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20A094u;
    // 0x20a094: 0x0  nop
    ctx->pc = 0x20a094u;
    // NOP
    // 0x20a098: 0x0  nop
    ctx->pc = 0x20a098u;
    // NOP
    // 0x20a09c: 0x0  nop
    ctx->pc = 0x20a09cu;
    // NOP
    // 0x20a0a0: 0xaca0000c  sw          $zero, 0xC($a1)
    ctx->pc = 0x20a0a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 0));
    // 0x20a0a4: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x20a0a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x20a0a8: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x20a0a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x20a0ac: 0x3e00008  jr          $ra
    ctx->pc = 0x20A0ACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A0B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A0ACu;
            // 0x20a0b0: 0xaca00000  sw          $zero, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20A0B4u;
    // 0x20a0b4: 0x0  nop
    ctx->pc = 0x20a0b4u;
    // NOP
    // 0x20a0b8: 0x0  nop
    ctx->pc = 0x20a0b8u;
    // NOP
    // 0x20a0bc: 0x0  nop
    ctx->pc = 0x20a0bcu;
    // NOP
    // 0x20a0c0: 0xc4810010  lwc1        $f1, 0x10($a0)
    ctx->pc = 0x20a0c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x20a0c4: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x20a0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a0c8: 0x46016040  add.s       $f1, $f12, $f1
    ctx->pc = 0x20a0c8u;
    ctx->f[1] = FPU_ADD_S(ctx->f[12], ctx->f[1]);
    // 0x20a0cc: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20a0ccu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20a0d0: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x20a0d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x20a0d4: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x20a0d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a0d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20a0d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20a0dc: 0xe4c00004  swc1        $f0, 0x4($a2)
    ctx->pc = 0x20a0dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x20a0e0: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x20a0e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a0e4: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20a0e4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20a0e8: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x20a0e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x20a0ec: 0xc4a0003c  lwc1        $f0, 0x3C($a1)
    ctx->pc = 0x20a0ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a0f0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x20a0f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x20a0f4: 0xe4c0000c  swc1        $f0, 0xC($a2)
    ctx->pc = 0x20a0f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
    // 0x20a0f8: 0xc4a00030  lwc1        $f0, 0x30($a1)
    ctx->pc = 0x20a0f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a0fc: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20a0fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20a100: 0xe4c00010  swc1        $f0, 0x10($a2)
    ctx->pc = 0x20a100u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 16), bits); }
    // 0x20a104: 0xc4a00034  lwc1        $f0, 0x34($a1)
    ctx->pc = 0x20a104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a108: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20a108u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20a10c: 0xe4c00014  swc1        $f0, 0x14($a2)
    ctx->pc = 0x20a10cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 20), bits); }
    // 0x20a110: 0xc4a00038  lwc1        $f0, 0x38($a1)
    ctx->pc = 0x20a110u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a114: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20a114u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20a118: 0xe4c00018  swc1        $f0, 0x18($a2)
    ctx->pc = 0x20a118u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 24), bits); }
    // 0x20a11c: 0xc4a0003c  lwc1        $f0, 0x3C($a1)
    ctx->pc = 0x20a11cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a120: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x20a120u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x20a124: 0x3e00008  jr          $ra
    ctx->pc = 0x20A124u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A128u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A124u;
            // 0x20a128: 0xe4c0001c  swc1        $f0, 0x1C($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 28), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20A12Cu;
    // 0x20a12c: 0x0  nop
    ctx->pc = 0x20a12cu;
    // NOP
    // 0x20a130: 0x3e00008  jr          $ra
    ctx->pc = 0x20A130u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A130u;
            // 0x20a134: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20A138u;
    // 0x20a138: 0x0  nop
    ctx->pc = 0x20a138u;
    // NOP
    // 0x20a13c: 0x0  nop
    ctx->pc = 0x20a13cu;
    // NOP
    // 0x20a140: 0xc4800010  lwc1        $f0, 0x10($a0)
    ctx->pc = 0x20a140u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a144: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x20a144u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20a148: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x20a148u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
    // 0x20a14c: 0xaca00004  sw          $zero, 0x4($a1)
    ctx->pc = 0x20a14cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 0));
    // 0x20a150: 0xaca00008  sw          $zero, 0x8($a1)
    ctx->pc = 0x20a150u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 8), GPR_U32(ctx, 0));
    // 0x20a154: 0x3e00008  jr          $ra
    ctx->pc = 0x20A154u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A158u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A154u;
            // 0x20a158: 0xe4a0000c  swc1        $f0, 0xC($a1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 12), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20A15Cu;
    // 0x20a15c: 0x0  nop
    ctx->pc = 0x20a15cu;
    // NOP
    // 0x20a160: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x20a160u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x20a164: 0x3c08006f  lui         $t0, 0x6F
    ctx->pc = 0x20a164u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)111 << 16));
    // 0x20a168: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x20a168u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x20a16c: 0x8d08ea64  lw          $t0, -0x159C($t0)
    ctx->pc = 0x20a16cu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294961764)));
    // 0x20a170: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x20a170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
    // 0x20a174: 0x3c09006f  lui         $t1, 0x6F
    ctx->pc = 0x20a174u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)111 << 16));
    // 0x20a178: 0x103182b  sltu        $v1, $t0, $v1
    ctx->pc = 0x20a178u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 8) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x20a17c: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x20A17Cu;
    {
        const bool branch_taken_0x20a17c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A180u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A17Cu;
            // 0x20a180: 0x2529ea60  addiu       $t1, $t1, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a17c) {
            ctx->pc = 0x20A1ACu;
            goto label_20a1ac;
        }
    }
    ctx->pc = 0x20A184u;
    // 0x20a184: 0x8d280004  lw          $t0, 0x4($t1)
    ctx->pc = 0x20a184u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 4)));
    // 0x20a188: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x20a188u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x20a18c: 0x2463bf68  addiu       $v1, $v1, -0x4098
    ctx->pc = 0x20a18cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950760));
    // 0x20a190: 0xad030000  sw          $v1, 0x0($t0)
    ctx->pc = 0x20a190u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 0), GPR_U32(ctx, 3));
    // 0x20a194: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x20a194u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
    // 0x20a198: 0xad030004  sw          $v1, 0x4($t0)
    ctx->pc = 0x20a198u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 4), GPR_U32(ctx, 3));
    // 0x20a19c: 0x400ac803  .word       0x400AC803                   # mfc0        $t2, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x20a19cu;
    SET_GPR_S32(ctx, 10, (int32_t)ctx->cop0_perf);
    // 0x20a1a0: 0x2503000c  addiu       $v1, $t0, 0xC
    ctx->pc = 0x20a1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), 12));
    // 0x20a1a4: 0xad0a0008  sw          $t2, 0x8($t0)
    ctx->pc = 0x20a1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 10));
    // 0x20a1a8: 0xad230004  sw          $v1, 0x4($t1)
    ctx->pc = 0x20a1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 3));
label_20a1ac:
    // 0x20a1ac: 0xc4cd0004  lwc1        $f13, 0x4($a2)
    ctx->pc = 0x20a1acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x20a1b0: 0xc4cc0014  lwc1        $f12, 0x14($a2)
    ctx->pc = 0x20a1b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x20a1b4: 0xc4cf0000  lwc1        $f15, 0x0($a2)
    ctx->pc = 0x20a1b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x20a1b8: 0xc4ce0010  lwc1        $f14, 0x10($a2)
    ctx->pc = 0x20a1b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x20a1bc: 0x460d6001  sub.s       $f0, $f12, $f13
    ctx->pc = 0x20a1bcu;
    ctx->f[0] = FPU_SUB_S(ctx->f[12], ctx->f[13]);
    // 0x20a1c0: 0xc4a50010  lwc1        $f5, 0x10($a1)
    ctx->pc = 0x20a1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x20a1c4: 0xc4cb0008  lwc1        $f11, 0x8($a2)
    ctx->pc = 0x20a1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x20a1c8: 0xc4ca0018  lwc1        $f10, 0x18($a2)
    ctx->pc = 0x20a1c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[10] = f; }
    // 0x20a1cc: 0x460f7081  sub.s       $f2, $f14, $f15
    ctx->pc = 0x20a1ccu;
    ctx->f[2] = FPU_SUB_S(ctx->f[14], ctx->f[15]);
    // 0x20a1d0: 0x460d001a  mula.s      $f0, $f13
    ctx->pc = 0x20a1d0u;
    ctx->f[31] = FPU_MUL_S(ctx->f[0], ctx->f[13]);
    // 0x20a1d4: 0x460b5041  sub.s       $f1, $f10, $f11
    ctx->pc = 0x20a1d4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[10], ctx->f[11]);
    // 0x20a1d8: 0x460f101e  madda.s     $f2, $f15
    ctx->pc = 0x20a1d8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[15]));
    // 0x20a1dc: 0x44804800  mtc1        $zero, $f9
    ctx->pc = 0x20a1dcu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[9], &bits, sizeof(bits)); }
    // 0x20a1e0: 0x460b08dc  madd.s      $f3, $f1, $f11
    ctx->pc = 0x20a1e0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[11]));
    // 0x20a1e4: 0x46091834  c.lt.s      $f3, $f9
    ctx->pc = 0x20a1e4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[9])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a1e8: 0x45000080  bc1f        . + 4 + (0x80 << 2)
    ctx->pc = 0x20A1E8u;
    {
        const bool branch_taken_0x20a1e8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x20A1ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A1E8u;
            // 0x20a1ec: 0x46052902  mul.s       $f4, $f5, $f5 (Delay Slot)
        ctx->f[4] = FPU_MUL_S(ctx->f[5], ctx->f[5]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a1e8) {
            ctx->pc = 0x20A3ECu;
            goto label_20a3ec;
        }
    }
    ctx->pc = 0x20A1F0u;
    // 0x20a1f0: 0x46000002  mul.s       $f0, $f0, $f0
    ctx->pc = 0x20a1f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[0]);
    // 0x20a1f4: 0x3c0342c8  lui         $v1, 0x42C8
    ctx->pc = 0x20a1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17096 << 16));
    // 0x20a1f8: 0x46004818  adda.s      $f9, $f0
    ctx->pc = 0x20a1f8u;
    ctx->f[31] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
    // 0x20a1fc: 0x4602101c  madd.s      $f0, $f2, $f2
    ctx->pc = 0x20a1fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[2]));
    // 0x20a200: 0x46004818  adda.s      $f9, $f0
    ctx->pc = 0x20a200u;
    ctx->f[31] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
    // 0x20a204: 0x4601085c  madd.s      $f1, $f1, $f1
    ctx->pc = 0x20a204u;
    ctx->f[1] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[1]));
    // 0x20a208: 0x46040882  mul.s       $f2, $f1, $f4
    ctx->pc = 0x20a208u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x20a20c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20a20cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a210: 0x46031982  mul.s       $f6, $f3, $f3
    ctx->pc = 0x20a210u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x20a214: 0x46020002  mul.s       $f0, $f0, $f2
    ctx->pc = 0x20a214u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[2]);
    // 0x20a218: 0x46003036  c.le.s      $f6, $f0
    ctx->pc = 0x20a218u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[6], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a21c: 0x4503001e  bc1tl       . + 4 + (0x1E << 2)
    ctx->pc = 0x20A21Cu;
    {
        const bool branch_taken_0x20a21c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20a21c) {
            ctx->pc = 0x20A220u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20A21Cu;
            // 0x20a220: 0xc4c0000c  lwc1        $f0, 0xC($a2) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
            ctx->pc = 0x20A298u;
            goto label_20a298;
        }
    }
    ctx->pc = 0x20A224u;
    // 0x20a224: 0x46040834  c.lt.s      $f1, $f4
    ctx->pc = 0x20a224u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[4])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a228: 0x45030071  bc1tl       . + 4 + (0x71 << 2)
    ctx->pc = 0x20A228u;
    {
        const bool branch_taken_0x20a228 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20a228) {
            ctx->pc = 0x20A22Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x20A228u;
            // 0x20a22c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x20A3F0u;
            goto label_20a3f0;
        }
    }
    ctx->pc = 0x20A230u;
    // 0x20a230: 0x46001887  neg.s       $f2, $f3
    ctx->pc = 0x20a230u;
    ctx->f[2] = FPU_NEG_S(ctx->f[3]);
    // 0x20a234: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x20a234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x20a238: 0x46011203  div.s       $f8, $f2, $f1
    ctx->pc = 0x20a238u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[8] = ctx->f[2] / ctx->f[1];
    // 0x20a23c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20a23cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a240: 0x0  nop
    ctx->pc = 0x20a240u;
    // NOP
    // 0x20a244: 0x460801c1  sub.s       $f7, $f0, $f8
    ctx->pc = 0x20a244u;
    ctx->f[7] = FPU_SUB_S(ctx->f[0], ctx->f[8]);
    // 0x20a248: 0x460e4002  mul.s       $f0, $f8, $f14
    ctx->pc = 0x20a248u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[14]);
    // 0x20a24c: 0x46004818  adda.s      $f9, $f0
    ctx->pc = 0x20a24cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
    // 0x20a250: 0x460f381c  madd.s      $f0, $f7, $f15
    ctx->pc = 0x20a250u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[15]));
    // 0x20a254: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x20a254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20a258: 0x460c4002  mul.s       $f0, $f8, $f12
    ctx->pc = 0x20a258u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[12]);
    // 0x20a25c: 0x46004818  adda.s      $f9, $f0
    ctx->pc = 0x20a25cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
    // 0x20a260: 0x460d381c  madd.s      $f0, $f7, $f13
    ctx->pc = 0x20a260u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[13]));
    // 0x20a264: 0xe7a00004  swc1        $f0, 0x4($sp)
    ctx->pc = 0x20a264u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x20a268: 0x460a4002  mul.s       $f0, $f8, $f10
    ctx->pc = 0x20a268u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[10]);
    // 0x20a26c: 0x46004818  adda.s      $f9, $f0
    ctx->pc = 0x20a26cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
    // 0x20a270: 0x460b381c  madd.s      $f0, $f7, $f11
    ctx->pc = 0x20a270u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[11]));
    // 0x20a274: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x20a274u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x20a278: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x20a278u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a27c: 0xc4c6000c  lwc1        $f6, 0xC($a2)
    ctx->pc = 0x20a27cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x20a280: 0x460048c6  mov.s       $f3, $f9
    ctx->pc = 0x20a280u;
    ctx->f[3] = FPU_MOV_S(ctx->f[9]);
    // 0x20a284: 0x46004002  mul.s       $f0, $f8, $f0
    ctx->pc = 0x20a284u;
    ctx->f[0] = FPU_MUL_S(ctx->f[8], ctx->f[0]);
    // 0x20a288: 0x46004818  adda.s      $f9, $f0
    ctx->pc = 0x20a288u;
    ctx->f[31] = FPU_ADD_S(ctx->f[9], ctx->f[0]);
    // 0x20a28c: 0x4606381c  madd.s      $f0, $f7, $f6
    ctx->pc = 0x20a28cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[6]));
    // 0x20a290: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x20A290u;
    {
        const bool branch_taken_0x20a290 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A294u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A290u;
            // 0x20a294: 0xe7a0000c  swc1        $f0, 0xC($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a290) {
            ctx->pc = 0x20A2ACu;
            goto label_20a2ac;
        }
    }
    ctx->pc = 0x20A298u;
label_20a298:
    // 0x20a298: 0xe7af0000  swc1        $f15, 0x0($sp)
    ctx->pc = 0x20a298u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x20a29c: 0x46004886  mov.s       $f2, $f9
    ctx->pc = 0x20a29cu;
    ctx->f[2] = FPU_MOV_S(ctx->f[9]);
    // 0x20a2a0: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x20a2a0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x20a2a4: 0xe7ab0008  swc1        $f11, 0x8($sp)
    ctx->pc = 0x20a2a4u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x20a2a8: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x20a2a8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
label_20a2ac:
    // 0x20a2ac: 0xc7a80004  lwc1        $f8, 0x4($sp)
    ctx->pc = 0x20a2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[8] = f; }
    // 0x20a2b0: 0xc7a60000  lwc1        $f6, 0x0($sp)
    ctx->pc = 0x20a2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x20a2b4: 0xc7a70008  lwc1        $f7, 0x8($sp)
    ctx->pc = 0x20a2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x20a2b8: 0x4608401a  mula.s      $f8, $f8
    ctx->pc = 0x20a2b8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[8], ctx->f[8]);
    // 0x20a2bc: 0x4606301e  madda.s     $f6, $f6
    ctx->pc = 0x20a2bcu;
    ctx->f[31] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[6], ctx->f[6]));
    // 0x20a2c0: 0x4607399c  madd.s      $f6, $f7, $f7
    ctx->pc = 0x20a2c0u;
    ctx->f[6] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[7], ctx->f[7]));
    // 0x20a2c4: 0x46043101  sub.s       $f4, $f6, $f4
    ctx->pc = 0x20a2c4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[6], ctx->f[4]);
    // 0x20a2c8: 0x4603181a  mula.s      $f3, $f3
    ctx->pc = 0x20a2c8u;
    ctx->f[31] = FPU_MUL_S(ctx->f[3], ctx->f[3]);
    // 0x20a2cc: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x20a2ccu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20a2d0: 0x0  nop
    ctx->pc = 0x20a2d0u;
    // NOP
    // 0x20a2d4: 0x4604091d  msub.s      $f4, $f1, $f4
    ctx->pc = 0x20a2d4u;
    ctx->f[4] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[1], ctx->f[4]));
    // 0x20a2d8: 0x46002036  c.le.s      $f4, $f0
    ctx->pc = 0x20a2d8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[4], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a2dc: 0x45010043  bc1t        . + 4 + (0x43 << 2)
    ctx->pc = 0x20A2DCu;
    {
        const bool branch_taken_0x20a2dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20a2dc) {
            ctx->pc = 0x20A3ECu;
            goto label_20a3ec;
        }
    }
    ctx->pc = 0x20A2E4u;
    // 0x20a2e4: 0x0  nop
    ctx->pc = 0x20a2e4u;
    // NOP
    // 0x20a2e8: 0x0  nop
    ctx->pc = 0x20a2e8u;
    // NOP
    // 0x20a2ec: 0x46040104  c1          0x40104
    ctx->pc = 0x20a2ecu;
    ctx->f[4] = FPU_SQRT_S(ctx->f[0]);
    // 0x20a2f0: 0x460018c7  neg.s       $f3, $f3
    ctx->pc = 0x20a2f0u;
    ctx->f[3] = FPU_NEG_S(ctx->f[3]);
    // 0x20a2f4: 0x460418c1  sub.s       $f3, $f3, $f4
    ctx->pc = 0x20a2f4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[4]);
    // 0x20a2f8: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x20a2f8u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x20a2fc: 0xc4e20010  lwc1        $f2, 0x10($a3)
    ctx->pc = 0x20a2fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20a300: 0x46020882  mul.s       $f2, $f1, $f2
    ctx->pc = 0x20a300u;
    ctx->f[2] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x20a304: 0x46021834  c.lt.s      $f3, $f2
    ctx->pc = 0x20a304u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[2])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a308: 0x45000038  bc1f        . + 4 + (0x38 << 2)
    ctx->pc = 0x20A308u;
    {
        const bool branch_taken_0x20a308 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x20a308) {
            ctx->pc = 0x20A3ECu;
            goto label_20a3ec;
        }
    }
    ctx->pc = 0x20A310u;
    // 0x20a310: 0x46001834  c.lt.s      $f3, $f0
    ctx->pc = 0x20a310u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[3], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x20a314: 0x45010035  bc1t        . + 4 + (0x35 << 2)
    ctx->pc = 0x20A314u;
    {
        const bool branch_taken_0x20a314 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x20a314) {
            ctx->pc = 0x20A3ECu;
            goto label_20a3ec;
        }
    }
    ctx->pc = 0x20A31Cu;
    // 0x20a31c: 0x0  nop
    ctx->pc = 0x20a31cu;
    // NOP
    // 0x20a320: 0x0  nop
    ctx->pc = 0x20a320u;
    // NOP
    // 0x20a324: 0x46011983  div.s       $f6, $f3, $f1
    ctx->pc = 0x20a324u;
    if (ctx->f[1] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[6] = copysignf(INFINITY, ctx->f[3] * 0.0f); } else ctx->f[6] = ctx->f[3] / ctx->f[1];
    // 0x20a328: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x20a328u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x20a32c: 0x2408ffff  addiu       $t0, $zero, -0x1
    ctx->pc = 0x20a32cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x20a330: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x20a330u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20a334: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x20a334u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x20a338: 0x0  nop
    ctx->pc = 0x20a338u;
    // NOP
    // 0x20a33c: 0x46051043  div.s       $f1, $f2, $f5
    ctx->pc = 0x20a33cu;
    if (ctx->f[5] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[2] * 0.0f); } else ctx->f[1] = ctx->f[2] / ctx->f[5];
    // 0x20a340: 0xe4e60010  swc1        $f6, 0x10($a3)
    ctx->pc = 0x20a340u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 16), bits); }
    // 0x20a344: 0x46061101  sub.s       $f4, $f2, $f6
    ctx->pc = 0x20a344u;
    ctx->f[4] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x20a348: 0xc4c20010  lwc1        $f2, 0x10($a2)
    ctx->pc = 0x20a348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20a34c: 0xc4c30000  lwc1        $f3, 0x0($a2)
    ctx->pc = 0x20a34cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20a350: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x20a350u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x20a354: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x20a354u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x20a358: 0x4603209c  madd.s      $f2, $f4, $f3
    ctx->pc = 0x20a358u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x20a35c: 0xe4e20000  swc1        $f2, 0x0($a3)
    ctx->pc = 0x20a35cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x20a360: 0xc4c20014  lwc1        $f2, 0x14($a2)
    ctx->pc = 0x20a360u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20a364: 0xc4c30004  lwc1        $f3, 0x4($a2)
    ctx->pc = 0x20a364u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20a368: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x20a368u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x20a36c: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x20a36cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x20a370: 0x4603209c  madd.s      $f2, $f4, $f3
    ctx->pc = 0x20a370u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x20a374: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x20a374u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x20a378: 0xc4c20018  lwc1        $f2, 0x18($a2)
    ctx->pc = 0x20a378u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20a37c: 0xc4c30008  lwc1        $f3, 0x8($a2)
    ctx->pc = 0x20a37cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20a380: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x20a380u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x20a384: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x20a384u;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x20a388: 0x4603209c  madd.s      $f2, $f4, $f3
    ctx->pc = 0x20a388u;
    ctx->f[2] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x20a38c: 0xe4e20008  swc1        $f2, 0x8($a3)
    ctx->pc = 0x20a38cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x20a390: 0xc4c2001c  lwc1        $f2, 0x1C($a2)
    ctx->pc = 0x20a390u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x20a394: 0xc4c3000c  lwc1        $f3, 0xC($a2)
    ctx->pc = 0x20a394u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x20a398: 0x46023082  mul.s       $f2, $f6, $f2
    ctx->pc = 0x20a398u;
    ctx->f[2] = FPU_MUL_S(ctx->f[6], ctx->f[2]);
    // 0x20a39c: 0x46020018  adda.s      $f0, $f2
    ctx->pc = 0x20a39cu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x20a3a0: 0x4603201c  madd.s      $f0, $f4, $f3
    ctx->pc = 0x20a3a0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[31], FPU_MUL_S(ctx->f[4], ctx->f[3]));
    // 0x20a3a4: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x20a3a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x20a3a8: 0xc4e00000  lwc1        $f0, 0x0($a3)
    ctx->pc = 0x20a3a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a3ac: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20a3acu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20a3b0: 0xe4e00000  swc1        $f0, 0x0($a3)
    ctx->pc = 0x20a3b0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 0), bits); }
    // 0x20a3b4: 0xc4e00004  lwc1        $f0, 0x4($a3)
    ctx->pc = 0x20a3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a3b8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20a3b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20a3bc: 0xe4e00004  swc1        $f0, 0x4($a3)
    ctx->pc = 0x20a3bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x20a3c0: 0xc4e00008  lwc1        $f0, 0x8($a3)
    ctx->pc = 0x20a3c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a3c4: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20a3c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20a3c8: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x20a3c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x20a3cc: 0xc4e0000c  lwc1        $f0, 0xC($a3)
    ctx->pc = 0x20a3ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x20a3d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x20a3d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x20a3d4: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x20a3d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x20a3d8: 0x8ce30040  lw          $v1, 0x40($a3)
    ctx->pc = 0x20a3d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 64)));
    // 0x20a3dc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x20a3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x20a3e0: 0x671821  addu        $v1, $v1, $a3
    ctx->pc = 0x20a3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x20a3e4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x20A3E4u;
    {
        const bool branch_taken_0x20a3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A3E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A3E4u;
            // 0x20a3e8: 0xac680020  sw          $t0, 0x20($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a3e4) {
            ctx->pc = 0x20A3F0u;
            goto label_20a3f0;
        }
    }
    ctx->pc = 0x20A3ECu;
label_20a3ec:
    // 0x20a3ec: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x20a3ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_20a3f0:
    // 0x20a3f0: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x20a3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x20a3f4: 0x3c07006f  lui         $a3, 0x6F
    ctx->pc = 0x20a3f4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)111 << 16));
    // 0x20a3f8: 0x8c66ea64  lw          $a2, -0x159C($v1)
    ctx->pc = 0x20a3f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961764)));
    // 0x20a3fc: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x20a3fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x20a400: 0x8c63ea6c  lw          $v1, -0x1594($v1)
    ctx->pc = 0x20a400u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961772)));
    // 0x20a404: 0xc3182b  sltu        $v1, $a2, $v1
    ctx->pc = 0x20a404u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x20a408: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x20A408u;
    {
        const bool branch_taken_0x20a408 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x20A40Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A408u;
            // 0x20a40c: 0x24e7ea60  addiu       $a3, $a3, -0x15A0 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294961760));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20a408) {
            ctx->pc = 0x20A438u;
            goto label_20a438;
        }
    }
    ctx->pc = 0x20A410u;
    // 0x20a410: 0x8ce60004  lw          $a2, 0x4($a3)
    ctx->pc = 0x20a410u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4)));
    // 0x20a414: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x20a414u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x20a418: 0x2463bf78  addiu       $v1, $v1, -0x4088
    ctx->pc = 0x20a418u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294950776));
    // 0x20a41c: 0xacc30000  sw          $v1, 0x0($a2)
    ctx->pc = 0x20a41cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 3));
    // 0x20a420: 0x4003c801  .word       0x4003C801                   # mfc0        $v1, Reserved25 # 00000001 <InstrIdType: R5900_COP0>
    ctx->pc = 0x20a420u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_perf);
    // 0x20a424: 0xacc30004  sw          $v1, 0x4($a2)
    ctx->pc = 0x20a424u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
    // 0x20a428: 0x4008c803  .word       0x4008C803                   # mfc0        $t0, Reserved25 # 00000003 <InstrIdType: R5900_COP0>
    ctx->pc = 0x20a428u;
    SET_GPR_S32(ctx, 8, (int32_t)ctx->cop0_perf);
    // 0x20a42c: 0x24c3000c  addiu       $v1, $a2, 0xC
    ctx->pc = 0x20a42cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 12));
    // 0x20a430: 0xacc80008  sw          $t0, 0x8($a2)
    ctx->pc = 0x20a430u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 8), GPR_U32(ctx, 8));
    // 0x20a434: 0xace30004  sw          $v1, 0x4($a3)
    ctx->pc = 0x20a434u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4), GPR_U32(ctx, 3));
label_20a438:
    // 0x20a438: 0xa0850000  sb          $a1, 0x0($a0)
    ctx->pc = 0x20a438u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 5));
    // 0x20a43c: 0x3e00008  jr          $ra
    ctx->pc = 0x20A43Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A440u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A43Cu;
            // 0x20a440: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20A444u;
    // 0x20a444: 0x0  nop
    ctx->pc = 0x20a444u;
    // NOP
    // 0x20a448: 0x0  nop
    ctx->pc = 0x20a448u;
    // NOP
    // 0x20a44c: 0x0  nop
    ctx->pc = 0x20a44cu;
    // NOP
    // 0x20a450: 0x3e00008  jr          $ra
    ctx->pc = 0x20A450u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x20A454u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x20A450u;
            // 0x20a454: 0x24020014  addiu       $v0, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x20A458u;
    // 0x20a458: 0x0  nop
    ctx->pc = 0x20a458u;
    // NOP
    // 0x20a45c: 0x0  nop
    ctx->pc = 0x20a45cu;
    // NOP
}
