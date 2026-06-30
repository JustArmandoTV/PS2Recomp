#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_003E61B0
// Address: 0x3e61b0 - 0x3e6640
void sub_003E61B0_0x3e61b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003E61B0_0x3e61b0");
#endif

    switch (ctx->pc) {
        case 0x3e625cu: goto label_3e625c;
        case 0x3e6268u: goto label_3e6268;
        case 0x3e6278u: goto label_3e6278;
        case 0x3e628cu: goto label_3e628c;
        case 0x3e62a0u: goto label_3e62a0;
        case 0x3e62acu: goto label_3e62ac;
        case 0x3e62bcu: goto label_3e62bc;
        case 0x3e6348u: goto label_3e6348;
        case 0x3e63bcu: goto label_3e63bc;
        case 0x3e63f8u: goto label_3e63f8;
        case 0x3e6414u: goto label_3e6414;
        case 0x3e6454u: goto label_3e6454;
        case 0x3e6468u: goto label_3e6468;
        case 0x3e64ecu: goto label_3e64ec;
        case 0x3e6510u: goto label_3e6510;
        case 0x3e6588u: goto label_3e6588;
        case 0x3e659cu: goto label_3e659c;
        case 0x3e65b8u: goto label_3e65b8;
        case 0x3e65c8u: goto label_3e65c8;
        case 0x3e65e4u: goto label_3e65e4;
        case 0x3e65f8u: goto label_3e65f8;
        case 0x3e6608u: goto label_3e6608;
        default: break;
    }

    ctx->pc = 0x3e61b0u;

    // 0x3e61b0: 0x27bdff10  addiu       $sp, $sp, -0xF0
    ctx->pc = 0x3e61b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967056));
    // 0x3e61b4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x3e61b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
    // 0x3e61b8: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x3e61b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x3e61bc: 0x3c05006f  lui         $a1, 0x6F
    ctx->pc = 0x3e61bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)111 << 16));
    // 0x3e61c0: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3e61c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3e61c4: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3e61c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3e61c8: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x3e61c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e61cc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3e61ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3e61d0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x3e61d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x3e61d4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x3e61d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x3e61d8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3e61d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3e61dc: 0x26b10008  addiu       $s1, $s5, 0x8
    ctx->pc = 0x3e61dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x3e61e0: 0xe7b50004  swc1        $f21, 0x4($sp)
    ctx->pc = 0x3e61e0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3e61e4: 0xe7b40000  swc1        $f20, 0x0($sp)
    ctx->pc = 0x3e61e4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3e61e8: 0x8c7389f0  lw          $s3, -0x7610($v1)
    ctx->pc = 0x3e61e8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937072)));
    // 0x3e61ec: 0x8c860008  lw          $a2, 0x8($a0)
    ctx->pc = 0x3e61ecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3e61f0: 0x8cb0e378  lw          $s0, -0x1C88($a1)
    ctx->pc = 0x3e61f0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4294959992)));
    // 0x3e61f4: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3e61f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x3e61f8: 0x8c68d120  lw          $t0, -0x2EE0($v1)
    ctx->pc = 0x3e61f8u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294955296)));
    // 0x3e61fc: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x3e61fcu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x3e6200: 0x9484000c  lhu         $a0, 0xC($a0)
    ctx->pc = 0x3e6200u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x3e6204: 0x3c0500af  lui         $a1, 0xAF
    ctx->pc = 0x3e6204u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)175 << 16));
    // 0x3e6208: 0x24a56ef8  addiu       $a1, $a1, 0x6EF8
    ctx->pc = 0x3e6208u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 28408));
    // 0x3e620c: 0x3c03006f  lui         $v1, 0x6F
    ctx->pc = 0x3e620cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)111 << 16));
    // 0x3e6210: 0x8d080010  lw          $t0, 0x10($t0)
    ctx->pc = 0x3e6210u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 16)));
    // 0x3e6214: 0x8c67e360  lw          $a3, -0x1CA0($v1)
    ctx->pc = 0x3e6214u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294959968)));
    // 0x3e6218: 0xa69021  addu        $s2, $a1, $a2
    ctx->pc = 0x3e6218u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x3e621c: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3e621cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x3e6220: 0x8d050000  lw          $a1, 0x0($t0)
    ctx->pc = 0x3e6220u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3e6224: 0x3c0300af  lui         $v1, 0xAF
    ctx->pc = 0x3e6224u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)175 << 16));
    // 0x3e6228: 0x24634680  addiu       $v1, $v1, 0x4680
    ctx->pc = 0x3e6228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 18048));
    // 0x3e622c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x3e622cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x3e6230: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3e6230u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3e6234: 0x108000f4  beqz        $a0, . + 4 + (0xF4 << 2)
    ctx->pc = 0x3E6234u;
    {
        const bool branch_taken_0x3e6234 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6234u;
            // 0x3e6238: 0x24b40010  addiu       $s4, $a1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6234) {
            ctx->pc = 0x3E6608u;
            goto label_3e6608;
        }
    }
    ctx->pc = 0x3E623Cu;
    // 0x3e623c: 0x8c850054  lw          $a1, 0x54($a0)
    ctx->pc = 0x3e623cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 84)));
    // 0x3e6240: 0x3c030010  lui         $v1, 0x10
    ctx->pc = 0x3e6240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16 << 16));
    // 0x3e6244: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x3e6244u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x3e6248: 0x506000f0  beql        $v1, $zero, . + 4 + (0xF0 << 2)
    ctx->pc = 0x3E6248u;
    {
        const bool branch_taken_0x3e6248 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6248) {
            ctx->pc = 0x3E624Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6248u;
            // 0x3e624c: 0xdfbf0070  ld          $ra, 0x70($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E660Cu;
            goto label_3e660c;
        }
    }
    ctx->pc = 0x3E6250u;
    // 0x3e6250: 0x96260006  lhu         $a2, 0x6($s1)
    ctx->pc = 0x3e6250u;
    SET_GPR_U32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 6)));
    // 0x3e6254: 0xc0d9dfc  jal         func_3677F0
    ctx->pc = 0x3E6254u;
    SET_GPR_U32(ctx, 31, 0x3E625Cu);
    ctx->pc = 0x3E6258u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6254u;
            // 0x3e6258: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3677F0u;
    if (runtime->hasFunction(0x3677F0u)) {
        auto targetFn = runtime->lookupFunction(0x3677F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E625Cu; }
        if (ctx->pc != 0x3E625Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003677F0_0x3677f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E625Cu; }
        if (ctx->pc != 0x3E625Cu) { return; }
    }
    ctx->pc = 0x3E625Cu;
