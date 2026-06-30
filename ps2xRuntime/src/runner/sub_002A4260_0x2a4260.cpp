#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002A4260
// Address: 0x2a4260 - 0x2a4570
void sub_002A4260_0x2a4260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002A4260_0x2a4260");
#endif

    switch (ctx->pc) {
        case 0x2a42acu: goto label_2a42ac;
        case 0x2a42d8u: goto label_2a42d8;
        case 0x2a4304u: goto label_2a4304;
        case 0x2a4330u: goto label_2a4330;
        case 0x2a435cu: goto label_2a435c;
        case 0x2a4388u: goto label_2a4388;
        case 0x2a43b4u: goto label_2a43b4;
        case 0x2a4468u: goto label_2a4468;
        case 0x2a4494u: goto label_2a4494;
        case 0x2a4504u: goto label_2a4504;
        case 0x2a4510u: goto label_2a4510;
        case 0x2a451cu: goto label_2a451c;
        case 0x2a4528u: goto label_2a4528;
        case 0x2a4534u: goto label_2a4534;
        case 0x2a4540u: goto label_2a4540;
        case 0x2a454cu: goto label_2a454c;
        default: break;
    }

    ctx->pc = 0x2a4260u;

    // 0x2a4260: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x2a4260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x2a4264: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2a4264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2a4268: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2a4268u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2a426c: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2a426cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2a4270: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2a4270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2a4274: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2a4274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2a4278: 0xe7b60008  swc1        $f22, 0x8($sp)
    ctx->pc = 0x2a4278u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x2a427c: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x2a427cu;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x2a4280: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x2a4280u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x2a4284: 0xa0830564  sb          $v1, 0x564($a0)
    ctx->pc = 0x2a4284u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 1380), (uint8_t)GPR_U32(ctx, 3));
    // 0x2a4288: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x2a4288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x2a428c: 0x106000af  beqz        $v1, . + 4 + (0xAF << 2)
    ctx->pc = 0x2A428Cu;
    {
        const bool branch_taken_0x2a428c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2A4290u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A428Cu;
            // 0x2a4290: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a428c) {
            ctx->pc = 0x2A454Cu;
            goto label_2a454c;
        }
    }
    ctx->pc = 0x2A4294u;
    // 0x2a4294: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x2a4294u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x2a4298: 0x260602d0  addiu       $a2, $s0, 0x2D0
    ctx->pc = 0x2a4298u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 720));
    // 0x2a429c: 0x8e0202c4  lw          $v0, 0x2C4($s0)
    ctx->pc = 0x2a429cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 708)));
    // 0x2a42a0: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x2a42a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x2a42a4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2a42a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a42a8: 0xae020024  sw          $v0, 0x24($s0)
    ctx->pc = 0x2a42a8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 2));
