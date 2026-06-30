#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002DCFB0
// Address: 0x2dcfb0 - 0x2dd240
void sub_002DCFB0_0x2dcfb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DCFB0_0x2dcfb0");
#endif

    switch (ctx->pc) {
        case 0x2dcfb0u: goto label_2dcfb0;
        case 0x2dcfb4u: goto label_2dcfb4;
        case 0x2dcfb8u: goto label_2dcfb8;
        case 0x2dcfbcu: goto label_2dcfbc;
        case 0x2dcfc0u: goto label_2dcfc0;
        case 0x2dcfc4u: goto label_2dcfc4;
        case 0x2dcfc8u: goto label_2dcfc8;
        case 0x2dcfccu: goto label_2dcfcc;
        case 0x2dcfd0u: goto label_2dcfd0;
        case 0x2dcfd4u: goto label_2dcfd4;
        case 0x2dcfd8u: goto label_2dcfd8;
        case 0x2dcfdcu: goto label_2dcfdc;
        case 0x2dcfe0u: goto label_2dcfe0;
        case 0x2dcfe4u: goto label_2dcfe4;
        case 0x2dcfe8u: goto label_2dcfe8;
        case 0x2dcfecu: goto label_2dcfec;
        case 0x2dcff0u: goto label_2dcff0;
        case 0x2dcff4u: goto label_2dcff4;
        case 0x2dcff8u: goto label_2dcff8;
        case 0x2dcffcu: goto label_2dcffc;
        case 0x2dd000u: goto label_2dd000;
        case 0x2dd004u: goto label_2dd004;
        case 0x2dd008u: goto label_2dd008;
        case 0x2dd00cu: goto label_2dd00c;
        case 0x2dd010u: goto label_2dd010;
        case 0x2dd014u: goto label_2dd014;
        case 0x2dd018u: goto label_2dd018;
        case 0x2dd01cu: goto label_2dd01c;
        case 0x2dd020u: goto label_2dd020;
        case 0x2dd024u: goto label_2dd024;
        case 0x2dd028u: goto label_2dd028;
        case 0x2dd02cu: goto label_2dd02c;
        case 0x2dd030u: goto label_2dd030;
        case 0x2dd034u: goto label_2dd034;
        case 0x2dd038u: goto label_2dd038;
        case 0x2dd03cu: goto label_2dd03c;
        case 0x2dd040u: goto label_2dd040;
        case 0x2dd044u: goto label_2dd044;
        case 0x2dd048u: goto label_2dd048;
        case 0x2dd04cu: goto label_2dd04c;
        case 0x2dd050u: goto label_2dd050;
        case 0x2dd054u: goto label_2dd054;
        case 0x2dd058u: goto label_2dd058;
        case 0x2dd05cu: goto label_2dd05c;
        case 0x2dd060u: goto label_2dd060;
        case 0x2dd064u: goto label_2dd064;
        case 0x2dd068u: goto label_2dd068;
        case 0x2dd06cu: goto label_2dd06c;
        case 0x2dd070u: goto label_2dd070;
        case 0x2dd074u: goto label_2dd074;
        case 0x2dd078u: goto label_2dd078;
        case 0x2dd07cu: goto label_2dd07c;
        case 0x2dd080u: goto label_2dd080;
        case 0x2dd084u: goto label_2dd084;
        case 0x2dd088u: goto label_2dd088;
        case 0x2dd08cu: goto label_2dd08c;
        case 0x2dd090u: goto label_2dd090;
        case 0x2dd094u: goto label_2dd094;
        case 0x2dd098u: goto label_2dd098;
        case 0x2dd09cu: goto label_2dd09c;
        case 0x2dd0a0u: goto label_2dd0a0;
        case 0x2dd0a4u: goto label_2dd0a4;
        case 0x2dd0a8u: goto label_2dd0a8;
        case 0x2dd0acu: goto label_2dd0ac;
        case 0x2dd0b0u: goto label_2dd0b0;
        case 0x2dd0b4u: goto label_2dd0b4;
        case 0x2dd0b8u: goto label_2dd0b8;
        case 0x2dd0bcu: goto label_2dd0bc;
        case 0x2dd0c0u: goto label_2dd0c0;
        case 0x2dd0c4u: goto label_2dd0c4;
        case 0x2dd0c8u: goto label_2dd0c8;
        case 0x2dd0ccu: goto label_2dd0cc;
        case 0x2dd0d0u: goto label_2dd0d0;
        case 0x2dd0d4u: goto label_2dd0d4;
        case 0x2dd0d8u: goto label_2dd0d8;
        case 0x2dd0dcu: goto label_2dd0dc;
        case 0x2dd0e0u: goto label_2dd0e0;
        case 0x2dd0e4u: goto label_2dd0e4;
        case 0x2dd0e8u: goto label_2dd0e8;
        case 0x2dd0ecu: goto label_2dd0ec;
        case 0x2dd0f0u: goto label_2dd0f0;
        case 0x2dd0f4u: goto label_2dd0f4;
        case 0x2dd0f8u: goto label_2dd0f8;
        case 0x2dd0fcu: goto label_2dd0fc;
        case 0x2dd100u: goto label_2dd100;
        case 0x2dd104u: goto label_2dd104;
        case 0x2dd108u: goto label_2dd108;
        case 0x2dd10cu: goto label_2dd10c;
        case 0x2dd110u: goto label_2dd110;
        case 0x2dd114u: goto label_2dd114;
        case 0x2dd118u: goto label_2dd118;
        case 0x2dd11cu: goto label_2dd11c;
        case 0x2dd120u: goto label_2dd120;
        case 0x2dd124u: goto label_2dd124;
        case 0x2dd128u: goto label_2dd128;
        case 0x2dd12cu: goto label_2dd12c;
        case 0x2dd130u: goto label_2dd130;
        case 0x2dd134u: goto label_2dd134;
        case 0x2dd138u: goto label_2dd138;
        case 0x2dd13cu: goto label_2dd13c;
        case 0x2dd140u: goto label_2dd140;
        case 0x2dd144u: goto label_2dd144;
        case 0x2dd148u: goto label_2dd148;
        case 0x2dd14cu: goto label_2dd14c;
        case 0x2dd150u: goto label_2dd150;
        case 0x2dd154u: goto label_2dd154;
        case 0x2dd158u: goto label_2dd158;
        case 0x2dd15cu: goto label_2dd15c;
        case 0x2dd160u: goto label_2dd160;
        case 0x2dd164u: goto label_2dd164;
        case 0x2dd168u: goto label_2dd168;
        case 0x2dd16cu: goto label_2dd16c;
        case 0x2dd170u: goto label_2dd170;
        case 0x2dd174u: goto label_2dd174;
        case 0x2dd178u: goto label_2dd178;
        case 0x2dd17cu: goto label_2dd17c;
        case 0x2dd180u: goto label_2dd180;
        case 0x2dd184u: goto label_2dd184;
        case 0x2dd188u: goto label_2dd188;
        case 0x2dd18cu: goto label_2dd18c;
        case 0x2dd190u: goto label_2dd190;
        case 0x2dd194u: goto label_2dd194;
        case 0x2dd198u: goto label_2dd198;
        case 0x2dd19cu: goto label_2dd19c;
        case 0x2dd1a0u: goto label_2dd1a0;
        case 0x2dd1a4u: goto label_2dd1a4;
        case 0x2dd1a8u: goto label_2dd1a8;
        case 0x2dd1acu: goto label_2dd1ac;
        case 0x2dd1b0u: goto label_2dd1b0;
        case 0x2dd1b4u: goto label_2dd1b4;
        case 0x2dd1b8u: goto label_2dd1b8;
        case 0x2dd1bcu: goto label_2dd1bc;
        case 0x2dd1c0u: goto label_2dd1c0;
        case 0x2dd1c4u: goto label_2dd1c4;
        case 0x2dd1c8u: goto label_2dd1c8;
        case 0x2dd1ccu: goto label_2dd1cc;
        case 0x2dd1d0u: goto label_2dd1d0;
        case 0x2dd1d4u: goto label_2dd1d4;
        case 0x2dd1d8u: goto label_2dd1d8;
        case 0x2dd1dcu: goto label_2dd1dc;
        case 0x2dd1e0u: goto label_2dd1e0;
        case 0x2dd1e4u: goto label_2dd1e4;
        case 0x2dd1e8u: goto label_2dd1e8;
        case 0x2dd1ecu: goto label_2dd1ec;
        case 0x2dd1f0u: goto label_2dd1f0;
        case 0x2dd1f4u: goto label_2dd1f4;
        case 0x2dd1f8u: goto label_2dd1f8;
        case 0x2dd1fcu: goto label_2dd1fc;
        case 0x2dd200u: goto label_2dd200;
        case 0x2dd204u: goto label_2dd204;
        case 0x2dd208u: goto label_2dd208;
        case 0x2dd20cu: goto label_2dd20c;
        case 0x2dd210u: goto label_2dd210;
        case 0x2dd214u: goto label_2dd214;
        case 0x2dd218u: goto label_2dd218;
        case 0x2dd21cu: goto label_2dd21c;
        case 0x2dd220u: goto label_2dd220;
        case 0x2dd224u: goto label_2dd224;
        case 0x2dd228u: goto label_2dd228;
        case 0x2dd22cu: goto label_2dd22c;
        case 0x2dd230u: goto label_2dd230;
        case 0x2dd234u: goto label_2dd234;
        case 0x2dd238u: goto label_2dd238;
        case 0x2dd23cu: goto label_2dd23c;
        default: break;
    }

    ctx->pc = 0x2dcfb0u;