label_3e625c:
    // 0x3e625c: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x3e625cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x3e6260: 0xc04cce4  jal         func_133390
    ctx->pc = 0x3E6260u;
    SET_GPR_U32(ctx, 31, 0x3E6268u);
    ctx->pc = 0x3E6264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6260u;
            // 0x3e6264: 0x27a500a0  addiu       $a1, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133390u;
    if (runtime->hasFunction(0x133390u)) {
        auto targetFn = runtime->lookupFunction(0x133390u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6268u; }
        if (ctx->pc != 0x3E6268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133390_0x133390(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6268u; }
        if (ctx->pc != 0x3E6268u) { return; }
    }
    ctx->pc = 0x3E6268u;
label_3e6268:
    // 0x3e6268: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3e6268u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3e626c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3e626cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3e6270: 0xc04ce80  jal         func_133A00
    ctx->pc = 0x3E6270u;
    SET_GPR_U32(ctx, 31, 0x3E6278u);
    ctx->pc = 0x3E6274u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6270u;
            // 0x3e6274: 0x24a5a0c0  addiu       $a1, $a1, -0x5F40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942912));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133A00u;
    if (runtime->hasFunction(0x133A00u)) {
        auto targetFn = runtime->lookupFunction(0x133A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6278u; }
        if (ctx->pc != 0x3E6278u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133A00_0x133a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6278u; }
        if (ctx->pc != 0x3E6278u) { return; }
    }
    ctx->pc = 0x3E6278u;
label_3e6278:
    // 0x3e6278: 0x3c060066  lui         $a2, 0x66
    ctx->pc = 0x3e6278u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)102 << 16));
    // 0x3e627c: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3e627cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3e6280: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3e6280u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3e6284: 0xc04cca0  jal         func_133280
    ctx->pc = 0x3E6284u;
    SET_GPR_U32(ctx, 31, 0x3E628Cu);
    ctx->pc = 0x3E6288u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6284u;
            // 0x3e6288: 0x24c6a0b0  addiu       $a2, $a2, -0x5F50 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294942896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133280u;
    if (runtime->hasFunction(0x133280u)) {
        auto targetFn = runtime->lookupFunction(0x133280u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E628Cu; }
        if (ctx->pc != 0x3E628Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133280_0x133280(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E628Cu; }
        if (ctx->pc != 0x3E628Cu) { return; }
    }
    ctx->pc = 0x3E628Cu;
label_3e628c:
    // 0x3e628c: 0x3c050066  lui         $a1, 0x66
    ctx->pc = 0x3e628cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)102 << 16));
    // 0x3e6290: 0x27a40090  addiu       $a0, $sp, 0x90
    ctx->pc = 0x3e6290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x3e6294: 0x24a5a0b0  addiu       $a1, $a1, -0x5F50
    ctx->pc = 0x3e6294u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294942896));
    // 0x3e6298: 0xc04cc08  jal         func_133020
    ctx->pc = 0x3E6298u;
    SET_GPR_U32(ctx, 31, 0x3E62A0u);
    ctx->pc = 0x3E629Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6298u;
            // 0x3e629c: 0xafa00094  sw          $zero, 0x94($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133020u;
    if (runtime->hasFunction(0x133020u)) {
        auto targetFn = runtime->lookupFunction(0x133020u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E62A0u; }
        if (ctx->pc != 0x3E62A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133020_0x133020(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E62A0u; }
        if (ctx->pc != 0x3E62A0u) { return; }
    }
    ctx->pc = 0x3E62A0u;
label_3e62a0:
    // 0x3e62a0: 0x46000546  mov.s       $f21, $f0
    ctx->pc = 0x3e62a0u;
    ctx->f[21] = FPU_MOV_S(ctx->f[0]);
    // 0x3e62a4: 0xc04cc14  jal         func_133050
    ctx->pc = 0x3E62A4u;
    SET_GPR_U32(ctx, 31, 0x3E62ACu);
    ctx->pc = 0x3E62A8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E62A4u;
            // 0x3e62a8: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E62ACu; }
        if (ctx->pc != 0x3E62ACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E62ACu; }
        if (ctx->pc != 0x3E62ACu) { return; }
    }
    ctx->pc = 0x3E62ACu;