label_2a42ac:
    // 0x2a42ac: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a42acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a42b0: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2a42b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2a42b4: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2a42b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2a42b8: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2a42b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2a42bc: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2a42bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2a42c0: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2a42c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2a42c4: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2A42C4u;
    {
        const bool branch_taken_0x2a42c4 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2A42C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A42C4u;
            // 0x2a42c8: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a42c4) {
            ctx->pc = 0x2A42ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a42ac;
        }
    }
    ctx->pc = 0x2A42CCu;
    // 0x2a42cc: 0x26060310  addiu       $a2, $s0, 0x310
    ctx->pc = 0x2a42ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 784));
    // 0x2a42d0: 0x26050070  addiu       $a1, $s0, 0x70
    ctx->pc = 0x2a42d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x2a42d4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2a42d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2a42d8:
    // 0x2a42d8: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a42d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a42dc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2a42dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2a42e0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2a42e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2a42e4: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2a42e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2a42e8: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2a42e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2a42ec: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2a42ecu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2a42f0: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2A42F0u;
    {
        const bool branch_taken_0x2a42f0 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2A42F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A42F0u;
            // 0x2a42f4: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a42f0) {
            ctx->pc = 0x2A42D8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a42d8;
        }
    }
    ctx->pc = 0x2A42F8u;
    // 0x2a42f8: 0x26060350  addiu       $a2, $s0, 0x350
    ctx->pc = 0x2a42f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 848));
    // 0x2a42fc: 0x260500b0  addiu       $a1, $s0, 0xB0
    ctx->pc = 0x2a42fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x2a4300: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2a4300u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2a4304:
    // 0x2a4304: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a4304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a4308: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2a4308u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2a430c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2a430cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2a4310: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2a4310u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2a4314: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2a4314u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2a4318: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2a4318u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2a431c: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2A431Cu;
    {
        const bool branch_taken_0x2a431c = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2A4320u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A431Cu;
            // 0x2a4320: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a431c) {
            ctx->pc = 0x2A4304u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a4304;
        }
    }
    ctx->pc = 0x2A4324u;
    // 0x2a4324: 0x26060390  addiu       $a2, $s0, 0x390
    ctx->pc = 0x2a4324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 912));
    // 0x2a4328: 0x260500f0  addiu       $a1, $s0, 0xF0
    ctx->pc = 0x2a4328u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 240));
    // 0x2a432c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2a432cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2a4330:
    // 0x2a4330: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a4330u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a4334: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2a4334u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2a4338: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2a4338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2a433c: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2a433cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2a4340: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2a4340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2a4344: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2a4344u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2a4348: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2A4348u;
    {
        const bool branch_taken_0x2a4348 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2A434Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4348u;
            // 0x2a434c: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4348) {
            ctx->pc = 0x2A4330u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a4330;
        }
    }
    ctx->pc = 0x2A4350u;
    // 0x2a4350: 0x260603d0  addiu       $a2, $s0, 0x3D0
    ctx->pc = 0x2a4350u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 976));
    // 0x2a4354: 0x26050130  addiu       $a1, $s0, 0x130
    ctx->pc = 0x2a4354u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x2a4358: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2a4358u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2a435c:
    // 0x2a435c: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a435cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a4360: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2a4360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2a4364: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2a4364u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2a4368: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2a4368u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2a436c: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2a436cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2a4370: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2a4370u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2a4374: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2A4374u;
    {
        const bool branch_taken_0x2a4374 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2A4378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4374u;
            // 0x2a4378: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4374) {
            ctx->pc = 0x2A435Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a435c;
        }
    }
    ctx->pc = 0x2A437Cu;
    // 0x2a437c: 0x26060410  addiu       $a2, $s0, 0x410
    ctx->pc = 0x2a437cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1040));
    // 0x2a4380: 0x26050170  addiu       $a1, $s0, 0x170
    ctx->pc = 0x2a4380u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 368));
    // 0x2a4384: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2a4384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2a4388:
    // 0x2a4388: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a4388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a438c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2a438cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2a4390: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2a4390u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2a4394: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2a4394u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2a4398: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2a4398u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2a439c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2a439cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2a43a0: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2A43A0u;
    {
        const bool branch_taken_0x2a43a0 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2A43A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A43A0u;
            // 0x2a43a4: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a43a0) {
            ctx->pc = 0x2A4388u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a4388;
        }
    }
    ctx->pc = 0x2A43A8u;
    // 0x2a43a8: 0x26060450  addiu       $a2, $s0, 0x450
    ctx->pc = 0x2a43a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1104));
    // 0x2a43ac: 0x260501b0  addiu       $a1, $s0, 0x1B0
    ctx->pc = 0x2a43acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 432));
    // 0x2a43b0: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x2a43b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_2a43b4:
    // 0x2a43b4: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a43b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a43b8: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2a43b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2a43bc: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2a43bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2a43c0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2a43c0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2a43c4: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2a43c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2a43c8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2a43c8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2a43cc: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2A43CCu;
    {
        const bool branch_taken_0x2a43cc = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2A43D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A43CCu;
            // 0x2a43d0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a43cc) {
            ctx->pc = 0x2A43B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a43b4;
        }
    }
    ctx->pc = 0x2A43D4u;
    // 0x2a43d4: 0x8e020488  lw          $v0, 0x488($s0)
    ctx->pc = 0x2a43d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1160)));
    // 0x2a43d8: 0x260604d0  addiu       $a2, $s0, 0x4D0
    ctx->pc = 0x2a43d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1232));
    // 0x2a43dc: 0x26050230  addiu       $a1, $s0, 0x230
    ctx->pc = 0x2a43dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 560));
    // 0x2a43e0: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2a43e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2a43e4: 0xae0201e8  sw          $v0, 0x1E8($s0)
    ctx->pc = 0x2a43e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 488), GPR_U32(ctx, 2));
    // 0x2a43e8: 0xc6030490  lwc1        $f3, 0x490($s0)
    ctx->pc = 0x2a43e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a43ec: 0xc6020494  lwc1        $f2, 0x494($s0)
    ctx->pc = 0x2a43ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1172)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a43f0: 0xc6010498  lwc1        $f1, 0x498($s0)
    ctx->pc = 0x2a43f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a43f4: 0xc600049c  lwc1        $f0, 0x49C($s0)
    ctx->pc = 0x2a43f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1180)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a43f8: 0xe60301f0  swc1        $f3, 0x1F0($s0)
    ctx->pc = 0x2a43f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 496), bits); }
    // 0x2a43fc: 0xe60201f4  swc1        $f2, 0x1F4($s0)
    ctx->pc = 0x2a43fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 500), bits); }
    // 0x2a4400: 0xe60101f8  swc1        $f1, 0x1F8($s0)
    ctx->pc = 0x2a4400u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 504), bits); }
    // 0x2a4404: 0xe60001fc  swc1        $f0, 0x1FC($s0)
    ctx->pc = 0x2a4404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 508), bits); }
    // 0x2a4408: 0xc60304a0  lwc1        $f3, 0x4A0($s0)
    ctx->pc = 0x2a4408u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a440c: 0xc60204a4  lwc1        $f2, 0x4A4($s0)
    ctx->pc = 0x2a440cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1188)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a4410: 0xc60104a8  lwc1        $f1, 0x4A8($s0)
    ctx->pc = 0x2a4410u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4414: 0xc60004ac  lwc1        $f0, 0x4AC($s0)
    ctx->pc = 0x2a4414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4418: 0xe6030200  swc1        $f3, 0x200($s0)
    ctx->pc = 0x2a4418u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 512), bits); }
    // 0x2a441c: 0xe6020204  swc1        $f2, 0x204($s0)
    ctx->pc = 0x2a441cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 516), bits); }
    // 0x2a4420: 0xe6010208  swc1        $f1, 0x208($s0)
    ctx->pc = 0x2a4420u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 520), bits); }
    // 0x2a4424: 0xe600020c  swc1        $f0, 0x20C($s0)
    ctx->pc = 0x2a4424u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 524), bits); }
    // 0x2a4428: 0xc60304b0  lwc1        $f3, 0x4B0($s0)
    ctx->pc = 0x2a4428u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a442c: 0xc60204b4  lwc1        $f2, 0x4B4($s0)
    ctx->pc = 0x2a442cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a4430: 0xc60104b8  lwc1        $f1, 0x4B8($s0)
    ctx->pc = 0x2a4430u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4434: 0xc60004bc  lwc1        $f0, 0x4BC($s0)
    ctx->pc = 0x2a4434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4438: 0xe6030210  swc1        $f3, 0x210($s0)
    ctx->pc = 0x2a4438u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 528), bits); }
    // 0x2a443c: 0xe6020214  swc1        $f2, 0x214($s0)
    ctx->pc = 0x2a443cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 532), bits); }
    // 0x2a4440: 0xe6010218  swc1        $f1, 0x218($s0)
    ctx->pc = 0x2a4440u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 536), bits); }
    // 0x2a4444: 0xe600021c  swc1        $f0, 0x21C($s0)
    ctx->pc = 0x2a4444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 540), bits); }
    // 0x2a4448: 0xc60304c0  lwc1        $f3, 0x4C0($s0)
    ctx->pc = 0x2a4448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x2a444c: 0xc60204c4  lwc1        $f2, 0x4C4($s0)
    ctx->pc = 0x2a444cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x2a4450: 0xc60104c8  lwc1        $f1, 0x4C8($s0)
    ctx->pc = 0x2a4450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1224)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2a4454: 0xc60004cc  lwc1        $f0, 0x4CC($s0)
    ctx->pc = 0x2a4454u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1228)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a4458: 0xe6030220  swc1        $f3, 0x220($s0)
    ctx->pc = 0x2a4458u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 544), bits); }
    // 0x2a445c: 0xe6020224  swc1        $f2, 0x224($s0)
    ctx->pc = 0x2a445cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 548), bits); }
    // 0x2a4460: 0xe6010228  swc1        $f1, 0x228($s0)
    ctx->pc = 0x2a4460u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 552), bits); }
    // 0x2a4464: 0xe600022c  swc1        $f0, 0x22C($s0)
    ctx->pc = 0x2a4464u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 556), bits); }