label_2dcfb0:
    // 0x2dcfb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2dcfb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2dcfb4:
    // 0x2dcfb4: 0x3c03006c  lui         $v1, 0x6C
    ctx->pc = 0x2dcfb4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)108 << 16));
label_2dcfb8:
    // 0x2dcfb8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2dcfb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
label_2dcfbc:
    // 0x2dcfbc: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2dcfbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2dcfc0:
    // 0x2dcfc0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2dcfc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2dcfc4:
    // 0x2dcfc4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dcfc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2dcfc8:
    // 0x2dcfc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dcfc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2dcfcc:
    // 0x2dcfcc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dcfccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dcfd0:
    // 0x2dcfd0: 0x8ca70020  lw          $a3, 0x20($a1)
    ctx->pc = 0x2dcfd0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_2dcfd4:
    // 0x2dcfd4: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x2dcfd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_2dcfd8:
    // 0x2dcfd8: 0x8ce50000  lw          $a1, 0x0($a3)
    ctx->pc = 0x2dcfd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
label_2dcfdc:
    // 0x2dcfdc: 0xc58021  addu        $s0, $a2, $a1
    ctx->pc = 0x2dcfdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
label_2dcfe0:
    // 0x2dcfe0: 0xac900150  sw          $s0, 0x150($a0)
    ctx->pc = 0x2dcfe0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 336), GPR_U32(ctx, 16));