label_3e62ac:
    // 0x3e62ac: 0x3c040066  lui         $a0, 0x66
    ctx->pc = 0x3e62acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)102 << 16));
    // 0x3e62b0: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3e62b0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3e62b4: 0xc04cc14  jal         func_133050
    ctx->pc = 0x3E62B4u;
    SET_GPR_U32(ctx, 31, 0x3E62BCu);
    ctx->pc = 0x3E62B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E62B4u;
            // 0x3e62b8: 0x2484a0b0  addiu       $a0, $a0, -0x5F50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294942896));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133050u;
    if (runtime->hasFunction(0x133050u)) {
        auto targetFn = runtime->lookupFunction(0x133050u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E62BCu; }
        if (ctx->pc != 0x3E62BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133050_0x133050(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E62BCu; }
        if (ctx->pc != 0x3E62BCu) { return; }
    }
    ctx->pc = 0x3E62BCu;
label_3e62bc:
    // 0x3e62bc: 0x4600a002  mul.s       $f0, $f20, $f0
    ctx->pc = 0x3e62bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
    // 0x3e62c0: 0x3c02bf80  lui         $v0, 0xBF80
    ctx->pc = 0x3e62c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49024 << 16));
    // 0x3e62c4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3e62c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3e62c8: 0x4600a843  div.s       $f1, $f21, $f0
    ctx->pc = 0x3e62c8u;
    if (ctx->f[0] == 0.0f) { ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = copysignf(INFINITY, ctx->f[21] * 0.0f); } else ctx->f[1] = ctx->f[21] / ctx->f[0];
    // 0x3e62cc: 0x0  nop
    ctx->pc = 0x3e62ccu;
    // NOP
    // 0x3e62d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e62d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e62d4: 0x0  nop
    ctx->pc = 0x3e62d4u;
    // NOP
    // 0x3e62d8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3e62d8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e62dc: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3E62DCu;
    {
        const bool branch_taken_0x3e62dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3e62dc) {
            ctx->pc = 0x3E62E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E62DCu;
            // 0x3e62e0: 0x3c023f80  lui         $v0, 0x3F80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E62ECu;
            goto label_3e62ec;
        }
    }
    ctx->pc = 0x3E62E4u;
    // 0x3e62e4: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3e62e4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e62e8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3e62e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_3e62ec:
    // 0x3e62ec: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x3e62ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3e62f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e62f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e62f4: 0x0  nop
    ctx->pc = 0x3e62f4u;
    // NOP
    // 0x3e62f8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x3e62f8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e62fc: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3E62FCu;
    {
        const bool branch_taken_0x3e62fc = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E6300u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E62FCu;
            // 0x3e6300: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e62fc) {
            ctx->pc = 0x3E6308u;
            goto label_3e6308;
        }
    }
    ctx->pc = 0x3E6304u;
    // 0x3e6304: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e6304u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e6308:
    // 0x3e6308: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3e6308u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3e630c: 0x38830001  xori        $v1, $a0, 0x1
    ctx->pc = 0x3e630cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x3e6310: 0x822024  and         $a0, $a0, $v0
    ctx->pc = 0x3e6310u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    // 0x3e6314: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3e6314u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e6318: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3e6318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3e631c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3e631cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3e6320: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3e6320u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3e6324: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e6324u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e6328: 0x0  nop
    ctx->pc = 0x3e6328u;
    // NOP
    // 0x3e632c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3e632cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3e6330: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3e6330u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3e6334: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e6334u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e6338: 0x0  nop
    ctx->pc = 0x3e6338u;
    // NOP
    // 0x3e633c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3e633cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3e6340: 0xc0477fe  jal         func_11DFF8
    ctx->pc = 0x3E6340u;
    SET_GPR_U32(ctx, 31, 0x3E6348u);
    ctx->pc = 0x3E6344u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6340u;
            // 0x3e6344: 0x46010300  add.s       $f12, $f0, $f1 (Delay Slot)
        ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x11DFF8u;
    if (runtime->hasFunction(0x11DFF8u)) {
        auto targetFn = runtime->lookupFunction(0x11DFF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6348u; }
        if (ctx->pc != 0x3E6348u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0011DFF8_0x11dff8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6348u; }
        if (ctx->pc != 0x3E6348u) { return; }
    }
    ctx->pc = 0x3E6348u;