label_2a4468:
    // 0x2a4468: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a4468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a446c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2a446cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2a4470: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2a4470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2a4474: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2a4474u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2a4478: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2a4478u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2a447c: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2a447cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2a4480: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2A4480u;
    {
        const bool branch_taken_0x2a4480 = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2A4484u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4480u;
            // 0x2a4484: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a4480) {
            ctx->pc = 0x2A4468u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a4468;
        }
    }
    ctx->pc = 0x2A4488u;
    // 0x2a4488: 0x26060510  addiu       $a2, $s0, 0x510
    ctx->pc = 0x2a4488u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 1296));
    // 0x2a448c: 0x26050270  addiu       $a1, $s0, 0x270
    ctx->pc = 0x2a448cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 624));
    // 0x2a4490: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2a4490u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_2a4494:
    // 0x2a4494: 0x8cc30000  lw          $v1, 0x0($a2)
    ctx->pc = 0x2a4494u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2a4498: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x2a4498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2a449c: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x2a449cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2a44a0: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x2a44a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
    // 0x2a44a4: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x2a44a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x2a44a8: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2a44a8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2a44ac: 0x1c80fff9  bgtz        $a0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x2A44ACu;
    {
        const bool branch_taken_0x2a44ac = (GPR_S32(ctx, 4) > 0);
        ctx->pc = 0x2A44B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A44ACu;
            // 0x2a44b0: 0x24a50008  addiu       $a1, $a1, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2a44ac) {
            ctx->pc = 0x2A4494u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2a4494;
        }
    }
    ctx->pc = 0x2A44B4u;
    // 0x2a44b4: 0xc6000550  lwc1        $f0, 0x550($s0)
    ctx->pc = 0x2a44b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1360)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a44b8: 0x260402c0  addiu       $a0, $s0, 0x2C0
    ctx->pc = 0x2a44b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x2a44bc: 0xe60002b0  swc1        $f0, 0x2B0($s0)
    ctx->pc = 0x2a44bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 688), bits); }
    // 0x2a44c0: 0xc6000554  lwc1        $f0, 0x554($s0)
    ctx->pc = 0x2a44c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1364)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a44c4: 0xe60002b4  swc1        $f0, 0x2B4($s0)
    ctx->pc = 0x2a44c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 692), bits); }
    // 0x2a44c8: 0xc6000558  lwc1        $f0, 0x558($s0)
    ctx->pc = 0x2a44c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1368)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a44cc: 0xe60002b8  swc1        $f0, 0x2B8($s0)
    ctx->pc = 0x2a44ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 696), bits); }
    // 0x2a44d0: 0xc600055c  lwc1        $f0, 0x55C($s0)
    ctx->pc = 0x2a44d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 1372)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2a44d4: 0xe60002bc  swc1        $f0, 0x2BC($s0)
    ctx->pc = 0x2a44d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 700), bits); }
    // 0x2a44d8: 0x92020566  lbu         $v0, 0x566($s0)
    ctx->pc = 0x2a44d8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1382)));
    // 0x2a44dc: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x2a44dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x2a44e0: 0xa2020566  sb          $v0, 0x566($s0)
    ctx->pc = 0x2a44e0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1382), (uint8_t)GPR_U32(ctx, 2));
    // 0x2a44e4: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x2a44e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x2a44e8: 0x8e110004  lw          $s1, 0x4($s0)
    ctx->pc = 0x2a44e8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x2a44ec: 0xc6360198  lwc1        $f22, 0x198($s1)
    ctx->pc = 0x2a44ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a44f0: 0x8e320194  lw          $s2, 0x194($s1)
    ctx->pc = 0x2a44f0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 404)));
    // 0x2a44f4: 0xc63501a0  lwc1        $f21, 0x1A0($s1)
    ctx->pc = 0x2a44f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a44f8: 0xc634019c  lwc1        $f20, 0x19C($s1)
    ctx->pc = 0x2a44f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 412)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a44fc: 0xc0a917c  jal         func_2A45F0
    ctx->pc = 0x2A44FCu;
    SET_GPR_U32(ctx, 31, 0x2A4504u);
    ctx->pc = 0x2A4500u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A44FCu;
            // 0x2a4500: 0x262501a4  addiu       $a1, $s1, 0x1A4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 420));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A45F0u;
    if (runtime->hasFunction(0x2A45F0u)) {
        auto targetFn = runtime->lookupFunction(0x2A45F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4504u; }
        if (ctx->pc != 0x2A4504u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A45F0_0x2a45f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4504u; }
        if (ctx->pc != 0x2A4504u) { return; }
    }
    ctx->pc = 0x2A4504u;