label_2dcfe4:
    // 0x2dcfe4: 0x8c638a08  lw          $v1, -0x75F8($v1)
    ctx->pc = 0x2dcfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294937096)));
label_2dcfe8:
    // 0x2dcfe8: 0x8c42e408  lw          $v0, -0x1BF8($v0)
    ctx->pc = 0x2dcfe8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960136)));
label_2dcfec:
    // 0x2dcfec: 0x8063007a  lb          $v1, 0x7A($v1)
    ctx->pc = 0x2dcfecu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 122)));
label_2dcff0:
    // 0x2dcff0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x2dcff0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
label_2dcff4:
    // 0x2dcff4: 0x702021  addu        $a0, $v1, $s0
    ctx->pc = 0x2dcff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
label_2dcff8:
    // 0x2dcff8: 0x2483fffc  addiu       $v1, $a0, -0x4
    ctx->pc = 0x2dcff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967292));
label_2dcffc:
    // 0x2dcffc: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x2dcffcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
label_2dd000:
    // 0x2dd000: 0xc48d0000  lwc1        $f13, 0x0($a0)
    ctx->pc = 0x2dd000u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2dd004:
    // 0x2dd004: 0xc48cfffc  lwc1        $f12, -0x4($a0)
    ctx->pc = 0x2dd004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2dd008:
    // 0x2dd008: 0xe44c0004  swc1        $f12, 0x4($v0)
    ctx->pc = 0x2dd008u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
label_2dd00c:
    // 0x2dd00c: 0xc052774  jal         func_149DD0
label_2dd010:
    if (ctx->pc == 0x2DD010u) {
        ctx->pc = 0x2DD010u;
            // 0x2dd010: 0xe44d0008  swc1        $f13, 0x8($v0) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->pc = 0x2DD014u;
        goto label_2dd014;
    }
    ctx->pc = 0x2DD00Cu;
    SET_GPR_U32(ctx, 31, 0x2DD014u);
    ctx->pc = 0x2DD010u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD00Cu;
            // 0x2dd010: 0xe44d0008  swc1        $f13, 0x8($v0) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x149DD0u;
    if (runtime->hasFunction(0x149DD0u)) {
        auto targetFn = runtime->lookupFunction(0x149DD0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD014u; }
        if (ctx->pc != 0x2DD014u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00149DD0_0x149dd0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD014u; }
        if (ctx->pc != 0x2DD014u) { return; }
    }
    ctx->pc = 0x2DD014u;
label_2dd014:
    // 0x2dd014: 0x3c02006f  lui         $v0, 0x6F
    ctx->pc = 0x2dd014u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)111 << 16));
label_2dd018:
    // 0x2dd018: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dd018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_2dd01c:
    // 0x2dd01c: 0x8c52e3e8  lw          $s2, -0x1C18($v0)
    ctx->pc = 0x2dd01cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294960104)));
label_2dd020:
    // 0x2dd020: 0x26020024  addiu       $v0, $s0, 0x24
    ctx->pc = 0x2dd020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 36));
label_2dd024:
    // 0x2dd024: 0xa2430013  sb          $v1, 0x13($s2)
    ctx->pc = 0x2dd024u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 19), (uint8_t)GPR_U32(ctx, 3));
label_2dd028:
    // 0x2dd028: 0xae220140  sw          $v0, 0x140($s1)
    ctx->pc = 0x2dd028u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 320), GPR_U32(ctx, 2));
label_2dd02c:
    // 0x2dd02c: 0x8e590000  lw          $t9, 0x0($s2)
    ctx->pc = 0x2dd02cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_2dd030:
    // 0x2dd030: 0xc60c0024  lwc1        $f12, 0x24($s0)
    ctx->pc = 0x2dd030u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2dd034:
    // 0x2dd034: 0xc60d0028  lwc1        $f13, 0x28($s0)
    ctx->pc = 0x2dd034u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2dd038:
    // 0x2dd038: 0x8f390038  lw          $t9, 0x38($t9)
    ctx->pc = 0x2dd038u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 56)));
label_2dd03c:
    // 0x2dd03c: 0x320f809  jalr        $t9
label_2dd040:
    if (ctx->pc == 0x2DD040u) {
        ctx->pc = 0x2DD040u;
            // 0x2dd040: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DD044u;
        goto label_2dd044;
    }
    ctx->pc = 0x2DD03Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DD044u);
        ctx->pc = 0x2DD040u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD03Cu;
            // 0x2dd040: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DD044u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DD044u; }
            if (ctx->pc != 0x2DD044u) { return; }
        }
        }
    }
    ctx->pc = 0x2DD044u;
label_2dd044:
    // 0x2dd044: 0x8e220140  lw          $v0, 0x140($s1)
    ctx->pc = 0x2dd044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 320)));
label_2dd048:
    // 0x2dd048: 0xc44e0010  lwc1        $f14, 0x10($v0)
    ctx->pc = 0x2dd048u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_2dd04c:
    // 0x2dd04c: 0xc44d000c  lwc1        $f13, 0xC($v0)
    ctx->pc = 0x2dd04cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_2dd050:
    // 0x2dd050: 0xc44c0008  lwc1        $f12, 0x8($v0)
    ctx->pc = 0x2dd050u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_2dd054:
    // 0x2dd054: 0xe64c0014  swc1        $f12, 0x14($s2)
    ctx->pc = 0x2dd054u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 20), bits); }
label_2dd058:
    // 0x2dd058: 0xe64d0018  swc1        $f13, 0x18($s2)
    ctx->pc = 0x2dd058u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 24), bits); }