label_3e6348:
    // 0x3e6348: 0xc7a10090  lwc1        $f1, 0x90($sp)
    ctx->pc = 0x3e6348u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e634c: 0x46000506  mov.s       $f20, $f0
    ctx->pc = 0x3e634cu;
    ctx->f[20] = FPU_MOV_S(ctx->f[0]);
    // 0x3e6350: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3e6350u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e6354: 0x0  nop
    ctx->pc = 0x3e6354u;
    // NOP
    // 0x3e6358: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3e6358u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3e635c: 0x45010002  bc1t        . + 4 + (0x2 << 2)
    ctx->pc = 0x3E635Cu;
    {
        const bool branch_taken_0x3e635c = ((ctx->fcr31 & 0x800000));
        ctx->pc = 0x3E6360u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E635Cu;
            // 0x3e6360: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e635c) {
            ctx->pc = 0x3E6368u;
            goto label_3e6368;
        }
    }
    ctx->pc = 0x3E6364u;
    // 0x3e6364: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3e6364u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3e6368:
    // 0x3e6368: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3E6368u;
    {
        const bool branch_taken_0x3e6368 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x3e6368) {
            ctx->pc = 0x3E636Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6368u;
            // 0x3e636c: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E637Cu;
            goto label_3e637c;
        }
    }
    ctx->pc = 0x3E6370u;
    // 0x3e6370: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e6370u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e6374: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3E6374u;
    {
        const bool branch_taken_0x3e6374 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6378u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6374u;
            // 0x3e6378: 0x468000e0  cvt.s.w     $f3, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6374) {
            ctx->pc = 0x3E6394u;
            goto label_3e6394;
        }
    }
    ctx->pc = 0x3E637Cu;
label_3e637c:
    // 0x3e637c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3e637cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3e6380: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3e6380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3e6384: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3e6384u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e6388: 0x0  nop
    ctx->pc = 0x3e6388u;
    // NOP
    // 0x3e638c: 0x468000e0  cvt.s.w     $f3, $f0
    ctx->pc = 0x3e638cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3e6390: 0x460318c0  add.s       $f3, $f3, $f3
    ctx->pc = 0x3e6390u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[3]);
label_3e6394:
    // 0x3e6394: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3e6394u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3e6398: 0x3c034000  lui         $v1, 0x4000
    ctx->pc = 0x3e6398u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16384 << 16));
    // 0x3e639c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x3e639cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3e63a0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3e63a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3e63a4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3e63a4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e63a8: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3e63a8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3e63ac: 0x46010018  adda.s      $f0, $f1
    ctx->pc = 0x3e63acu;
    ctx->f[31] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3e63b0: 0x4603101d  msub.s      $f0, $f2, $f3
    ctx->pc = 0x3e63b0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[31], FPU_MUL_S(ctx->f[2], ctx->f[3]));
    // 0x3e63b4: 0xc04f26c  jal         func_13C9B0
    ctx->pc = 0x3E63B4u;
    SET_GPR_U32(ctx, 31, 0x3E63BCu);
    ctx->pc = 0x3E63B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E63B4u;
            // 0x3e63b8: 0x4600a502  mul.s       $f20, $f20, $f0 (Delay Slot)
        ctx->f[20] = FPU_MUL_S(ctx->f[20], ctx->f[0]);
        ctx->in_delay_slot = false;
    ctx->pc = 0x13C9B0u;
    if (runtime->hasFunction(0x13C9B0u)) {
        auto targetFn = runtime->lookupFunction(0x13C9B0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E63BCu; }
        if (ctx->pc != 0x3E63BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013C9B0_0x13c9b0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E63BCu; }
        if (ctx->pc != 0x3E63BCu) { return; }
    }
    ctx->pc = 0x3E63BCu;
label_3e63bc:
    // 0x3e63bc: 0x96a20004  lhu         $v0, 0x4($s5)
    ctx->pc = 0x3e63bcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x3e63c0: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x3e63c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x3e63c4: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x3E63C4u;
    {
        const bool branch_taken_0x3e63c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e63c4) {
            ctx->pc = 0x3E63C8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x3E63C4u;
            // 0x3e63c8: 0x3c024622  lui         $v0, 0x4622 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
        ctx->in_delay_slot = false;
            ctx->pc = 0x3E63D4u;
            goto label_3e63d4;
        }
    }
    ctx->pc = 0x3E63CCu;
    // 0x3e63cc: 0xafa00084  sw          $zero, 0x84($sp)
    ctx->pc = 0x3e63ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 0));
    // 0x3e63d0: 0x3c024622  lui         $v0, 0x4622
    ctx->pc = 0x3e63d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17954 << 16));