label_2a4504:
    // 0x2a4504: 0x260402c0  addiu       $a0, $s0, 0x2C0
    ctx->pc = 0x2a4504u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x2a4508: 0xc0a9174  jal         func_2A45D0
    ctx->pc = 0x2A4508u;
    SET_GPR_U32(ctx, 31, 0x2A4510u);
    ctx->pc = 0x2A450Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4508u;
            // 0x2a450c: 0x262501b0  addiu       $a1, $s1, 0x1B0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 432));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A45D0u;
    if (runtime->hasFunction(0x2A45D0u)) {
        auto targetFn = runtime->lookupFunction(0x2A45D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4510u; }
        if (ctx->pc != 0x2A4510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A45D0_0x2a45d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4510u; }
        if (ctx->pc != 0x2A4510u) { return; }
    }
    ctx->pc = 0x2A4510u;
label_2a4510:
    // 0x2a4510: 0x262501bc  addiu       $a1, $s1, 0x1BC
    ctx->pc = 0x2a4510u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 444));
    // 0x2a4514: 0xc0a916c  jal         func_2A45B0
    ctx->pc = 0x2A4514u;
    SET_GPR_U32(ctx, 31, 0x2A451Cu);
    ctx->pc = 0x2A4518u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4514u;
            // 0x2a4518: 0x260402c0  addiu       $a0, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A45B0u;
    if (runtime->hasFunction(0x2A45B0u)) {
        auto targetFn = runtime->lookupFunction(0x2A45B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A451Cu; }
        if (ctx->pc != 0x2A451Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A45B0_0x2a45b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A451Cu; }
        if (ctx->pc != 0x2A451Cu) { return; }
    }
    ctx->pc = 0x2A451Cu;