label_2dd05c:
    // 0x2dd05c: 0xc0517cc  jal         func_145F30
label_2dd060:
    if (ctx->pc == 0x2DD060u) {
        ctx->pc = 0x2DD060u;
            // 0x2dd060: 0xe64e001c  swc1        $f14, 0x1C($s2) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
        ctx->pc = 0x2DD064u;
        goto label_2dd064;
    }
    ctx->pc = 0x2DD05Cu;
    SET_GPR_U32(ctx, 31, 0x2DD064u);
    ctx->pc = 0x2DD060u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD05Cu;
            // 0x2dd060: 0xe64e001c  swc1        $f14, 0x1C($s2) (Delay Slot)
        { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 28), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x145F30u;
    if (runtime->hasFunction(0x145F30u)) {
        auto targetFn = runtime->lookupFunction(0x145F30u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD064u; }
        if (ctx->pc != 0x2DD064u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00145F30_0x145f30(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD064u; }
        if (ctx->pc != 0x2DD064u) { return; }
    }
    ctx->pc = 0x2DD064u;
label_2dd064:
    // 0x2dd064: 0xc040180  jal         func_100600
label_2dd068:
    if (ctx->pc == 0x2DD068u) {
        ctx->pc = 0x2DD068u;
            // 0x2dd068: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->pc = 0x2DD06Cu;
        goto label_2dd06c;
    }
    ctx->pc = 0x2DD064u;
    SET_GPR_U32(ctx, 31, 0x2DD06Cu);
    ctx->pc = 0x2DD068u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD064u;
            // 0x2dd068: 0x24040054  addiu       $a0, $zero, 0x54 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 84));
        ctx->in_delay_slot = false;
    ctx->pc = 0x100600u;
    if (runtime->hasFunction(0x100600u)) {
        auto targetFn = runtime->lookupFunction(0x100600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD06Cu; }
        if (ctx->pc != 0x2DD06Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00100600_0x100600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD06Cu; }
        if (ctx->pc != 0x2DD06Cu) { return; }
    }
    ctx->pc = 0x2DD06Cu;
label_2dd06c:
    // 0x2dd06c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2dd06cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2dd070:
    // 0x2dd070: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
label_2dd074:
    if (ctx->pc == 0x2DD074u) {
        ctx->pc = 0x2DD074u;
            // 0x2dd074: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->pc = 0x2DD078u;
        goto label_2dd078;
    }
    ctx->pc = 0x2DD070u;
    {
        const bool branch_taken_0x2dd070 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd070) {
            ctx->pc = 0x2DD074u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD070u;
            // 0x2dd074: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DD084u;
            goto label_2dd084;
        }
    }
    ctx->pc = 0x2DD078u;
label_2dd078:
    // 0x2dd078: 0xc0b91b8  jal         func_2E46E0
label_2dd07c:
    if (ctx->pc == 0x2DD07Cu) {
        ctx->pc = 0x2DD080u;
        goto label_2dd080;
    }
    ctx->pc = 0x2DD078u;
    SET_GPR_U32(ctx, 31, 0x2DD080u);
    ctx->pc = 0x2E46E0u;
    if (runtime->hasFunction(0x2E46E0u)) {
        auto targetFn = runtime->lookupFunction(0x2E46E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD080u; }
        if (ctx->pc != 0x2DD080u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002E46E0_0x2e46e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD080u; }
        if (ctx->pc != 0x2DD080u) { return; }
    }
    ctx->pc = 0x2DD080u;
label_2dd080:
    // 0x2dd080: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2dd080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_2dd084:
    // 0x2dd084: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2dd084u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2dd088:
    // 0x2dd088: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dd088u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dd08c:
    // 0x2dd08c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dd08cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2dd090:
    // 0x2dd090: 0x3e00008  jr          $ra
label_2dd094:
    if (ctx->pc == 0x2DD094u) {
        ctx->pc = 0x2DD094u;
            // 0x2dd094: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->pc = 0x2DD098u;
        goto label_2dd098;
    }
    ctx->pc = 0x2DD090u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD094u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD090u;
            // 0x2dd094: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DD098u;
label_2dd098:
    // 0x2dd098: 0x0  nop
    ctx->pc = 0x2dd098u;
    // NOP
label_2dd09c:
    // 0x2dd09c: 0x0  nop
    ctx->pc = 0x2dd09cu;
    // NOP
label_2dd0a0:
    // 0x2dd0a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2dd0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
label_2dd0a4:
    // 0x2dd0a4: 0xe48c0008  swc1        $f12, 0x8($a0)
    ctx->pc = 0x2dd0a4u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
label_2dd0a8:
    // 0x2dd0a8: 0x44827800  mtc1        $v0, $f15
    ctx->pc = 0x2dd0a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[15], &bits, sizeof(bits)); }
label_2dd0ac:
    // 0x2dd0ac: 0x44807000  mtc1        $zero, $f14
    ctx->pc = 0x2dd0acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
label_2dd0b0:
    // 0x2dd0b0: 0x0  nop
    ctx->pc = 0x2dd0b0u;
    // NOP
label_2dd0b4:
    // 0x2dd0b4: 0x805182c  j           func_1460B0