label_3e63d4:
    // 0x3e63d4: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3e63d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3e63d8: 0x3442f983  ori         $v0, $v0, 0xF983
    ctx->pc = 0x3e63d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)63875);
    // 0x3e63dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x3e63dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3e63e0: 0x0  nop
    ctx->pc = 0x3e63e0u;
    // NOP
    // 0x3e63e4: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3e63e4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3e63e8: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3e63e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3e63ec: 0x44060000  mfc1        $a2, $f0
    ctx->pc = 0x3e63ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 6, bits); }
    // 0x3e63f0: 0xc04cdd0  jal         func_133740
    ctx->pc = 0x3E63F0u;
    SET_GPR_U32(ctx, 31, 0x3E63F8u);
    ctx->pc = 0x3E63F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E63F0u;
            // 0x3e63f4: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133740u;
    if (runtime->hasFunction(0x133740u)) {
        auto targetFn = runtime->lookupFunction(0x133740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E63F8u; }
        if (ctx->pc != 0x3E63F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133740_0x133740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E63F8u; }
        if (ctx->pc != 0x3E63F8u) { return; }
    }
    ctx->pc = 0x3E63F8u;
label_3e63f8:
    // 0x3e63f8: 0xc62c0008  lwc1        $f12, 0x8($s1)
    ctx->pc = 0x3e63f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3e63fc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3e63fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3e6400: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3e6400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3e6404: 0xc62e000c  lwc1        $f14, 0xC($s1)
    ctx->pc = 0x3e6404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x3e6408: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x3e6408u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x3e640c: 0xc04ce50  jal         func_133940
    ctx->pc = 0x3E640Cu;
    SET_GPR_U32(ctx, 31, 0x3E6414u);
    ctx->pc = 0x3E6410u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E640Cu;
            // 0x3e6410: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x133940u;
    if (runtime->hasFunction(0x133940u)) {
        auto targetFn = runtime->lookupFunction(0x133940u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6414u; }
        if (ctx->pc != 0x3E6414u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133940_0x133940(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6414u; }
        if (ctx->pc != 0x3E6414u) { return; }
    }
    ctx->pc = 0x3E6414u;
label_3e6414:
    // 0x3e6414: 0xc7a20080  lwc1        $f2, 0x80($sp)
    ctx->pc = 0x3e6414u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e6418: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x3e6418u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3e641c: 0xc6230010  lwc1        $f3, 0x10($s1)
    ctx->pc = 0x3e641cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3e6420: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3e6420u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6424: 0xc7a10084  lwc1        $f1, 0x84($sp)
    ctx->pc = 0x3e6424u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e6428: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x3e6428u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e642c: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x3e642cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3e6430: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x3e6430u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x3e6434: 0xe7a200d0  swc1        $f2, 0xD0($sp)
    ctx->pc = 0x3e6434u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x3e6438: 0xc6220014  lwc1        $f2, 0x14($s1)
    ctx->pc = 0x3e6438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3e643c: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x3e643cu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x3e6440: 0xe7a100d4  swc1        $f1, 0xD4($sp)
    ctx->pc = 0x3e6440u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    // 0x3e6444: 0xc6210018  lwc1        $f1, 0x18($s1)
    ctx->pc = 0x3e6444u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3e6448: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3e6448u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3e644c: 0xc04cd60  jal         func_133580
    ctx->pc = 0x3E644Cu;
    SET_GPR_U32(ctx, 31, 0x3E6454u);
    ctx->pc = 0x3E6450u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E644Cu;
            // 0x3e6450: 0xe7a000d8  swc1        $f0, 0xD8($sp) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x133580u;
    if (runtime->hasFunction(0x133580u)) {
        auto targetFn = runtime->lookupFunction(0x133580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6454u; }
        if (ctx->pc != 0x3E6454u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00133580_0x133580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6454u; }
        if (ctx->pc != 0x3E6454u) { return; }
    }
    ctx->pc = 0x3E6454u;
label_3e6454:
    // 0x3e6454: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x3e6454u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3e6458: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3e6458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e645c: 0x8c450028  lw          $a1, 0x28($v0)
    ctx->pc = 0x3e645cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x3e6460: 0xc04e4a4  jal         func_139290
    ctx->pc = 0x3E6460u;
    SET_GPR_U32(ctx, 31, 0x3E6468u);
    ctx->pc = 0x3E6464u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6460u;
            // 0x3e6464: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x139290u;
    if (runtime->hasFunction(0x139290u)) {
        auto targetFn = runtime->lookupFunction(0x139290u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6468u; }
        if (ctx->pc != 0x3E6468u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00139290_0x139290(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6468u; }
        if (ctx->pc != 0x3E6468u) { return; }
    }
    ctx->pc = 0x3E6468u;
label_3e6468:
    // 0x3e6468: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x3e6468u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3e646c: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x3e646cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x3e6470: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x3e6470u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x3e6474: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3e6474u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3e6478: 0x8c740004  lw          $s4, 0x4($v1)
    ctx->pc = 0x3e6478u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x3e647c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E647Cu;
    {
        const bool branch_taken_0x3e647c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6480u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E647Cu;
            // 0x3e6480: 0x8e91003c  lw          $s1, 0x3C($s4) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e647c) {
            ctx->pc = 0x3E6498u;
            goto label_3e6498;
        }
    }
    ctx->pc = 0x3E6484u;
    // 0x3e6484: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e6484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3e6488: 0x9442eb70  lhu         $v0, -0x1490($v0)
    ctx->pc = 0x3e6488u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962032)));
    // 0x3e648c: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x3e648cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x3e6490: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3E6490u;
    {
        const bool branch_taken_0x3e6490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6494u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6490u;
            // 0x3e6494: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e6490) {
            ctx->pc = 0x3E64A8u;
            goto label_3e64a8;
        }
    }
    ctx->pc = 0x3E6498u;