label_2a451c:
    // 0x2a451c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2a451cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2a4520: 0xc0a9168  jal         func_2A45A0
    ctx->pc = 0x2A4520u;
    SET_GPR_U32(ctx, 31, 0x2A4528u);
    ctx->pc = 0x2A4524u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4520u;
            // 0x2a4524: 0x260402c0  addiu       $a0, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A45A0u;
    if (runtime->hasFunction(0x2A45A0u)) {
        auto targetFn = runtime->lookupFunction(0x2A45A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4528u; }
        if (ctx->pc != 0x2A4528u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A45A0_0x2a45a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4528u; }
        if (ctx->pc != 0x2A4528u) { return; }
    }
    ctx->pc = 0x2A4528u;
label_2a4528:
    // 0x2a4528: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x2a4528u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x2a452c: 0xc0a9164  jal         func_2A4590
    ctx->pc = 0x2A452Cu;
    SET_GPR_U32(ctx, 31, 0x2A4534u);
    ctx->pc = 0x2A4530u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A452Cu;
            // 0x2a4530: 0x260402c0  addiu       $a0, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4590u;
    if (runtime->hasFunction(0x2A4590u)) {
        auto targetFn = runtime->lookupFunction(0x2A4590u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4534u; }
        if (ctx->pc != 0x2A4534u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A4590_0x2a4590(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4534u; }
        if (ctx->pc != 0x2A4534u) { return; }
    }
    ctx->pc = 0x2A4534u;
label_2a4534:
    // 0x2a4534: 0x4600ab06  mov.s       $f12, $f21
    ctx->pc = 0x2a4534u;
    ctx->f[12] = FPU_MOV_S(ctx->f[21]);
    // 0x2a4538: 0xc0a9160  jal         func_2A4580
    ctx->pc = 0x2A4538u;
    SET_GPR_U32(ctx, 31, 0x2A4540u);
    ctx->pc = 0x2A453Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4538u;
            // 0x2a453c: 0x260402c0  addiu       $a0, $s0, 0x2C0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4580u;
    if (runtime->hasFunction(0x2A4580u)) {
        auto targetFn = runtime->lookupFunction(0x2A4580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4540u; }
        if (ctx->pc != 0x2A4540u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A4580_0x2a4580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A4540u; }
        if (ctx->pc != 0x2A4540u) { return; }
    }
    ctx->pc = 0x2A4540u;
label_2a4540:
    // 0x2a4540: 0x260402c0  addiu       $a0, $s0, 0x2C0
    ctx->pc = 0x2a4540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 704));
    // 0x2a4544: 0xc0a915c  jal         func_2A4570
    ctx->pc = 0x2A4544u;
    SET_GPR_U32(ctx, 31, 0x2A454Cu);
    ctx->pc = 0x2A4548u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4544u;
            // 0x2a4548: 0x4600b306  mov.s       $f12, $f22 (Delay Slot)
        ctx->f[12] = FPU_MOV_S(ctx->f[22]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4570u;
    if (runtime->hasFunction(0x2A4570u)) {
        auto targetFn = runtime->lookupFunction(0x2A4570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A454Cu; }
        if (ctx->pc != 0x2A454Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A4570_0x2a4570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2A454Cu; }
        if (ctx->pc != 0x2A454Cu) { return; }
    }
    ctx->pc = 0x2A454Cu;
label_2a454c:
    // 0x2a454c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2a454cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2a4550: 0xc7b60008  lwc1        $f22, 0x8($sp)
    ctx->pc = 0x2a4550u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2a4554: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2a4554u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2a4558: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x2a4558u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x2a455c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2a455cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2a4560: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x2a4560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2a4564: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2a4564u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2a4568: 0x3e00008  jr          $ra
    ctx->pc = 0x2A4568u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2A456Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2A4568u;
            // 0x2a456c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2A4570u;
}