label_2dd0b8:
    if (ctx->pc == 0x2DD0B8u) {
        ctx->pc = 0x2DD0B8u;
            // 0x2dd0b8: 0xe48d000c  swc1        $f13, 0xC($a0) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->pc = 0x2DD0BCu;
        goto label_2dd0bc;
    }
    ctx->pc = 0x2DD0B4u;
    ctx->pc = 0x2DD0B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD0B4u;
            // 0x2dd0b8: 0xe48d000c  swc1        $f13, 0xC($a0) (Delay Slot)
        { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 12), bits); }
        ctx->in_delay_slot = false;
    ctx->pc = 0x1460B0u;
    if (runtime->hasFunction(0x1460B0u)) {
        auto targetFn = runtime->lookupFunction(0x1460B0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_001460B0_0x1460b0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x2DD0BCu;
label_2dd0bc:
    // 0x2dd0bc: 0x0  nop
    ctx->pc = 0x2dd0bcu;
    // NOP
label_2dd0c0:
    // 0x2dd0c0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dd0c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_2dd0c4:
    // 0x2dd0c4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dd0c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_2dd0c8:
    // 0x2dd0c8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2dd0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2dd0cc:
    // 0x2dd0cc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dd0ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2dd0d0:
    // 0x2dd0d0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2dd0d0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dd0d4:
    // 0x2dd0d4: 0x1220002a  beqz        $s1, . + 4 + (0x2A << 2)
label_2dd0d8:
    if (ctx->pc == 0x2DD0D8u) {
        ctx->pc = 0x2DD0D8u;
            // 0x2dd0d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DD0DCu;
        goto label_2dd0dc;
    }
    ctx->pc = 0x2DD0D4u;
    {
        const bool branch_taken_0x2dd0d4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD0D8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD0D4u;
            // 0x2dd0d8: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd0d4) {
            ctx->pc = 0x2DD180u;
            goto label_2dd180;
        }
    }
    ctx->pc = 0x2DD0DCu;
label_2dd0dc:
    // 0x2dd0dc: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2dd0dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2dd0e0:
    // 0x2dd0e0: 0x24422ed0  addiu       $v0, $v0, 0x2ED0
    ctx->pc = 0x2dd0e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11984));
label_2dd0e4:
    // 0x2dd0e4: 0x12200020  beqz        $s1, . + 4 + (0x20 << 2)
label_2dd0e8:
    if (ctx->pc == 0x2DD0E8u) {
        ctx->pc = 0x2DD0E8u;
            // 0x2dd0e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2DD0ECu;
        goto label_2dd0ec;
    }
    ctx->pc = 0x2DD0E4u;
    {
        const bool branch_taken_0x2dd0e4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2DD0E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD0E4u;
            // 0x2dd0e8: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2dd0e4) {
            ctx->pc = 0x2DD168u;
            goto label_2dd168;
        }
    }
    ctx->pc = 0x2DD0ECu;
label_2dd0ec:
    // 0x2dd0ec: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x2dd0ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
label_2dd0f0:
    // 0x2dd0f0: 0x3c040064  lui         $a0, 0x64
    ctx->pc = 0x2dd0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)100 << 16));
label_2dd0f4:
    // 0x2dd0f4: 0x24422e80  addiu       $v0, $v0, 0x2E80
    ctx->pc = 0x2dd0f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 11904));
label_2dd0f8:
    // 0x2dd0f8: 0x248418a0  addiu       $a0, $a0, 0x18A0
    ctx->pc = 0x2dd0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6304));
label_2dd0fc:
    // 0x2dd0fc: 0xc0ad6c4  jal         func_2B5B10
label_2dd100:
    if (ctx->pc == 0x2DD100u) {
        ctx->pc = 0x2DD100u;
            // 0x2dd100: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->pc = 0x2DD104u;
        goto label_2dd104;
    }
    ctx->pc = 0x2DD0FCu;
    SET_GPR_U32(ctx, 31, 0x2DD104u);
    ctx->pc = 0x2DD100u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD0FCu;
            // 0x2dd100: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5B10u;
    if (runtime->hasFunction(0x2B5B10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5B10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD104u; }
        if (ctx->pc != 0x2DD104u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5B10_0x2b5b10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD104u; }
        if (ctx->pc != 0x2DD104u) { return; }
    }
    ctx->pc = 0x2DD104u;
label_2dd104:
    // 0x2dd104: 0x8e24012c  lw          $a0, 0x12C($s1)
    ctx->pc = 0x2dd104u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 300)));
label_2dd108:
    // 0x2dd108: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_2dd10c:
    if (ctx->pc == 0x2DD10Cu) {
        ctx->pc = 0x2DD10Cu;
            // 0x2dd10c: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->pc = 0x2DD110u;
        goto label_2dd110;
    }
    ctx->pc = 0x2DD108u;
    {
        const bool branch_taken_0x2dd108 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd108) {
            ctx->pc = 0x2DD10Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD108u;
            // 0x2dd10c: 0x8e240058  lw          $a0, 0x58($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DD124u;
            goto label_2dd124;
        }
    }
    ctx->pc = 0x2DD110u;
label_2dd110:
    // 0x2dd110: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2dd110u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2dd114:
    // 0x2dd114: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x2dd114u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_2dd118:
    // 0x2dd118: 0x320f809  jalr        $t9
label_2dd11c:
    if (ctx->pc == 0x2DD11Cu) {
        ctx->pc = 0x2DD11Cu;
            // 0x2dd11c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->pc = 0x2DD120u;
        goto label_2dd120;
    }
    ctx->pc = 0x2DD118u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2DD120u);
        ctx->pc = 0x2DD11Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD118u;
            // 0x2dd11c: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x2DD120u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x2DD120u; }
            if (ctx->pc != 0x2DD120u) { return; }
        }
        }
    }
    ctx->pc = 0x2DD120u;