label_3e6498:
    // 0x3e6498: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e6498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3e649c: 0x9442ece0  lhu         $v0, -0x1320($v0)
    ctx->pc = 0x3e649cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962400)));
    // 0x3e64a0: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x3e64a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x3e64a4: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x3e64a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
label_3e64a8:
    // 0x3e64a8: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x3e64a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x3e64ac: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x3e64acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x3e64b0: 0x3203c  dsll32      $a0, $v1, 0
    ctx->pc = 0x3e64b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3e64b4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x3e64b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x3e64b8: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x3e64b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x3e64bc: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x3e64bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3e64c0: 0x3c02020a  lui         $v0, 0x20A
    ctx->pc = 0x3e64c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)522 << 16));
    // 0x3e64c4: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3e64c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3e64c8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3e64c8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3e64cc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3e64ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x3e64d0: 0x3c03005d  lui         $v1, 0x5D
    ctx->pc = 0x3e64d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)93 << 16));
    // 0x3e64d4: 0xfc44ce70  sd          $a0, -0x3190($v0)
    ctx->pc = 0x3e64d4u;
    WRITE64(ADD32(GPR_U32(ctx, 2), 4294954608), GPR_U64(ctx, 4));
    // 0x3e64d8: 0xdc6357f0  ld          $v1, 0x57F0($v1)
    ctx->pc = 0x3e64d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 22512)));
    // 0x3e64dc: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3e64dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x3e64e0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3e64e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e64e4: 0xc0574d8  jal         func_15D360
    ctx->pc = 0x3E64E4u;
    SET_GPR_U32(ctx, 31, 0x3E64ECu);
    ctx->pc = 0x3E64E8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E64E4u;
            // 0x3e64e8: 0xfc43ce78  sd          $v1, -0x3188($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294954616), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D360u;
    if (runtime->hasFunction(0x15D360u)) {
        auto targetFn = runtime->lookupFunction(0x15D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E64ECu; }
        if (ctx->pc != 0x3E64ECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D360_0x15d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E64ECu; }
        if (ctx->pc != 0x3E64ECu) { return; }
    }
    ctx->pc = 0x3E64ECu;
label_3e64ec:
    // 0x3e64ec: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x3e64ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x3e64f0: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3e64f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3e64f4: 0x34421001  ori         $v0, $v0, 0x1001
    ctx->pc = 0x3e64f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4097);
    // 0x3e64f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3e64f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e64fc: 0xae82003c  sw          $v0, 0x3C($s4)
    ctx->pc = 0x3e64fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
    // 0x3e6500: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3e6500u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x3e6504: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3e6504u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3e6508: 0xc055234  jal         func_1548D0
    ctx->pc = 0x3E6508u;
    SET_GPR_U32(ctx, 31, 0x3E6510u);
    ctx->pc = 0x3E650Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6508u;
            // 0x3e650c: 0x240800c0  addiu       $t0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1548D0u;
    if (runtime->hasFunction(0x1548D0u)) {
        auto targetFn = runtime->lookupFunction(0x1548D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6510u; }
        if (ctx->pc != 0x3E6510u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001548D0_0x1548d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6510u; }
        if (ctx->pc != 0x3E6510u) { return; }
    }
    ctx->pc = 0x3E6510u;