label_2dd120:
    // 0x2dd120: 0x8e240058  lw          $a0, 0x58($s1)
    ctx->pc = 0x2dd120u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 88)));
label_2dd124:
    // 0x2dd124: 0xc074a08  jal         func_1D2820
label_2dd128:
    if (ctx->pc == 0x2DD128u) {
        ctx->pc = 0x2DD12Cu;
        goto label_2dd12c;
    }
    ctx->pc = 0x2DD124u;
    SET_GPR_U32(ctx, 31, 0x2DD12Cu);
    ctx->pc = 0x1D2820u;
    if (runtime->hasFunction(0x1D2820u)) {
        auto targetFn = runtime->lookupFunction(0x1D2820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD12Cu; }
        if (ctx->pc != 0x2DD12Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D2820_0x1d2820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD12Cu; }
        if (ctx->pc != 0x2DD12Cu) { return; }
    }
    ctx->pc = 0x2DD12Cu;
label_2dd12c:
    // 0x2dd12c: 0x26240130  addiu       $a0, $s1, 0x130
    ctx->pc = 0x2dd12cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 304));
label_2dd130:
    // 0x2dd130: 0xc0ad684  jal         func_2B5A10
label_2dd134:
    if (ctx->pc == 0x2DD134u) {
        ctx->pc = 0x2DD134u;
            // 0x2dd134: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2DD138u;
        goto label_2dd138;
    }
    ctx->pc = 0x2DD130u;
    SET_GPR_U32(ctx, 31, 0x2DD138u);
    ctx->pc = 0x2DD134u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD130u;
            // 0x2dd134: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B5A10u;
    if (runtime->hasFunction(0x2B5A10u)) {
        auto targetFn = runtime->lookupFunction(0x2B5A10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD138u; }
        if (ctx->pc != 0x2DD138u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B5A10_0x2b5a10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD138u; }
        if (ctx->pc != 0x2DD138u) { return; }
    }
    ctx->pc = 0x2DD138u;
label_2dd138:
    // 0x2dd138: 0x262400d0  addiu       $a0, $s1, 0xD0
    ctx->pc = 0x2dd138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 208));
label_2dd13c:
    // 0x2dd13c: 0xc0ad670  jal         func_2B59C0
label_2dd140:
    if (ctx->pc == 0x2DD140u) {
        ctx->pc = 0x2DD140u;
            // 0x2dd140: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2DD144u;
        goto label_2dd144;
    }
    ctx->pc = 0x2DD13Cu;
    SET_GPR_U32(ctx, 31, 0x2DD144u);
    ctx->pc = 0x2DD140u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD13Cu;
            // 0x2dd140: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B59C0u;
    if (runtime->hasFunction(0x2B59C0u)) {
        auto targetFn = runtime->lookupFunction(0x2B59C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD144u; }
        if (ctx->pc != 0x2DD144u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B59C0_0x2b59c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD144u; }
        if (ctx->pc != 0x2DD144u) { return; }
    }
    ctx->pc = 0x2DD144u;
label_2dd144:
    // 0x2dd144: 0x26240074  addiu       $a0, $s1, 0x74
    ctx->pc = 0x2dd144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 116));
label_2dd148:
    // 0x2dd148: 0xc0ad670  jal         func_2B59C0
label_2dd14c:
    if (ctx->pc == 0x2DD14Cu) {
        ctx->pc = 0x2DD14Cu;
            // 0x2dd14c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2DD150u;
        goto label_2dd150;
    }
    ctx->pc = 0x2DD148u;
    SET_GPR_U32(ctx, 31, 0x2DD150u);
    ctx->pc = 0x2DD14Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD148u;
            // 0x2dd14c: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B59C0u;
    if (runtime->hasFunction(0x2B59C0u)) {
        auto targetFn = runtime->lookupFunction(0x2B59C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD150u; }
        if (ctx->pc != 0x2DD150u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B59C0_0x2b59c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD150u; }
        if (ctx->pc != 0x2DD150u) { return; }
    }
    ctx->pc = 0x2DD150u;
label_2dd150:
    // 0x2dd150: 0x26240054  addiu       $a0, $s1, 0x54
    ctx->pc = 0x2dd150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 84));
label_2dd154:
    // 0x2dd154: 0xc0a8c98  jal         func_2A3260
label_2dd158:
    if (ctx->pc == 0x2DD158u) {
        ctx->pc = 0x2DD158u;
            // 0x2dd158: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x2DD15Cu;
        goto label_2dd15c;
    }
    ctx->pc = 0x2DD154u;
    SET_GPR_U32(ctx, 31, 0x2DD15Cu);
    ctx->pc = 0x2DD158u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD154u;
            // 0x2dd158: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3260u;
    if (runtime->hasFunction(0x2A3260u)) {
        auto targetFn = runtime->lookupFunction(0x2A3260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD15Cu; }
        if (ctx->pc != 0x2DD15Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3260_0x2a3260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD15Cu; }
        if (ctx->pc != 0x2DD15Cu) { return; }
    }
    ctx->pc = 0x2DD15Cu;
label_2dd15c:
    // 0x2dd15c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2dd15cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dd160:
    // 0x2dd160: 0xc075bf8  jal         func_1D6FE0
label_2dd164:
    if (ctx->pc == 0x2DD164u) {
        ctx->pc = 0x2DD164u;
            // 0x2dd164: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DD168u;
        goto label_2dd168;
    }
    ctx->pc = 0x2DD160u;
    SET_GPR_U32(ctx, 31, 0x2DD168u);
    ctx->pc = 0x2DD164u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD160u;
            // 0x2dd164: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1D6FE0u;
    if (runtime->hasFunction(0x1D6FE0u)) {
        auto targetFn = runtime->lookupFunction(0x1D6FE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD168u; }
        if (ctx->pc != 0x2DD168u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001D6FE0_0x1d6fe0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD168u; }
        if (ctx->pc != 0x2DD168u) { return; }
    }
    ctx->pc = 0x2DD168u;
label_2dd168:
    // 0x2dd168: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x2dd168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
label_2dd16c:
    // 0x2dd16c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2dd16cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_2dd170:
    // 0x2dd170: 0x58400004  blezl       $v0, . + 4 + (0x4 << 2)
label_2dd174:
    if (ctx->pc == 0x2DD174u) {
        ctx->pc = 0x2DD174u;
            // 0x2dd174: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DD178u;
        goto label_2dd178;
    }
    ctx->pc = 0x2DD170u;
    {
        const bool branch_taken_0x2dd170 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2dd170) {
            ctx->pc = 0x2DD174u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD170u;
            // 0x2dd174: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DD184u;
            goto label_2dd184;
        }
    }
    ctx->pc = 0x2DD178u;
label_2dd178:
    // 0x2dd178: 0xc0400a8  jal         func_1002A0
label_2dd17c:
    if (ctx->pc == 0x2DD17Cu) {
        ctx->pc = 0x2DD17Cu;
            // 0x2dd17c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DD180u;
        goto label_2dd180;
    }
    ctx->pc = 0x2DD178u;
    SET_GPR_U32(ctx, 31, 0x2DD180u);
    ctx->pc = 0x2DD17Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD178u;
            // 0x2dd17c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1002A0u;
    if (runtime->hasFunction(0x1002A0u)) {
        auto targetFn = runtime->lookupFunction(0x1002A0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD180u; }
        if (ctx->pc != 0x2DD180u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001002A0_0x1002a0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD180u; }
        if (ctx->pc != 0x2DD180u) { return; }
    }
    ctx->pc = 0x2DD180u;
label_2dd180:
    // 0x2dd180: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2dd180u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2dd184:
    // 0x2dd184: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dd184u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_2dd188:
    // 0x2dd188: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2dd188u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2dd18c:
    // 0x2dd18c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dd18cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2dd190:
    // 0x2dd190: 0x3e00008  jr          $ra
label_2dd194:
    if (ctx->pc == 0x2DD194u) {
        ctx->pc = 0x2DD194u;
            // 0x2dd194: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->pc = 0x2DD198u;
        goto label_2dd198;
    }
    ctx->pc = 0x2DD190u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD190u;
            // 0x2dd194: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DD198u;
label_2dd198:
    // 0x2dd198: 0x0  nop
    ctx->pc = 0x2dd198u;
    // NOP
label_2dd19c:
    // 0x2dd19c: 0x0  nop
    ctx->pc = 0x2dd19cu;
    // NOP
label_2dd1a0:
    // 0x2dd1a0: 0x80b7304  j           func_2DCC10
label_2dd1a4:
    if (ctx->pc == 0x2DD1A4u) {
        ctx->pc = 0x2DD1A8u;
        goto label_2dd1a8;
    }
    ctx->pc = 0x2DD1A0u;
    ctx->pc = 0x2DCC10u;
    {
        auto targetFn = runtime->lookupFunction(0x2DCC10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        return;
    }
    ctx->pc = 0x2DD1A8u;
label_2dd1a8:
    // 0x2dd1a8: 0x0  nop
    ctx->pc = 0x2dd1a8u;
    // NOP
label_2dd1ac:
    // 0x2dd1ac: 0x0  nop
    ctx->pc = 0x2dd1acu;
    // NOP
label_2dd1b0:
    // 0x2dd1b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dd1b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2dd1b4:
    // 0x2dd1b4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dd1b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2dd1b8:
    // 0x2dd1b8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dd1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2dd1bc:
    // 0x2dd1bc: 0xc0a9098  jal         func_2A4260
label_2dd1c0:
    if (ctx->pc == 0x2DD1C0u) {
        ctx->pc = 0x2DD1C0u;
            // 0x2dd1c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DD1C4u;
        goto label_2dd1c4;
    }
    ctx->pc = 0x2DD1BCu;
    SET_GPR_U32(ctx, 31, 0x2DD1C4u);
    ctx->pc = 0x2DD1C0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD1BCu;
            // 0x2dd1c0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4260u;
    if (runtime->hasFunction(0x2A4260u)) {
        auto targetFn = runtime->lookupFunction(0x2A4260u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD1C4u; }
        if (ctx->pc != 0x2DD1C4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A4260_0x2a4260(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD1C4u; }
        if (ctx->pc != 0x2DD1C4u) { return; }
    }
    ctx->pc = 0x2DD1C4u;
label_2dd1c4:
    // 0x2dd1c4: 0x8e030588  lw          $v1, 0x588($s0)
    ctx->pc = 0x2dd1c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1416)));
label_2dd1c8:
    // 0x2dd1c8: 0x5060000e  beql        $v1, $zero, . + 4 + (0xE << 2)
label_2dd1cc:
    if (ctx->pc == 0x2DD1CCu) {
        ctx->pc = 0x2DD1CCu;
            // 0x2dd1cc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->pc = 0x2DD1D0u;
        goto label_2dd1d0;
    }
    ctx->pc = 0x2DD1C8u;
    {
        const bool branch_taken_0x2dd1c8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd1c8) {
            ctx->pc = 0x2DD1CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD1C8u;
            // 0x2dd1cc: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2DD204u;
            goto label_2dd204;
        }
    }
    ctx->pc = 0x2DD1D0u;