label_3e6510:
    // 0x3e6510: 0x8e620014  lw          $v0, 0x14($s3)
    ctx->pc = 0x3e6510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x3e6514: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3e6514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3e6518: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3E6518u;
    {
        const bool branch_taken_0x3e6518 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3e6518) {
            ctx->pc = 0x3E6534u;
            goto label_3e6534;
        }
    }
    ctx->pc = 0x3E6520u;
    // 0x3e6520: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e6520u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3e6524: 0x9442eb70  lhu         $v0, -0x1490($v0)
    ctx->pc = 0x3e6524u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962032)));
    // 0x3e6528: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x3e6528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x3e652c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3E652Cu;
    {
        const bool branch_taken_0x3e652c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3E6530u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E652Cu;
            // 0x3e6530: 0x21340  sll         $v0, $v0, 13 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3e652c) {
            ctx->pc = 0x3E6544u;
            goto label_3e6544;
        }
    }
    ctx->pc = 0x3E6534u;
label_3e6534:
    // 0x3e6534: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x3e6534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
    // 0x3e6538: 0x9442ece0  lhu         $v0, -0x1320($v0)
    ctx->pc = 0x3e6538u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294962400)));
    // 0x3e653c: 0x304201ff  andi        $v0, $v0, 0x1FF
    ctx->pc = 0x3e653cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)511);
    // 0x3e6540: 0x21340  sll         $v0, $v0, 13
    ctx->pc = 0x3e6540u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 13));
label_3e6544:
    // 0x3e6544: 0x21b42  srl         $v1, $v0, 13
    ctx->pc = 0x3e6544u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 13));
    // 0x3e6548: 0x3c02ff00  lui         $v0, 0xFF00
    ctx->pc = 0x3e6548u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65280 << 16));
    // 0x3e654c: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x3e654cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3e6550: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x3e6550u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3e6554: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x3e6554u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x3e6558: 0x3c02020a  lui         $v0, 0x20A
    ctx->pc = 0x3e6558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)522 << 16));
    // 0x3e655c: 0x3c03006d  lui         $v1, 0x6D
    ctx->pc = 0x3e655cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)109 << 16));
    // 0x3e6560: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x3e6560u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3e6564: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x3e6564u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x3e6568: 0xdc4557f0  ld          $a1, 0x57F0($v0)
    ctx->pc = 0x3e6568u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 2), 22512)));
    // 0x3e656c: 0x70042389  pcpyld      $a0, $zero, $a0
    ctx->pc = 0x3e656cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 0), GPR_VEC(ctx, 4)));
    // 0x3e6570: 0xc42025  or          $a0, $a2, $a0
    ctx->pc = 0x3e6570u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x3e6574: 0xfc64ce70  sd          $a0, -0x3190($v1)
    ctx->pc = 0x3e6574u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 4294954608), GPR_U64(ctx, 4));
    // 0x3e6578: 0x3c02006d  lui         $v0, 0x6D
    ctx->pc = 0x3e6578u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)109 << 16));
    // 0x3e657c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3e657cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e6580: 0xc0574d8  jal         func_15D360
    ctx->pc = 0x3E6580u;
    SET_GPR_U32(ctx, 31, 0x3E6588u);
    ctx->pc = 0x3E6584u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6580u;
            // 0x3e6584: 0xfc45ce78  sd          $a1, -0x3188($v0) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 2), 4294954616), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x15D360u;
    if (runtime->hasFunction(0x15D360u)) {
        auto targetFn = runtime->lookupFunction(0x15D360u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6588u; }
        if (ctx->pc != 0x3E6588u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0015D360_0x15d360(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6588u; }
        if (ctx->pc != 0x3E6588u) { return; }
    }
    ctx->pc = 0x3E6588u;
label_3e6588:
    // 0x3e6588: 0x3c023ee6  lui         $v0, 0x3EE6
    ctx->pc = 0x3e6588u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16102 << 16));
    // 0x3e658c: 0x3442e6e6  ori         $v0, $v0, 0xE6E6
    ctx->pc = 0x3e658cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)59110);
    // 0x3e6590: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3e6590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3e6594: 0xc054c3c  jal         func_1530F0
    ctx->pc = 0x3E6594u;
    SET_GPR_U32(ctx, 31, 0x3E659Cu);
    ctx->pc = 0x3E6598u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6594u;
            // 0x3e6598: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E659Cu; }
        if (ctx->pc != 0x3E659Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E659Cu; }
        if (ctx->pc != 0x3E659Cu) { return; }
    }
    ctx->pc = 0x3E659Cu;
label_3e659c:
    // 0x3e659c: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x3e659cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x3e65a0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x3e65a0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3e65a4: 0x34425001  ori         $v0, $v0, 0x5001
    ctx->pc = 0x3e65a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)20481);
    // 0x3e65a8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x3e65a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e65ac: 0xae82003c  sw          $v0, 0x3C($s4)
    ctx->pc = 0x3e65acu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 2));
    // 0x3e65b0: 0xc04a508  jal         func_129420
    ctx->pc = 0x3E65B0u;
    SET_GPR_U32(ctx, 31, 0x3E65B8u);
    ctx->pc = 0x3E65B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E65B0u;
            // 0x3e65b4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E65B8u; }
        if (ctx->pc != 0x3E65B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E65B8u; }
        if (ctx->pc != 0x3E65B8u) { return; }
    }
    ctx->pc = 0x3E65B8u;