label_2dd1d0:
    // 0x2dd1d0: 0x8e030580  lw          $v1, 0x580($s0)
    ctx->pc = 0x2dd1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1408)));
label_2dd1d4:
    // 0x2dd1d4: 0xae030570  sw          $v1, 0x570($s0)
    ctx->pc = 0x2dd1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1392), GPR_U32(ctx, 3));
label_2dd1d8:
    // 0x2dd1d8: 0x8e030584  lw          $v1, 0x584($s0)
    ctx->pc = 0x2dd1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1412)));
label_2dd1dc:
    // 0x2dd1dc: 0xae030574  sw          $v1, 0x574($s0)
    ctx->pc = 0x2dd1dcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1396), GPR_U32(ctx, 3));
label_2dd1e0:
    // 0x2dd1e0: 0x8e030588  lw          $v1, 0x588($s0)
    ctx->pc = 0x2dd1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1416)));
label_2dd1e4:
    // 0x2dd1e4: 0xae030578  sw          $v1, 0x578($s0)
    ctx->pc = 0x2dd1e4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1400), GPR_U32(ctx, 3));
label_2dd1e8:
    // 0x2dd1e8: 0x8e03058c  lw          $v1, 0x58C($s0)
    ctx->pc = 0x2dd1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1420)));
label_2dd1ec:
    // 0x2dd1ec: 0xae03057c  sw          $v1, 0x57C($s0)
    ctx->pc = 0x2dd1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1404), GPR_U32(ctx, 3));
label_2dd1f0:
    // 0x2dd1f0: 0xae000580  sw          $zero, 0x580($s0)
    ctx->pc = 0x2dd1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1408), GPR_U32(ctx, 0));
label_2dd1f4:
    // 0x2dd1f4: 0xae000584  sw          $zero, 0x584($s0)
    ctx->pc = 0x2dd1f4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1412), GPR_U32(ctx, 0));
label_2dd1f8:
    // 0x2dd1f8: 0xae000588  sw          $zero, 0x588($s0)
    ctx->pc = 0x2dd1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1416), GPR_U32(ctx, 0));
label_2dd1fc:
    // 0x2dd1fc: 0xae00058c  sw          $zero, 0x58C($s0)
    ctx->pc = 0x2dd1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 1420), GPR_U32(ctx, 0));
label_2dd200:
    // 0x2dd200: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dd200u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2dd204:
    // 0x2dd204: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dd204u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2dd208:
    // 0x2dd208: 0x3e00008  jr          $ra
label_2dd20c:
    if (ctx->pc == 0x2DD20Cu) {
        ctx->pc = 0x2DD20Cu;
            // 0x2dd20c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2DD210u;
        goto label_2dd210;
    }
    ctx->pc = 0x2DD208u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD20Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD208u;
            // 0x2dd20c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DD210u;
label_2dd210:
    // 0x2dd210: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2dd210u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2dd214:
    // 0x2dd214: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2dd214u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2dd218:
    // 0x2dd218: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2dd218u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2dd21c:
    // 0x2dd21c: 0xc0b7490  jal         func_2DD240
label_2dd220:
    if (ctx->pc == 0x2DD220u) {
        ctx->pc = 0x2DD220u;
            // 0x2dd220: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DD224u;
        goto label_2dd224;
    }
    ctx->pc = 0x2DD21Cu;
    SET_GPR_U32(ctx, 31, 0x2DD224u);
    ctx->pc = 0x2DD220u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD21Cu;
            // 0x2dd220: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2DD240u;
    if (runtime->hasFunction(0x2DD240u)) {
        auto targetFn = runtime->lookupFunction(0x2DD240u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD224u; }
        if (ctx->pc != 0x2DD224u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002DD240_0x2dd240(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD224u; }
        if (ctx->pc != 0x2DD224u) { return; }
    }
    ctx->pc = 0x2DD224u;
label_2dd224:
    // 0x2dd224: 0xc0a9184  jal         func_2A4610
label_2dd228:
    if (ctx->pc == 0x2DD228u) {
        ctx->pc = 0x2DD228u;
            // 0x2dd228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2DD22Cu;
        goto label_2dd22c;
    }
    ctx->pc = 0x2DD224u;
    SET_GPR_U32(ctx, 31, 0x2DD22Cu);
    ctx->pc = 0x2DD228u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD224u;
            // 0x2dd228: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A4610u;
    if (runtime->hasFunction(0x2A4610u)) {
        auto targetFn = runtime->lookupFunction(0x2A4610u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD22Cu; }
        if (ctx->pc != 0x2DD22Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A4610_0x2a4610(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2DD22Cu; }
        if (ctx->pc != 0x2DD22Cu) { return; }
    }
    ctx->pc = 0x2DD22Cu;
label_2dd22c:
    // 0x2dd22c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2dd22cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2dd230:
    // 0x2dd230: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2dd230u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_2dd234:
    // 0x2dd234: 0x3e00008  jr          $ra
label_2dd238:
    if (ctx->pc == 0x2DD238u) {
        ctx->pc = 0x2DD238u;
            // 0x2dd238: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x2DD23Cu;
        goto label_2dd23c;
    }
    ctx->pc = 0x2DD234u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD238u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2DD234u;
            // 0x2dd238: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2DD23Cu;
label_2dd23c:
    // 0x2dd23c: 0x0  nop
    ctx->pc = 0x2dd23cu;
    // NOP
}