label_3e65b8:
    // 0x3e65b8: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e65b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e65bc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3e65bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e65c0: 0xc04a576  jal         func_1295D8
    ctx->pc = 0x3E65C0u;
    SET_GPR_U32(ctx, 31, 0x3E65C8u);
    ctx->pc = 0x3E65C4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E65C0u;
            // 0x3e65c4: 0x2406000c  addiu       $a2, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1295D8u;
    if (runtime->hasFunction(0x1295D8u)) {
        auto targetFn = runtime->lookupFunction(0x1295D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E65C8u; }
        if (ctx->pc != 0x3E65C8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001295D8_0x1295d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E65C8u; }
        if (ctx->pc != 0x3E65C8u) { return; }
    }
    ctx->pc = 0x3E65C8u;
label_3e65c8:
    // 0x3e65c8: 0x8e440000  lw          $a0, 0x0($s2)
    ctx->pc = 0x3e65c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3e65cc: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x3e65ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x3e65d0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3e65d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e65d4: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x3e65d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x3e65d8: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x3e65d8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x3e65dc: 0xc055234  jal         func_1548D0
    ctx->pc = 0x3E65DCu;
    SET_GPR_U32(ctx, 31, 0x3E65E4u);
    ctx->pc = 0x3E65E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E65DCu;
            // 0x3e65e0: 0x34480080  ori         $t0, $v0, 0x80 (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
        ctx->in_delay_slot = false;
    ctx->pc = 0x1548D0u;
    if (runtime->hasFunction(0x1548D0u)) {
        auto targetFn = runtime->lookupFunction(0x1548D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E65E4u; }
        if (ctx->pc != 0x3E65E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001548D0_0x1548d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E65E4u; }
        if (ctx->pc != 0x3E65E4u) { return; }
    }
    ctx->pc = 0x3E65E4u;
label_3e65e4:
    // 0x3e65e4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3e65e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3e65e8: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x3e65e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x3e65ec: 0x2406000c  addiu       $a2, $zero, 0xC
    ctx->pc = 0x3e65ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x3e65f0: 0xc04a508  jal         func_129420
    ctx->pc = 0x3E65F0u;
    SET_GPR_U32(ctx, 31, 0x3E65F8u);
    ctx->pc = 0x3E65F4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E65F0u;
            // 0x3e65f4: 0xae91003c  sw          $s1, 0x3C($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 60), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x129420u;
    if (runtime->hasFunction(0x129420u)) {
        auto targetFn = runtime->lookupFunction(0x129420u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E65F8u; }
        if (ctx->pc != 0x3E65F8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00129420_0x129420(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E65F8u; }
        if (ctx->pc != 0x3E65F8u) { return; }
    }
    ctx->pc = 0x3E65F8u;
label_3e65f8:
    // 0x3e65f8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x3e65f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x3e65fc: 0x44826000  mtc1        $v0, $f12
    ctx->pc = 0x3e65fcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x3e6600: 0xc054c3c  jal         func_1530F0
    ctx->pc = 0x3E6600u;
    SET_GPR_U32(ctx, 31, 0x3E6608u);
    ctx->pc = 0x3E6604u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3E6600u;
            // 0x3e6604: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1530F0u;
    if (runtime->hasFunction(0x1530F0u)) {
        auto targetFn = runtime->lookupFunction(0x1530F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6608u; }
        if (ctx->pc != 0x3E6608u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001530F0_0x1530f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3E6608u; }
        if (ctx->pc != 0x3E6608u) { return; }
    }
    ctx->pc = 0x3E6608u;
label_3e6608:
    // 0x3e6608: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x3e6608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_3e660c:
    // 0x3e660c: 0xc7b50004  lwc1        $f21, 0x4($sp)
    ctx->pc = 0x3e660cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3e6610: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3e6610u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3e6614: 0xc7b40000  lwc1        $f20, 0x0($sp)
    ctx->pc = 0x3e6614u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3e6618: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3e6618u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3e661c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3e661cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3e6620: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3e6620u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3e6624: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x3e6624u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3e6628: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3e6628u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3e662c: 0x3e00008  jr          $ra
    ctx->pc = 0x3E662Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3E6630u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3E662Cu;
            // 0x3e6630: 0x27bd00f0  addiu       $sp, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3E6634u;
    // 0x3e6634: 0x0  nop
    ctx->pc = 0x3e6634u;
    // NOP
    // 0x3e6638: 0x0  nop
    ctx->pc = 0x3e6638u;
    // NOP
    // 0x3e663c: 0x0  nop
    ctx->pc = 0x3e663cu;
    // NOP
}
